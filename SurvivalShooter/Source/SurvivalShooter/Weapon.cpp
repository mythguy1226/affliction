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

	m_pWeaponComponent = CreateDefaultSubobject<UTP_WeaponComponent>("Weapon_Component");
}

UStaticMeshComponent* AWeapon::GetMesh()
{
	return Mesh;
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
	m_pWeaponComponent->m_pFireSound = m_pFireSound;
	m_pWeaponComponent->m_pEmptySound = m_pEmptySound;
	m_pWeaponComponent->m_pEnvironmentSounds = m_pEnvironmentSounds;
	m_pWeaponComponent->m_pMuzzleFlash = m_pMuzzleFlash;
	m_pWeaponComponent->m_eWeaponType = m_eWeaponType;
	m_pWeaponComponent->m_fDamage = m_fDamage;
	m_pWeaponComponent->m_vMuzzleOffset = m_vMuzzleOffset;
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

