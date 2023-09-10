// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"
#include "EnemySpawn.h"
#include "EnemyManager.generated.h"

// Operator for verifying which enemy spawn is further away
FORCEINLINE bool operator>(AEnemySpawn const& leftObj, AEnemySpawn const& rightObj)
{
	// Get the player
	AController* pPlayerCont = UGameplayStatics::GetPlayerController(leftObj.GetWorld(), 0);

	// Get distance to player for both objects
	float thisDistance = FVector::Distance(pPlayerCont->GetPawn()->GetActorLocation(), leftObj.GetActorLocation());
	float otherDistance = FVector::Distance(pPlayerCont->GetPawn()->GetActorLocation(), rightObj.GetActorLocation());

	return thisDistance > otherDistance;
}

// Operator for verifying which enemy spawn is closest
FORCEINLINE bool operator<(AEnemySpawn const& leftObj, AEnemySpawn const& rightObj)
{
	// Get the player
	AController* pPlayerCont = UGameplayStatics::GetPlayerController(leftObj.GetWorld(), 0);

	// Get distance to player for both objects
	float thisDistance = FVector::Distance(pPlayerCont->GetPawn()->GetActorLocation(), leftObj.GetActorLocation());
	float otherDistance = FVector::Distance(pPlayerCont->GetPawn()->GetActorLocation(), rightObj.GetActorLocation());

	return thisDistance < otherDistance;
}

UCLASS()
class SURVIVALSHOOTER_API AEnemyManager : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AEnemyManager();

	// Container for all enemies
	TArray<AActor*> m_aEnemies;

	// *** Fields for spawning *** //

	// Spawn Locations
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Management")
	TArray<AActor*> m_aSpawnLocations;

	// Enemies per wave
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Management")
	int m_iFirstWaveCount = 5;

	// Only manage waves in here but make readable for UI
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	int m_iCurrentWave = 1;

	// Enemy Count and Kill trackers
	int m_iCurrentWaveSize;
	int m_iWaveKills = 0;

	// Timer to set between waves
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Management")
	float m_fTimeBetweenWaves = 5.0f;

	// Method for spawning the first wave
	void SpawnFirstWave();

	// Method for updating wave parameters
	void UpdateWaveParameters();

	// Method for spawning the next wave
	void StartNextWave();

	// Helper Method for spawning an enemy
	void SpawnEnemy(AEnemy* a_pEnemy);

	// Method for spawning more enemies for wave
	void SpawnMoreEnemies();

	// Method for spawning enemies in batches
	void BatchSpawnEnemies(int a_iEnemyNum);

	// Method for getting all enemies in combat
	TArray<AEnemy*> GetAllEnemiesInCombat();

	// Method for getting closest unlocked spawn points
	TArray<AEnemySpawn*> GetClosestUnlockedEnemySpawns(int a_iSpawnNum);

	// Method for getting the next available enemy
	AEnemy* GetNextAvailableEnemy();

	// Method for modifying movement speeds for enemies
	void ModifyWaveSpeeds();

	// Method for modifying health for enemies
	void ModifyWaveHealth();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Min and Max Speeds for enemies
	float m_fGlobalMaxWalkSpeed = 120.0f;
	float m_fGlobalMinWalkSpeed = 70.0f;

	// Cap for enemies in the room
	int m_iMaxEnemiesInArena = 5;

	// Health for enemies in wave
	float m_fWaveHealth = 30.0f;

	// Timer Handles
	FTimerHandle TimerHandleLoop;
	FTimerHandle TimerHandleClear;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
