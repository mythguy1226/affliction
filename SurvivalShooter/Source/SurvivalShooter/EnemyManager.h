// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"
#include "EnemySpawn.h"
#include "EnemyManager.generated.h"

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
	int m_iFirstWaveCount;

	// Only manage waves in here but make readable for UI
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	int m_iCurrentWave = 1;

	// Enemy Count and Kill trackers
	int m_iCurrentWaveSize = 5;
	int m_iWaveKills = 0;

	// Method for spawning the first wave
	void SpawnFirstWave();

	// Method for updating wave parameters
	void UpdateWaveParameters();

	// Method for spawning the next wave
	void StartNextWave();

	// Method for spawning more enemies for wave
	void SpawnMoreEnemies();

	// Method for getting all enemies in combat
	TArray<AEnemy*> GetAllEnemiesInCombat();

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

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
