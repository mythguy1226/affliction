// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "EnemySpawn.generated.h"

UCLASS()
class SURVIVALSHOOTER_API AEnemySpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Boolean to track if spawn point is locked
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool m_bIsLocked = true;
};
