// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_FindPlayerLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "Enemy_Controller.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "EnemyKeys.h"
#include "Kismet/GameplayStatics.h"

UBTT_FindPlayerLocation::UBTT_FindPlayerLocation(FObjectInitializer const& a_pObjectInitializer)
{
	NodeName = TEXT("Find Player Location");
}

EBTNodeResult::Type UBTT_FindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& a_pOwnerComp, uint8* a_pNodeMemory)
{
	// Get the AI Controller
	auto const controller = Cast<AEnemy_Controller>(a_pOwnerComp.GetAIOwner());

	// Get the navigation system
	UNavigationSystemV1* const nav_sys = UNavigationSystemV1::GetCurrent(GetWorld());

	// Get reference to the player
	APlayerController* pController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	APawn* player = pController->GetPawn();

	// Check that nav system is valid
	if (nav_sys)
	{
		// Set the new target location to be the player
		controller->get_blackboard()->SetValueAsVector(bb_keys::target_location, player->GetActorLocation());
	}

	// Finish with success
	FinishLatentTask(a_pOwnerComp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}

