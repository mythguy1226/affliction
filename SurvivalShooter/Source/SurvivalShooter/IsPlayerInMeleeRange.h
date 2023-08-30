// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "IsPlayerInMeleeRange.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALSHOOTER_API UIsPlayerInMeleeRange : public UBTService_BlackboardBase
{
	GENERATED_BODY()
public:
	UIsPlayerInMeleeRange();
	void OnBecomeRelevant(UBehaviorTreeComponent& a_pOwnerComp, uint8* a_pNodeMemory);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float m_fMeleeRange = 100.0f;
};
