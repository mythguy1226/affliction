// Copyright Epic Games, Inc. All Rights Reserved.


#include "TP_WeaponComponent.h"
#include "SurvivalShooterCharacter.h"
#include "SurvivalShooterProjectile.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"
#include "Enemy.h"
#include "GlobalManager.h"

// Sets default values for this component's properties
UTP_WeaponComponent::UTP_WeaponComponent()
{
	// Default offset from the character location for projectiles to spawn
	MuzzleOffset = FVector(100.0f, 0.0f, 10.0f);
}


void UTP_WeaponComponent::Fire()
{
	// Invalid player Check
	if(Character == nullptr || Character->GetController() == nullptr)
	{
		return;
	}

	// Check that weapon is equipped
	if (Character->m_pEquippedWeapon->WeaponComponent != this)
	{
		return;
	}

	// Ammo Empty Check
	if (Character->m_pEquippedWeapon->m_iCurrentAmmo <= 0)
	{
		// Try and play the sound if specified
		if (EmptySound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, EmptySound, Character->GetActorLocation());
		}
		return;
	}

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// Get player controller, and spawn transform information
		APlayerController* PlayerController = Cast<APlayerController>(Character->GetController());
		const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
		// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
		const FVector SpawnLocation = GetOwner()->GetActorLocation() + SpawnRotation.RotateVector(MuzzleOffset);
		
		// Get reference to camera manager
		APlayerCameraManager* camManager = World->GetFirstPlayerController()->PlayerCameraManager;
		
		// Set the query params to ignore self
		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(PlayerController);
		
		// LineTrace in direction of shot and store the first object it hits
		TArray<FHitResult> outHits;
		World->LineTraceMultiByChannel(outHits, SpawnLocation, SpawnLocation + (camManager->GetCameraRotation().Vector() * 3000), ECollisionChannel::ECC_Pawn, QueryParams);
		//UKismetSystemLibrary::LineTraceMulti(GetWorld(), SpawnLocation, SpawnLocation + (camManager->GetCameraRotation().Vector() * 3000), 
		//	UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_Pawn), false,
		//	TArray<AActor*>(), EDrawDebugTrace::ForDuration, outHits, true);

		// Check that a collision happened
		if (outHits.Num() > 0)
		{
			// Iterate through the hit results
			for (auto i = outHits.CreateIterator(); i; i++)
			{
				// Handler for when LineTrace hits an enemy
				AEnemy* enemy = Cast<AEnemy>(i->GetActor());
				if (enemy)
				{
					// Handle enemy damage and point additions
					enemy->TakeDamage(m_fDamage);
					Cast<UGlobalManager>(UGameplayStatics::GetGameInstance(GetWorld()))->m_iPoints += 10;

					// Play blood splat particle
					if (enemy->m_pBloodParticle != nullptr)
					{
						UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), enemy->m_pBloodParticle, i->ImpactPoint, SpawnRotation);
					}
					break;
				}
				else // Handler for when LineTrace hits anything else
				{
					// If sounds exist then play them
					if (environmentSounds.Num() > 0)
					{
						UGameplayStatics::PlaySoundAtLocation(GetWorld(), environmentSounds[FMath::RandRange(0, environmentSounds.Num() - 1)], Character->GetActorLocation());
					}
				}
			}
		}
		// Decrease ammo count when shot is successful
		Character->m_pEquippedWeapon->m_iCurrentAmmo = Character->m_pEquippedWeapon->m_iCurrentAmmo - 1;
	}
	
	// Try and play the sound if specified
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, Character->GetActorLocation());
	}
	
	// Try and play a firing animation if specified
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Character->GetMesh1P()->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}

	// Try to play the particle effect if specified
	if (MuzzleFlash != nullptr)
	{
		APlayerController* PlayerController = Cast<APlayerController>(Character->GetController());
		const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
		const FVector SpawnLocation = GetOwner()->GetActorLocation() + SpawnRotation.RotateVector(MuzzleOffset);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), MuzzleFlash, SpawnLocation, SpawnRotation);
	}
}

void UTP_WeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if(Character != nullptr)
	{
		// Unregister from the OnUseItem Event
		Character->OnUseItem.RemoveDynamic(this, &UTP_WeaponComponent::Fire);
	}
}

void UTP_WeaponComponent::AttachWeapon(ASurvivalShooterCharacter* TargetCharacter)
{
	Character = TargetCharacter;
	if(Character != nullptr)
	{
		// Attach the weapon to the First Person Character
		FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);

		// Get the proper socket to attach the weapon to
		FName nSocketName;
		switch (m_eWeaponType)
		{
		case EWeaponType::WT_Pistol:
			nSocketName = TEXT("PistolSocket");
			break;
		case EWeaponType::WT_Rifle:
			nSocketName = TEXT("RifleSocket");
			break;
		case EWeaponType::WT_Shotgun:
			nSocketName = TEXT("ShotgunSocket");
			break;
		default:
			nSocketName = TEXT("PistolSocket");
			break;
		}

		GetOwner()->AttachToComponent(Character->GetMesh1P(),AttachmentRules, nSocketName);

		// Register so that Fire is called every time the character tries to use the item being held
		Character->OnUseItem.AddDynamic(this, &UTP_WeaponComponent::Fire);
	}
}

