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

	// Init wave size tracker
	m_iCurrentWaveSize = m_iFirstWaveCount;
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
		// Spawn by initial wave size
		for (int i = 0; i < m_iFirstWaveCount; i++)
		{
			// Spawn next available enemy
			AEnemy* pEnemy = GetNextAvailableEnemy();
			if (pEnemy != nullptr)
				SpawnEnemy(pEnemy);
		}
	}
}

void AEnemyManager::UpdateWaveParameters()
{
	// Update wave num and reset wave kills
	m_iCurrentWave += 1;
	m_iWaveKills = 0;

	// Update Wave Size and arena max
	m_iCurrentWaveSize += 4;
	m_iMaxEnemiesInArena += 2;
	if (m_iMaxEnemiesInArena >= m_aEnemies.Num())
	{
		m_iMaxEnemiesInArena = m_aEnemies.Num() - 2;
	}

	// Increase Wave Health
	m_fWaveHealth += 10.0f;

	// Update max and min walk speeds
	m_fGlobalMaxWalkSpeed += 50.0f;
	if (m_fGlobalMaxWalkSpeed > 400.0f)
	{
		m_fGlobalMaxWalkSpeed = 400.0f;
	}

	m_fGlobalMinWalkSpeed += 20.0f;
	if (m_fGlobalMinWalkSpeed > 350.0f)
	{
		m_fGlobalMinWalkSpeed = 350.0f;
	}
}

void AEnemyManager::StartNextWave()
{
	// Get number of enemies per batch
	int iEnemiesPerBatch = m_iCurrentWaveSize / 4; // 4 Batches
	int iLeftOverEnemies = m_iCurrentWaveSize - (iEnemiesPerBatch * 4);

	// Spawn each batch with a delay in between
	GetWorld()->GetTimerManager().SetTimer(TimerHandleLoop, [&]()
	{
		BatchSpawnEnemies(iEnemiesPerBatch);
	}, 2, true);

	// Clear the timer once 4 batches spawned
	GetWorld()->GetTimerManager().SetTimer(TimerHandleClear, [&]()
	{
		// Also spawn any left over enemies
		BatchSpawnEnemies(iLeftOverEnemies);

		GetWorld()->GetTimerManager().ClearTimer(TimerHandleLoop);
	}, 8, false);

	// Update Wave Speeds and Health
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
				// Spawn an enemy
				AEnemy* pEnemy = GetNextAvailableEnemy();
				if(pEnemy != nullptr)
					SpawnEnemy(pEnemy);
			}
		}
	}
}

void AEnemyManager::BatchSpawnEnemies(int a_iEnemyNum)
{
	// Spawn by amount of wave size
	for (int i = 0; i < a_iEnemyNum; i++)
	{
		// Ensure the spawn count doesnt exceed the arena
		if (i == m_iMaxEnemiesInArena)
			break;

		// Spawn next available enemy
		AEnemy* pEnemy = GetNextAvailableEnemy();
		if (pEnemy != nullptr)
			SpawnEnemy(pEnemy);
	}
}

void AEnemyManager::SpawnEnemy(AEnemy* a_pEnemy)
{
	// Disable collisions temporarily in case an enemy tries to spawn within close proximity to one another
	// In the midst of this, spawn the enemies
	a_pEnemy->SetActorEnableCollision(false);

	// Get the closest spawn points to the player
	TArray<AEnemySpawn*> aClosestSpawns = GetClosestUnlockedEnemySpawns(3);

	// Get the next unlocked spawn from the list
	AEnemySpawn* pSpawn = aClosestSpawns[FMath::RandRange(0, aClosestSpawns.Num() - 1)];
	while (pSpawn->m_bIsLocked) // Loop until you find an unlocked spawn
	{
		pSpawn = aClosestSpawns[FMath::RandRange(0, aClosestSpawns.Num() - 1)];
	}

	// Spawn the enemy
	a_pEnemy->TeleportTo(pSpawn->GetActorLocation(), a_pEnemy->GetActorRotation());
	a_pEnemy->SetActorEnableCollision(true);

	a_pEnemy->m_bInCombat = true;
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

TArray<AEnemySpawn*> AEnemyManager::GetClosestUnlockedEnemySpawns(int a_iSpawnNum)
{
	// Create empty array to hold spawns
	TArray<AEnemySpawn*> aUnlockedSpawns = TArray<AEnemySpawn*>();

	// Iterate through each unlocked spawn
	for (AActor* actor : m_aSpawnLocations)
	{
		// Cast actor to enemy spawn
		AEnemySpawn* pSpawn = Cast<AEnemySpawn>(actor);
		if (pSpawn) // Validate
		{
			// Add to array if unlocked
			if (!pSpawn->m_bIsLocked)
			{
				aUnlockedSpawns.Add(pSpawn);
			}
		}
	}

	// Sort the spawns (sorting operators have been defined in the enemy spawn class)
	aUnlockedSpawns.Sort();

	// Create empty array for the return
	TArray<AEnemySpawn*> aClosestSpawns = TArray<AEnemySpawn*>();

	for (int i = 0; i < a_iSpawnNum; i++)
	{
		aClosestSpawns.Add(aUnlockedSpawns[i]);
	}

	return aClosestSpawns;
}

AEnemy* AEnemyManager::GetNextAvailableEnemy()
{
	// Iterate through until you find an enemy not in combat
	AEnemy* pEnemy = nullptr;
	size_t iter = 0;
	while (pEnemy == nullptr || iter != m_aEnemies.Num() - 1)
	{
		// Cast to an enemy and check combat status
		if (!Cast<AEnemy>(m_aEnemies[iter])->m_bInCombat)
		{
			pEnemy = Cast<AEnemy>(m_aEnemies[iter]);
			return pEnemy;
		}
		iter++;
	}

	return nullptr;
}

void AEnemyManager::ModifyWaveSpeeds()
{
	// Iterate through all enemies
	for (AActor* actor : m_aEnemies)
	{
		// Cast to enemy
		AEnemy* pEnemy = Cast<AEnemy>(actor);

		// Update speed
		pEnemy->GetCharacterMovement()->MaxWalkSpeed = FMath::RandRange(m_fGlobalMinWalkSpeed, m_fGlobalMaxWalkSpeed);
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

