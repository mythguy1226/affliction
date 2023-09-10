// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "Kismet/GameplayStatics.h"
#include "SurvivalShooterCharacter.h"
#include "GlobalManager.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	// Init manager reference and spawn location
	m_pEnemyManager = Cast<AEnemyManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AEnemyManager::StaticClass()));
	m_vWorldSpawnLocation = GetActorLocation();

	// Bind Anim Events
	UAnimInstance* pAnimInst = GetMesh()->GetAnimInstance();
	if (pAnimInst != nullptr)
	{
		pAnimInst->OnPlayMontageNotifyBegin.AddDynamic(this, &AEnemy::HandleOnMontageNotifyBegin);
		pAnimInst->OnMontageEnded.AddDynamic(this, &AEnemy::HandleOnMontageEnded);
	}
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Play enemy attack sequence for melee ranges
void AEnemy::MeleeAttack()
{
	// Check that montage exists
	if (m_pAttackMontage != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(m_pAttackMontage, 1.f);

			// If sounds exist then play them
			if (m_pAttackSounds.Num() > 0)
			{
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_pAttackSounds[FMath::RandRange(0, m_pAttackSounds.Num() - 1)], GetActorLocation());
			}
		}
	}
}

void AEnemy::GenerateHitSphere(FVector a_vLocation, float a_fRadius, float a_fDamage, bool a_bDebug)
{
	// Init hit results
	TArray<FHitResult> outHits;
	TArray<AActor*> ignoredActors;
	ignoredActors.Add(this);

	// Use Sphere Shape
	FCollisionShape sphereShape;
	sphereShape.ShapeType = ECollisionShape::Sphere;
	sphereShape.SetSphere(a_fRadius);

	// Set the query params
	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(this);

	// Sweep Trace at typical contact point of swing
	GetWorld()->SweepMultiByChannel(outHits, a_vLocation, a_vLocation, FQuat::Identity, ECollisionChannel::ECC_Pawn, sphereShape, queryParams);

	// Debug Trace to show visual representation
	if (a_bDebug)
	{
		// Sweep Trace at typical contact point of swing with debugging visuals
		UKismetSystemLibrary::SphereTraceMulti(GetWorld(), a_vLocation, a_vLocation,
			a_fRadius,
			UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_Pawn), true, ignoredActors,
			EDrawDebugTrace::ForDuration, outHits, true, FColor::Red);
	}

	// Check that a collision happened
	if (outHits.Num() > 0)
	{
		// Iterate through the hit results
		for (auto i = outHits.CreateIterator(); i; i++)
		{
			// Try to cast to the player
			ASurvivalShooterCharacter* pPlayer = Cast<ASurvivalShooterCharacter>(i->GetActor());
			if (pPlayer) // Continue if valid
			{
				// Deal damage
				pPlayer->TakeDamage(a_fDamage);
				break;
			}
		}
	}
}

// Method for taking damage
void AEnemy::TakeDamage(float a_fDamage, EDamageType a_eType)
{
	// Return if the death montage is playing
	if (GetMesh()->GetAnimInstance()->Montage_IsPlaying(m_pDeathMontage))
	{
		return;
	}

	// If sounds exist then play them
	if (m_pZombieHitSound)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_pZombieHitSound, GetActorLocation());
	}

	// Take damage
	m_fHealth -= a_fDamage;

	// Death handling
	if (m_fHealth <= 0)
	{
		// See if player is currently slashing
		ASurvivalShooterCharacter* pPlayer = Cast<ASurvivalShooterCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

		// Declare kill points
		int iPoints = 50;

		if (a_eType == EDamageType::DT_Sword) // Double the points for the kill if slashing
			iPoints *= 2;

		// Add points for kill
		Cast<UGlobalManager>(UGameplayStatics::GetGameInstance(GetWorld()))->m_iPoints += iPoints;

		Die();
	}
}

// Method for resetting enemy
void AEnemy::Reset()
{
	TeleportTo(m_vWorldSpawnLocation, GetActorRotation());
	m_fHealth = 30;
	m_bInCombat = false;
}

// Method for killing enemy
void AEnemy::Die()
{
	// If sounds exist then play them
	if (m_pDeathSounds.Num() > 0)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_pDeathSounds[FMath::RandRange(0, m_pDeathSounds.Num() - 1)], GetActorLocation());
	}

	// Play death montage
	GetMesh()->GetAnimInstance()->Montage_Play(m_pDeathMontage, 1.f);
}

void AEnemy::HandleOnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload)
{
	// Generate a hit sphere here to check for attack collisions
	if (NotifyName.ToString().Contains("CheckAttackCollisions"))
	{
		// Sphere Location
		FVector vOffset = (GetActorForwardVector() * 80.0f) + FVector(0.0f, 0.0f, 25.0f);
		FVector pLocation = GetActorLocation() + vOffset;

		// Generate a hit sphere at the hit location
		GenerateHitSphere(pLocation, 30.0f, 10.0f);
	}
}

void AEnemy::HandleOnMontageEnded(UAnimMontage* Montage, bool Interrupted)
{
	// Check if the montage is the reload montage
	if (Montage->GetName().Contains("Death"))
	{
		Reset();

		// Update Enemy Manager
		m_pEnemyManager->m_iWaveKills++;

		if (m_pEnemyManager->m_iWaveKills >= m_pEnemyManager->m_iCurrentWaveSize)
		{
			// Begin the next wave and update params
			m_pEnemyManager->UpdateWaveParameters();

			// Set a timer to start the next wave
			FTimerHandle TimerHandle;
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()
			{
				// Spawn next wave of enemies
				m_pEnemyManager->StartNextWave();
			}, m_pEnemyManager->m_fTimeBetweenWaves, false);
		}
		else
		{
			// Try to spawn more enemies
			m_pEnemyManager->SpawnMoreEnemies();
		}
	}
}
