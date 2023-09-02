// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_MeleeAttack.h"
#include "Enemy_Controller.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/LatentActionManager.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimInstance.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "EnemyKeys.h"

UBTT_MeleeAttack::UBTT_MeleeAttack(FObjectInitializer const& a_pObjectInitializer)
{
	NodeName = TEXT("Melee Attack");
}

EBTNodeResult::Type UBTT_MeleeAttack::ExecuteTask(UBehaviorTreeComponent& a_pOwnerComp, uint8* a_pNodeMemory)
{
	// Get the AI Controller and enemy
	AEnemy_Controller* const controller = Cast<AEnemy_Controller>(a_pOwnerComp.GetAIOwner());
	AEnemy* const enemy = Cast<AEnemy>(controller->GetPawn());

	// Check if montage has finished
	if (AttackMontageFinished(enemy))
	{
		// Check that enemy is in range to attack
		bool canAttack = controller->get_blackboard()->GetValueAsBool(bb_keys::player_in_melee_range);
		if (canAttack)
		{
			// Run enemy attack method
			enemy->MeleeAttack();
		}
	}

	// Finish with success
	FinishLatentTask(a_pOwnerComp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Succeeded;
}

bool UBTT_MeleeAttack::AttackMontageFinished(AEnemy* m_pEnemy)
{
	// Return if the attack montage is finished
	return m_pEnemy->GetMesh()->GetAnimInstance()->Montage_GetIsStopped(m_pEnemy->m_pAttackMontage);
}
