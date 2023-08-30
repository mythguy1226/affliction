// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NiagaraFunctionLibrary.h"
#include "Enemy.generated.h"

class AEnemyManager;

UCLASS()
class SURVIVALSHOOTER_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** AnimMontage to play each time enemy attacks */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation)
	UAnimMontage* m_pAttackMontage;

	/** AnimMontage to play when enemy dies */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animation)
	UAnimMontage* m_pDeathMontage;

	/** Array of possible sounds to play when an enemy attacks */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
	TArray<USoundBase*> m_pAttackSounds;

	/** Array of possible sounds to play when an enemy dies */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
	TArray<USoundBase*> m_pDeathSounds;

	/** Sound to play each time enemy is hit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
	USoundBase* m_pZombieHitSound;

	/** Blood Splat Particle */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = FX)
	UNiagaraSystem* m_pBloodParticle;

	// Returns the enemy attack montage
	UAnimMontage* GetAttackMontage();

	// Initiates a melee attack
	void MeleeAttack();

	// Enemy Fields for Combat and Health
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float m_fHealth = 30.0f;
	FVector m_vWorldSpawnLocation;
	bool m_bInCombat = false;

	// Method for handling damage
	void TakeDamage(float a_fDamage);

	// Method for handling enemy deaths/resets
	void Reset();
	void Die();

	// Event handler for montage endings
	UFUNCTION()
	void HandleOnMontageEnded(UAnimMontage* Montage, bool Interrupted);

private:
	// Holds reference to enemy manager in the level
	AEnemyManager* m_pEnemyManager;
};
