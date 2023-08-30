// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP_WeaponComponent.h"
#include "Weapon.generated.h"

UCLASS()
class SURVIVALSHOOTER_API AWeapon : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	UStaticMeshComponent* Mesh;

public:	

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
	USoundBase* FireSound;

	/** Sound to play each time we can't fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
	USoundBase* EmptySound;

	/* Gets the sound used for reloading */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundBase* m_pReloadSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
	TArray<USoundBase*> environmentSounds;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset = FVector(100.0f, 0.0f, 10.0f);

	/** Gun muzzle's particle */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SFX)
	UNiagaraSystem* MuzzleFlash;

	/** Gun Type */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EWeaponType m_eWeaponType = EWeaponType::WT_Pistol;

	/** Gun Fire-Rate for Full-Auto */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_fFireRate = 0.2f;

	/** Gun Firing Mode */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool m_bFullAuto = false;

	/** Gun Damage */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float m_fDamage = 10.0f;

	// Sets default values for this actor's properties
	AWeapon();

	// Method for getting the mesh
	UStaticMeshComponent* GetMesh();

	// Reference to weapon component
	UTP_WeaponComponent* WeaponComponent;

	// Ammo Fields
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	int m_iClipSize = 8;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	int m_iMaxAmmo = 80;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int m_iCurrentAmmo = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int m_iTotalAmmo = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString m_sWeaponName = "";

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
