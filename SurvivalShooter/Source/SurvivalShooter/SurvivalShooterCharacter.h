// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Weapon.h"
#include "SurvivalShooterCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;
class AInteractable;

// Declaration of the delegate that will be called when the Primary Action is triggered
// It is declared as dynamic so it can be accessed also in Blueprints
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUseItem);

UCLASS(config=Game)
class ASurvivalShooterCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/* Pistol Class to Spawn*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AActor> m_cPistol;

	/* Rifle Class to Spawn*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AActor> m_cRifle;

	/* Shotgun Class to Spawn*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AActor> m_cShotgun;

	/* Sword Class to Spawn*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AActor> m_cSword;

	/* Upgraded Sword Class to Spawn*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AActor> m_cUpgradedSword;

	/* Get the blueprint widget to assign to the player viewport */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class UUserWidget> m_cPlayerHUD;

public:
	ASurvivalShooterCharacter();

protected:
	virtual void BeginPlay();
	virtual void Tick(float m_fDeltaTime);

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float TurnRateGamepad;

	/** Delegate to whom anyone can subscribe to receive this event */
	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnUseItem OnUseItem;

	/* Reference of current weapon equipped */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AWeapon* m_pEquippedWeapon;

	/* Reference of off-hand weapon equipped */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AWeapon* m_pOffHandWeapon;

	/* Reference to sword actor */
	AActor* m_pSword;

	/* Gets the montage used for reloading */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pReloadMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pRifleReloadMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pShotgunReloadMontage;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pShootMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pRifleShootMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pShotgunShootMontage;

	/** AnimMontage to play when using melee attack */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pSwordSlashMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* m_pUpgradedSwordSlashMontage;

	/* Gets the sound used for swapping weapons */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundBase* m_pWeaponSwapSound;

	// Public fields
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float m_fHealth = 100.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool m_bCanInteract = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString m_sClosestInteractable = "";

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	AInteractable* m_pInteractable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString m_sInteractMessage = "";

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool m_bSwordIsUpgraded = false;

	// Method for equipping a weapon
	void EquipWeapon(FString a_sWeapon = "Pistol");

	// Method for swapping weapons
	void SwapWeapons();

	// Method for buying weapons
	void BuyWeapon(FString a_sWeapon);

	// Method for equipping the sword
	void EquipSword();

	// Method for upgrading the sword
	void UpgradeSword();

	// Method for handling damage
	void TakeDamage(float a_fDamage);

	// Method for handling ammo reload
	void Reload();

	// Method for handling interactions
	void Interact();

	// Method for firing melee attack
	void MeleeAttack();

	// Method for generating hit spheres
	void GenerateHitSphere(FVector a_vLocation, float a_fRadius, float a_fDamage, bool a_bDebug = false);

	// Boolean for tracking PrimaryAction hold
	bool m_bHoldingPrimaryAction = false;
	float m_fShotTimer = 0.0f;

	/** Gun switch particle */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SFX)
	UNiagaraSystem* m_pGunSwitchParticle;

protected:
	
	/** Fires a projectile. */
	void OnPrimaryAction();

	void OnReleasePrimaryAction();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles strafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	struct TouchData
	{
		TouchData() { bIsPressed = false;Location=FVector::ZeroVector;}
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};
	void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
	TouchData	TouchItem;
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

	/* 
	 * Configures input for touchscreen devices if there is a valid touch interface for doing so 
	 *
	 * @param	InputComponent	The input component pointer to bind controls to
	 * @returns true if touch controls were enabled.
	 */
	bool EnableTouchscreenMovement(UInputComponent* InputComponent);

public:
	UFUNCTION()
	void HandleOnMontageEnded(UAnimMontage* Montage, bool Interrupted);

	UFUNCTION()
	void HandleOnMontageNotifyBegin(FName a_nNotifyName, const FBranchingPointNotifyPayload& a_pBranchingPayload);

	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};

