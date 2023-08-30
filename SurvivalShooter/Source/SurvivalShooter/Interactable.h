// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SurvivalShooterCharacter.h"
#include "Interactable.generated.h"

UCLASS()
class SURVIVALSHOOTER_API AInteractable : public AActor
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	UStaticMeshComponent* m_pMesh;

	UPROPERTY(VisibleAnywhere, Category = "Trigger Capsule")
	UCapsuleComponent* m_pCapsuleComponent;

public:	
	// Sets default values for this actor's properties
	AInteractable();

	// Interactable Cost
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable")
	float m_fInteractCost = 0.0f;

	/* Gets the sound used for interaction */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundBase* m_pInteractSound;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Interactable Message
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactable")
	FString m_sInteractMessage = "";

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Code for when something overlaps this component */
	UFUNCTION()
	void OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	/** Code for when something overlaps this component */
	UFUNCTION()
	void OnCapsuleEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};
