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
}


void UTP_WeaponComponent::Fire()
{
	// Invalid player Check
	if(m_pCharacter == nullptr || m_pCharacter->GetController() == nullptr)
	{
		return;
	}

	// Check that weapon is equipped
	if (m_pCharacter->m_pEquippedWeapon->m_pWeaponComponent != this)
	{
		return;
	}

	// Ammo Empty Check
	if (m_pCharacter->m_pEquippedWeapon->m_iCurrentAmmo <= 0)
	{
		// Try and play the sound if specified
		if (m_pEmptySound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, m_pEmptySound, m_pCharacter->GetActorLocation());
		}
		return;
	}

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// Get player controller, and spawn transform information
		APlayerController* PlayerController = Cast<APlayerController>(m_pCharacter->GetController());

		// Get reference to camera manager
		APlayerCameraManager* camManager = World->GetFirstPlayerController()->PlayerCameraManager;

		// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
		const FRotator rSpawnRotation = camManager->GetCameraRotation();
		const FVector vSpawnLocation = GetOwner()->GetActorLocation() + rSpawnRotation.RotateVector(m_vMuzzleOffset);
		
		
		switch (m_pCharacter->m_pEquippedWeapon->m_eWeaponType)
		{
		case EWeaponType::WT_Shotgun:
			// Iterate as many times as there are pellets
			for (int iter = 0; iter < FMath::RandRange(12, 16); iter++)
			{
				// Make a random offset to spread
				float fSpread = 100;
				FVector vOffset = FVector(FMath::RandRange(-fSpread, fSpread), FMath::RandRange(-fSpread, fSpread), FMath::RandRange(-fSpread, fSpread));
				FVector vEnd = vSpawnLocation + (camManager->GetCameraRotation().Vector() * 1000) + vOffset;

				// Traces the line shot
				TraceShot(vSpawnLocation, vEnd, rSpawnRotation);
			}
			break;
		default:
			// Get straight end
			FVector vEnd = vSpawnLocation + (camManager->GetCameraRotation().Vector() * 1000);

			// Traces the line shot
			TraceShot(vSpawnLocation, vEnd, rSpawnRotation);
			break;
		}
		// Decrease ammo count when shot is successful
		m_pCharacter->m_pEquippedWeapon->m_iCurrentAmmo = m_pCharacter->m_pEquippedWeapon->m_iCurrentAmmo - 1;
	}
	
	// Try and play the sound if specified
	if (m_pFireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, m_pFireSound, m_pCharacter->GetActorLocation());
	}

	// Try to play the particle effect if specified
	if (m_pMuzzleFlash != nullptr)
	{
		APlayerController* PlayerController = Cast<APlayerController>(m_pCharacter->GetController());
		const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
		const FVector SpawnLocation = GetOwner()->GetActorLocation() + SpawnRotation.RotateVector(m_vMuzzleOffset);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), m_pMuzzleFlash, SpawnLocation, SpawnRotation);
	}
}

void UTP_WeaponComponent::TraceShot(FVector a_vStart, FVector a_vEnd, FRotator a_rRotation)
{
	// Get player controller
	APlayerController* PlayerController = Cast<APlayerController>(m_pCharacter->GetController());

	// Set the query params to ignore self
	FCollisionQueryParams pQueryParams;
	pQueryParams.AddIgnoredActor(PlayerController);

	// LineTrace in direction of shot and store the first object it hits
	TArray<FHitResult> outHits;
	GetWorld()->LineTraceMultiByChannel(outHits, a_vStart, a_vEnd, ECollisionChannel::ECC_Pawn, pQueryParams);
	//UKismetSystemLibrary::LineTraceMulti(GetWorld(), SpawnLocation, vEnd, 
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
					UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), enemy->m_pBloodParticle, i->ImpactPoint, a_rRotation);
				}
				break;
			}
			else // Handler for when LineTrace hits anything else
			{
				// If sounds exist then play them
				if (m_pEnvironmentSounds.Num() > 0)
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_pEnvironmentSounds[FMath::RandRange(0, m_pEnvironmentSounds.Num() - 1)], m_pCharacter->GetActorLocation());
				}
			}
		}
	}
}

void UTP_WeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if(m_pCharacter != nullptr)
	{
		// Unregister from the OnUseItem Event
		m_pCharacter->OnUseItem.RemoveDynamic(this, &UTP_WeaponComponent::Fire);
	}
}

void UTP_WeaponComponent::AttachWeapon(ASurvivalShooterCharacter* TargetCharacter)
{
	m_pCharacter = TargetCharacter;
	if(m_pCharacter != nullptr)
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

		GetOwner()->AttachToComponent(m_pCharacter->GetMesh1P(),AttachmentRules, nSocketName);

		// Register so that Fire is called every time the character tries to use the item being held
		m_pCharacter->OnUseItem.AddDynamic(this, &UTP_WeaponComponent::Fire);
	}
}

