// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SurvivalShooterCharacter.h"
#include "AmmoStation.generated.h"

UCLASS()
class SURVIVALSHOOTER_API AAmmoStation : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	UStaticMeshComponent* BoxMesh;

	UPROPERTY(VisibleAnywhere, Category = "Trigger Capsule")
	UCapsuleComponent* CapsuleComponent;

public:
	// Sets default values for this actor's properties
	AAmmoStation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

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
