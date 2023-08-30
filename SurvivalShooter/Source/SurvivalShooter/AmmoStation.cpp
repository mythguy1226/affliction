// Fill out your copyright notice in the Description page of Project Settings.


#include "AmmoStation.h"
#include "Components/CapsuleComponent.h"
#include "SurvivalShooterCharacter.h"

// Sets default values
AAmmoStation::AAmmoStation()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>("Box_Mesh");
	BoxMesh->SetupAttachment(RootComponent);

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(FName("Collider"));
	CapsuleComponent->InitCapsuleSize(55.f, 96.0f);;
	CapsuleComponent->SetupAttachment(BoxMesh);

	// Register our Overlap Event
	CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &AAmmoStation::OnCapsuleBeginOverlap);
	CapsuleComponent->OnComponentEndOverlap.AddDynamic(this, &AAmmoStation::OnCapsuleEndOverlap);
}

// Called when the game starts or when spawned
void AAmmoStation::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AAmmoStation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAmmoStation::OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ASurvivalShooterCharacter* pPlayer = Cast<ASurvivalShooterCharacter>(OtherActor);
	pPlayer->canInteract = true;
	pPlayer->m_sClosestInteractable = GetClass()->GetName();
}

void AAmmoStation::OnCapsuleEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ASurvivalShooterCharacter* pPlayer = Cast<ASurvivalShooterCharacter>(OtherActor);
	pPlayer->canInteract = false;
}

