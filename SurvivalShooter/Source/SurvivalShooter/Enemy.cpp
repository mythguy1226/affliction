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

	// Bind Events
	GetMesh()->GetAnimInstance()->OnMontageEnded.AddDynamic(this, &AEnemy::HandleOnMontageEnded);
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

// Returns the attack montage
UAnimMontage* AEnemy::GetAttackMontage()
{
	// Check that montage exists
	if (m_pAttackMontage != nullptr)
	{
		return m_pAttackMontage;
	}
	return nullptr;
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

			// Get the player instance
			APlayerController* pController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
			ASurvivalShooterCharacter* player = Cast<ASurvivalShooterCharacter>(pController->GetPawn());

			// If player reference is valid then deal damage
			if (player)
			{
				player->TakeDamage(10.0f);
			}

			// If sounds exist then play them
			if (m_pAttackSounds.Num() > 0)
			{
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_pAttackSounds[FMath::RandRange(0, m_pAttackSounds.Num() - 1)], GetActorLocation());
			}
		}
	}
}

// Method for taking damage
void AEnemy::TakeDamage(float a_fDamage)
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
	// Add points for kill
	Cast<UGlobalManager>(UGameplayStatics::GetGameInstance(GetWorld()))->m_iPoints += 100;

	// If sounds exist then play them
	if (m_pDeathSounds.Num() > 0)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_pDeathSounds[FMath::RandRange(0, m_pDeathSounds.Num() - 1)], GetActorLocation());
	}

	// Play death montage
	GetMesh()->GetAnimInstance()->Montage_Play(m_pDeathMontage, 1.f);
}

void AEnemy::HandleOnMontageEnded(UAnimMontage* Montage, bool Interrupted)
{
	// Check if the montage is the reload montage
	if (Montage->GetName().Contains("Death"))
	{
		Reset();

		// Update Manager
		m_pEnemyManager->m_iWaveKills++;
		
		if (m_pEnemyManager->m_iWaveKills >= m_pEnemyManager->m_iCurrentWaveSize)
		{
			m_pEnemyManager->UpdateWaveParameters();
			m_pEnemyManager->StartNextWave();
		}
		else
		{
			m_pEnemyManager->SpawnMoreEnemies();
		}
	}
}
