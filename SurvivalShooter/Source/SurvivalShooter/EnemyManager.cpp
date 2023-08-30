// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyManager.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AEnemyManager::AEnemyManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyManager::BeginPlay()
{
	Super::BeginPlay();

	// Get all instances of the enemies
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemy::StaticClass(), m_aEnemies);

	// Get all instances of the spawn points
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemySpawn::StaticClass(), m_aSpawnLocations);

	// Delay spawning of enemies slightly
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()
	{
		// Spawn some enemies by default
		SpawnFirstWave();

		// Change the initial speeds and health
		ModifyWaveSpeeds();
		ModifyWaveHealth();
	}, 3, false);

}

// Called every frame
void AEnemyManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyManager::SpawnFirstWave()
{
	// Ensure that there are enemies in the list
	if (m_aEnemies.Num() > 0)
	{
		// Init spawn count for this wave
		int spawnCount = 0;

		// Iterate through all enemies
		for (int i = 0; i < m_aEnemies.Num(); i++)
		{
			// Break the loop if target enemies has been reached
			if (spawnCount == m_iFirstWaveCount)
			{
				break;
			}

			// Cast actor to enemy
			AEnemy* curEnemy = Cast<AEnemy>(m_aEnemies[i]);

			// Disable collisions temporarily in case an enemy tries to spawn within close proximity to one another
			// In the midst of this, spawn the enemies
			curEnemy->SetActorEnableCollision(false);

			// Get the next unlocked spawn from the list
			AEnemySpawn* pSpawn = Cast<AEnemySpawn>(m_aSpawnLocations[FMath::RandRange(0, m_aSpawnLocations.Num() - 1)]);
			while (pSpawn->m_bIsLocked) // Loop until you find an unlocked spawn
			{
				pSpawn = Cast<AEnemySpawn>(m_aSpawnLocations[FMath::RandRange(0, m_aSpawnLocations.Num() - 1)]);
			}

			// Spawn the enemy
			curEnemy->TeleportTo(pSpawn->GetActorLocation(), curEnemy->GetActorRotation());
			curEnemy->SetActorEnableCollision(true);

			curEnemy->m_bInCombat = true;

			// Update spawn count
			spawnCount++;
		}
	}
}

void AEnemyManager::UpdateWaveParameters()
{
	// Update wave num and reset wave kills
	m_iCurrentWave += 1;
	m_iWaveKills = 0;

	// Increase Wave Size
	m_iCurrentWaveSize += 4;
	m_iMaxEnemiesInArena += 2;

	// Increase Wave Health
	m_fWaveHealth += 10.0f;

	// Update speeds and cap the maxs and mins
	if (m_fGlobalMaxWalkSpeed < 400.0f)
	{
		m_fGlobalMaxWalkSpeed += 200.0f;
	}
	if (m_fGlobalMinWalkSpeed < 350.0f)
	{
		m_fGlobalMinWalkSpeed += 100.0f;
	}
}

void AEnemyManager::StartNextWave()
{
	// Init spawn count for this wave
	int spawnCount = 0;

	// Iterate through all enemies
	for (int i = 0; i < m_aEnemies.Num(); i++)
	{
		// Break the loop if target enemies has been reached
		if (spawnCount == m_iMaxEnemiesInArena || spawnCount == m_iCurrentWaveSize)
		{
			break;
		}

		// Cast actor to enemy
		AEnemy* curEnemy = Cast<AEnemy>(m_aEnemies[i]);

		if (!curEnemy->m_bInCombat)
		{
			// Disable collisions temporarily in case an enemy tries to spawn within close proximity to one another
			// In the midst of this, spawn the enemies
			curEnemy->SetActorEnableCollision(false);

			// Get the next unlocked spawn from the list
			AEnemySpawn* pSpawn = Cast<AEnemySpawn>(m_aSpawnLocations[FMath::RandRange(0, m_aSpawnLocations.Num() - 1)]);
			while (pSpawn->m_bIsLocked) // Loop until you find an unlocked spawn
			{
				pSpawn = Cast<AEnemySpawn>(m_aSpawnLocations[FMath::RandRange(0, m_aSpawnLocations.Num() - 1)]);
			}

			// Spawn the enemy
			curEnemy->TeleportTo(pSpawn->GetActorLocation(), curEnemy->GetActorRotation());
			curEnemy->SetActorEnableCollision(true);

			curEnemy->m_bInCombat = true;

			// Update spawn count
			spawnCount++;
		}
	}

	// Update Wave Speeds
	ModifyWaveSpeeds();
	ModifyWaveHealth();
}

