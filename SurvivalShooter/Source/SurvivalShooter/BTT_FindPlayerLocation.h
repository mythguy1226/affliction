// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "GameFramework/Pawn.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/UObjectGlobals.h"
#include "BTT_FindPlayerLocation.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALSHOOTER_API UBTT_FindPlayerLocation : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UBTT_FindPlayerLocation(FObjectInitializer const& a_pObjectInitializer);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& a_pOwnerComp, uint8* a_pNodeMemory);
};
