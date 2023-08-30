// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "EnemyManager.h"
#include "GlobalManager.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALSHOOTER_API UGlobalManager : public UGameInstance
{
	GENERATED_BODY()

public:
	// Player's Total Points
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int m_iPoints = 0;
};
