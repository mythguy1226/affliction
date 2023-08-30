// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_ChasePlayer.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "Enemy_Controller.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "EnemyKeys.h"
#include "Kismet/GameplayStatics.h"
#include "Enemy.h"

UBTT_ChasePlayer::UBTT_ChasePlayer(FObjectInitializer const& a_pObjectInitializer)
{
	NodeName = TEXT("Chase Player");
}

EBTNodeResult::Type UBTT_ChasePlayer::ExecuteTask(UBehaviorTreeComponent& a_pOwnerComp, uint8* a_pNodeMemory)
{
	// Get the AI Controller
	auto const controller = Cast<AEnemy_Controller>(a_pOwnerComp.GetAIOwner());
	AEnemy* enemy = Cast<AEnemy>(controller->GetPawn());

	// Get the navigation system
	UNavigationSystemV1* const nav_sys = UNavigationSystemV1::GetCurrent(GetWorld());

	// Check that nav system is valid
	if (nav_sys)
	{
		// Ensure enemy is still alive
		if (enemy->m_fHealth > 0)
		{
			// Get the player's location
			FVector pLocation = controller->get_blackboard()->GetValueAsVector(bb_keys::target_location);

			// Set up movement request and send to controller
			FAIMoveRequest moveRq = FAIMoveRequest(pLocation);
			controller->MoveToLocation(pLocation);
		}
	}

	// Finish with success
	FinishLatentTask(a_pOwnerComp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}