void AEnemyManager::SpawnMoreEnemies()
{
	// Check if enemy kills are needed
	int neededKills = m_iCurrentWaveSize - m_iWaveKills;
	if (neededKills > 0)
	{
		if (GetAllEnemiesInCombat().Num() < neededKills)
		{
			// Check that arena isn't full
			if (GetAllEnemiesInCombat().Num() < m_iMaxEnemiesInArena)
			{
				// Iterate through all enemies
				for (int i = 0; i < m_aEnemies.Num(); i++)
				{
					// Cast actor to enemy
					AEnemy* curEnemy = Cast<AEnemy>(m_aEnemies[i]);

					// Check that enemy isn't already in combat
					if (!curEnemy->m_bInCombat)
					{
						// Disable collisions temporarily in case an enemy tries to spawn within close proximity to one another
						// In the midst of this, spawn the enemies
						curEnemy->SetActorEnableCollision(false);

						// Get the next unlocked spawn from the list
						AEnemySpawn* pSpawn = Cast<AEnemySpawn>(m_aSpawnLocations[FMath::RandRange(0, m_aSpawnLocations.Num() - 1)]);
						while(pSpawn->m_bIsLocked) // Loop until you find an unlocked spawn
						{
							pSpawn = Cast<AEnemySpawn>(m_aSpawnLocations[FMath::RandRange(0, m_aSpawnLocations.Num() - 1)]);
						}

						// Spawn the enemy
						curEnemy->TeleportTo(pSpawn->GetActorLocation(), curEnemy->GetActorRotation());
						curEnemy->SetActorEnableCollision(true);

						curEnemy->m_bInCombat = true;
						break;
					}
				}
			}
		}
	}
}

TArray<AEnemy*> AEnemyManager::GetAllEnemiesInCombat()
{
	// Iterate through all enemies to find which ones are in combat
	TArray<AEnemy*> enemiesInCombat = TArray<AEnemy*>();
	for (AActor* actor : m_aEnemies)
	{
		// Cast the actor to an enemy
		AEnemy* enemy = Cast<AEnemy>(actor);

		// Add to list when in combat
		if (enemy->m_bInCombat)
		{
			enemiesInCombat.Add(enemy);
		}
	}

	return enemiesInCombat;
}

void AEnemyManager::ModifyWaveSpeeds()
{
	// Get all enemies currently in combat and update their speeds
	TArray<AEnemy*> enemiesInCombat = GetAllEnemiesInCombat();
	for (int i = 0; i < enemiesInCombat.Num(); i++)
	{
		AEnemy* curEnemy = Cast<AEnemy>(enemiesInCombat[i]);

		curEnemy->GetCharacterMovement()->MaxWalkSpeed = FMath::RandRange(m_fGlobalMinWalkSpeed, m_fGlobalMaxWalkSpeed);
	}
}

void AEnemyManager::ModifyWaveHealth()
{
	// Iterate through all enemies
	for (AActor* actor : m_aEnemies)
	{
		// Cast the actor to an enemy
		AEnemy* enemy = Cast<AEnemy>(actor);

		// Update the enemy's health
		enemy->m_fHealth = m_fWaveHealth;
	}
}

