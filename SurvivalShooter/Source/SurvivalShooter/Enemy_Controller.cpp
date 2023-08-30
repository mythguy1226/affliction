// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Controller.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemy_Controller::AEnemy_Controller(FObjectInitializer const& m_pObjectInitializer)
{
	// Get the behavior tree from reference
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> obj(TEXT("BehaviorTree'/Game/SurvivalShooter/AI/BT_EnemyBT.BT_EnemyBT'"));
	if (obj.Succeeded())
	{
		m_pBehaviorTree = obj.Object;
	}

	// Init the tree and blackboard components
	m_pBehaviorTreeComponent = m_pObjectInitializer.CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("BehaviorComponent"));
	m_pBlackboard = m_pObjectInitializer.CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("BlackboardComponent"));

}

void AEnemy_Controller::BeginPlay()
{
	Super::BeginPlay();

	// Run the behavior tree
	RunBehaviorTree(m_pBehaviorTree);
	m_pBehaviorTreeComponent->StartTree(*m_pBehaviorTree);
}

void AEnemy_Controller::OnPossess(APawn* pawn)
{
	// Run default possess method
	Super::OnPossess(pawn);

	// Init blackboard
	if (m_pBlackboard)
	{
		m_pBlackboard->InitializeBlackboard(*m_pBehaviorTree->BlackboardAsset);
	}
}

UBlackboardComponent* AEnemy_Controller::get_blackboard() const
{
	// Return blackboard
	return m_pBlackboard;
}

