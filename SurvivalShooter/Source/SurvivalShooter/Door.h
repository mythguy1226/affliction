// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "EnemySpawn.h"
#include "Door.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALSHOOTER_API ADoor : public AInteractable
{
	GENERATED_BODY()
	
public:
	// Method for beginning door opening sequence
	void OpenDoor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Time needed to open the door
	float m_fTimeToOpen = 2.0f;

	// Tracker for opening sequence
	bool m_bIsOpening = false;

	// Door height
	float m_fDistance = 400.0f;

	// Traveled Distance
	float m_fTotalDistanceTraveled = 0.0f;

	// Reference to different spawns to unlock
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AEnemySpawn*> m_aSpawnsToUnlock;
};
