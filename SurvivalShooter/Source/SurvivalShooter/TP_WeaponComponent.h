// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "TP_WeaponComponent.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8 {
	WT_Pistol      UMETA(DisplayName = "Pistol"),
	WT_Rifle       UMETA(DisplayName = "Rifle"),
	WT_Shotgun     UMETA(DisplayName = "Shotgun"),
};

class ASurvivalShooterCharacter;

UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SURVIVALSHOOTER_API UTP_WeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	/** Sound to play each time we fire */
	USoundBase* m_pFireSound;

	/** Sound to play each time we can't fire */
	USoundBase* m_pEmptySound;

	/** Sound to play each time we can't fire */
	USoundBase* m_pZombieHitSound;

	/** Sounds to play when hitting the environment */
	TArray<USoundBase*> m_pEnvironmentSounds;

	/** Gun muzzle's offset from the characters location */
	FVector m_vMuzzleOffset;

	/** Gun muzzle's particle */
	UNiagaraSystem* m_pMuzzleFlash;

	/** Weapon Type */
	EWeaponType m_eWeaponType;

	/** Weapon Damage*/
	float m_fDamage;

	/** Sets default values for this component's properties */
	UTP_WeaponComponent();

	/** Attaches the actor to a FirstPersonCharacter */
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void AttachWeapon(ASurvivalShooterCharacter* TargetCharacter);

	/** Make the weapon Fire a Projectile */
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void Fire();

	// Helper method for tracing shots
	void TraceShot(FVector a_vStart, FVector a_vEnd, FRotator a_rRotation);

protected:
	/** Ends gameplay for this component. */
	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
		

private:
	/** The Character holding this weapon*/
	ASurvivalShooterCharacter* m_pCharacter;
};
