// Fill out your copyright notice in the Description page of Project Settings.


#include "IsPlayerInMeleeRange.h"
#include "Enemy_Controller.h"
#include "Enemy.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "EnemyKeys.h"

UIsPlayerInMeleeRange::UIsPlayerInMeleeRange()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("Is Player in Melee Range");
}

void UIsPlayerInMeleeRange::OnBecomeRelevant(UBehaviorTreeComponent& a_pOwnerComp, uint8* a_pNodeMemory)
{
	Super::OnBecomeRelevant(a_pOwnerComp, a_pNodeMemory);

	// Get the AI Controller and enemy
	AEnemy_Controller* const controller = Cast<AEnemy_Controller>(a_pOwnerComp.GetAIOwner());
	AEnemy* const enemy = Cast<AEnemy>(controller->GetPawn());

	// Get reference to the player
	APlayerController* pController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	APawn* player = pController->GetPawn();

	// Set blackboard key to whether or not player is in melee range
	controller->get_blackboard()->SetValueAsBool(bb_keys::player_in_melee_range, enemy->GetDistanceTo(player) <= m_fMeleeRange);
}

