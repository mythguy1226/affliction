// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Weapon_Mesh");
	Mesh->SetupAttachment(RootComponent);

	WeaponComponent = CreateDefaultSubobject<UTP_WeaponComponent>("Weapon_Component");
}

UStaticMeshComponent* AWeapon::GetMesh()
{
	return Mesh;
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
	WeaponComponent->FireSound = FireSound;
	WeaponComponent->EmptySound = EmptySound;
	WeaponComponent->environmentSounds = environmentSounds;
	WeaponComponent->MuzzleFlash = MuzzleFlash;
	WeaponComponent->m_eWeaponType = m_eWeaponType;
	WeaponComponent->m_fDamage = m_fDamage;
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

