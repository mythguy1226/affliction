// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "GameFramework/Pawn.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/UObjectGlobals.h"
#include "Enemy.h"
#include "BTT_MeleeAttack.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALSHOOTER_API UBTT_MeleeAttack : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UBTT_MeleeAttack(FObjectInitializer const& a_pObjectInitializer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& a_pOwnerComp, uint8* a_pNodeMemory);
	bool AttackMontageFinished(AEnemy* a_pEnemy);
};
