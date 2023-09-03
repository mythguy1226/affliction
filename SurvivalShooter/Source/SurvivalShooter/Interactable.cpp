// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AInteractable::AInteractable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	m_pMesh->SetupAttachment(RootComponent);

	m_pCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(FName("Collider"));
	m_pCapsuleComponent->InitCapsuleSize(55.f, 96.0f);;
	m_pCapsuleComponent->SetupAttachment(m_pMesh);

	// Register our Overlap Event
	m_pCapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &AInteractable::OnCapsuleBeginOverlap);
	m_pCapsuleComponent->OnComponentEndOverlap.AddDynamic(this, &AInteractable::OnCapsuleEndOverlap);
}

// Called when the game starts or when spawned
void AInteractable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractable::OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Null check the overlapping actor
	if (OtherActor != nullptr)
	{
		// Cast to player and enable interact
		ASurvivalShooterCharacter* pPlayer = Cast<ASurvivalShooterCharacter>(OtherActor);
		if (pPlayer)
		{
			pPlayer->m_bCanInteract = true;

			// Set proper interact values
			pPlayer->m_sInteractMessage = m_sInteractMessage;
			pPlayer->m_pInteractable = this;
		}
	}
}

void AInteractable::OnCapsuleEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Null check the overlapping actor
	if (OtherActor != nullptr)
	{
		// Cast to player and disable interact
		ASurvivalShooterCharacter* pPlayer = Cast<ASurvivalShooterCharacter>(OtherActor);
		if (pPlayer)
		{
			pPlayer->m_bCanInteract = false;
		}
	}
}

