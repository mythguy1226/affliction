// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponShop.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AWeaponShop::AWeaponShop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>("Weapon_Mesh");
	WeaponMesh->SetupAttachment(RootComponent);

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(FName("Collider"));
	CapsuleComponent->InitCapsuleSize(55.f, 96.0f);;
	CapsuleComponent->SetupAttachment(WeaponMesh);

	// Register our Overlap Event
	CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &AWeaponShop::OnCapsuleBeginOverlap);
	CapsuleComponent->OnComponentEndOverlap.AddDynamic(this, &AWeaponShop::OnCapsuleEndOverlap);
}

// Called when the game starts or when spawned
void AWeaponShop::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AWeaponShop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWeaponShop::OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ASurvivalShooterCharacter* pPlayer = Cast<ASurvivalShooterCharacter>(OtherActor);
	pPlayer->canInteract = true;
	pPlayer->m_sClosestInteractable = GetClass()->GetName();
}

void AWeaponShop::OnCapsuleEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ASurvivalShooterCharacter* pPlayer = Cast<ASurvivalShooterCharacter>(OtherActor);
	pPlayer->canInteract = false;
}

