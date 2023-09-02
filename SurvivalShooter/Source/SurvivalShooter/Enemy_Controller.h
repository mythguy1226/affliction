// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Enemy_Controller.generated.h"

/**
 * 
 */
UCLASS()
class SURVIVALSHOOTER_API AEnemy_Controller : public AAIController
{
	GENERATED_BODY()
public:

	// Constructor
	AEnemy_Controller(FObjectInitializer const& m_pObjectInitializer);

	// Runs when game starts
	void BeginPlay() override;

	// Runs when pawn is possessed
	void OnPossess(APawn* pawn) override;

	// Method that returns enemy blackboard
	class UBlackboardComponent* get_blackboard() const;

	// References to Behavior Tree and Component
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI")
	class UBehaviorTreeComponent* m_pBehaviorTreeComponent;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI")
	class UBehaviorTree* m_pBehaviorTree;

private:
	class UBlackboardComponent* m_pBlackboard;
};
