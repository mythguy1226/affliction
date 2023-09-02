// Copyright Epic Games, Inc. All Rights Reserved.

#include "SurvivalShooterCharacter.h"
#include "SurvivalShooterProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"
#include "TP_WeaponComponent.h"
#include "Blueprint/UserWidget.h"
#include "GlobalManager.h"
#include "Interactable.h"
#include "Door.h"


//////////////////////////////////////////////////////////////////////////
// ASurvivalShooterCharacter

ASurvivalShooterCharacter::ASurvivalShooterCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	TurnRateGamepad = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

}

void ASurvivalShooterCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	// Bind Events
	GetMesh1P()->GetAnimInstance()->OnMontageEnded.AddDynamic(this, &ASurvivalShooterCharacter::HandleOnMontageEnded);

	// Equip the Pistol upon starting
	if (m_cPistol != nullptr)
	{
		EquipWeapon();
	}
	
	// Assign the HUD to player viewport
	if (m_cPlayerHUD != nullptr)
	{
		// Get the widget and add it to the viewport
		UUserWidget* HUD = CreateWidget<UUserWidget>(Cast<APlayerController>(GetController()), m_cPlayerHUD);
		HUD->AddToViewport(9999);
	}
}

void ASurvivalShooterCharacter::Tick(float m_fDeltaTime)
{
	// Update timer
	m_fShotTimer -= m_fDeltaTime;

	// Check timer
	if (m_fShotTimer <= 0.0f)
	{
		// Check if weapon is full auto
		if (m_pEquippedWeapon->m_bFullAuto && m_bHoldingPrimaryAction)
		{
			OnPrimaryAction();
		}

		// Reset the timer
		m_fShotTimer = m_pEquippedWeapon->m_fFireRate;
	}
}

void ASurvivalShooterCharacter::EquipWeapon(FString a_sWeapon)
{
	// Get the spawning params and values for spawning the pistol
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
	const FVector SpawnLocation = GetOwner()->GetActorLocation();

	//Set Spawn Collision Handling Override
	FActorSpawnParameters ActorSpawnParams;
	ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	// Get the correct type of weapon class
	TSubclassOf<class AActor> cWeaponClass;
	if (a_sWeapon == "Pistol")
	{
		cWeaponClass = m_cPistol;
	}
	else if (a_sWeapon == "Rifle")
	{
		cWeaponClass = m_cRifle;
	}
	else if (a_sWeapon == "Shotgun")
	{
		if(m_cShotgun != nullptr)
			cWeaponClass = m_cShotgun;
	}
	else
	{
		cWeaponClass = m_cPistol;
	}

	// Spawn the weapon into the world
	AActor* pWeapon = GetWorld()->SpawnActor<AWeapon>(cWeaponClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
	
	// Set active weapon
	m_pEquippedWeapon = Cast<AWeapon>(pWeapon);

	// Set the player ammo fields based on weapon
	m_pEquippedWeapon->m_iCurrentAmmo = Cast<AWeapon>(pWeapon)->m_iClipSize;
	m_pEquippedWeapon->m_iTotalAmmo = Cast<AWeapon>(pWeapon)->m_iMaxAmmo;
	
	// Attach the weapon to the player
	UTP_WeaponComponent* pWeaponComp = Cast<AWeapon>(pWeapon)->m_pWeaponComponent;
	pWeaponComp->AttachWeapon(this);
}

void ASurvivalShooterCharacter::SwapWeapons()
{
	// Return if offhand weapon hasn't been set yet
	if (m_pOffHandWeapon == nullptr)
	{
		return;
	}
	
	// Swap between weapons
	AWeapon* pTempWeapon = m_pEquippedWeapon;
	m_pEquippedWeapon = m_pOffHandWeapon;
	m_pOffHandWeapon = pTempWeapon;

	// Set Visibility
	m_pEquippedWeapon->GetMesh()->SetVisibility(true);
	m_pOffHandWeapon->GetMesh()->SetVisibility(false);

	// Try to play the swap sound
	if (m_pWeaponSwapSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_pWeaponSwapSound, GetActorLocation());
	}

	// Try to play the particle effect if specified
	if (m_pGunSwitchParticle != nullptr)
	{
		// Get Rotation
		APlayerController* PlayerController = Cast<APlayerController>(GetController());
		const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();

		// Get Location from offset
		FVector vOffset = (GetActorForwardVector() * 10) + (GetActorRightVector() * 10) + FVector(0.0f, 0.0f, 50.0f);
		const FVector SpawnLocation = GetActorLocation() + vOffset;

		// Spawn the particle
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), m_pGunSwitchParticle, SpawnLocation, SpawnRotation);
	}
}

void ASurvivalShooterCharacter::BuyWeapon(FString a_sWeapon)
{
	// Return if player has the rifle already
	if (m_pEquippedWeapon->m_sWeaponName == a_sWeapon)
	{
		// Refill equipped weapon ammo
		m_pEquippedWeapon->m_iTotalAmmo = m_pEquippedWeapon->m_iMaxAmmo;
		m_pEquippedWeapon->m_iCurrentAmmo = m_pEquippedWeapon->m_iClipSize;
		return;
	}
	if (m_pOffHandWeapon != nullptr)
	{
		if (m_pOffHandWeapon->m_sWeaponName == a_sWeapon)
		{
			return;
		}
	}

	// Equip the rifle and hide the pistol
	if (m_pOffHandWeapon == nullptr)
	{
		// Swap weapons
		m_pOffHandWeapon = m_pEquippedWeapon;
		m_pEquippedWeapon->GetMesh()->SetVisibility(false);
		EquipWeapon(a_sWeapon);
	}
	else
	{
		// Destroy weapon being switched out
		m_pEquippedWeapon->Destroy();
		m_pEquippedWeapon = nullptr;

		// Equip the new weapon
		EquipWeapon(a_sWeapon);
	}

	// Try to play the swap sound
	if (m_pWeaponSwapSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_pWeaponSwapSound, GetActorLocation());
	}

	// Try to play the particle effect if specified
	if (m_pGunSwitchParticle != nullptr)
	{
		// Get Rotation
		APlayerController* PlayerController = Cast<APlayerController>(GetController());
		const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();

		// Get Location from offset
		FVector vOffset = (GetActorForwardVector() * 10) + (GetActorRightVector() * 10) + FVector(0.0f, 0.0f, 50.0f);
		const FVector SpawnLocation = GetActorLocation() + vOffset;

		// Spawn the particle
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), m_pGunSwitchParticle, SpawnLocation, SpawnRotation);
	}
}

void ASurvivalShooterCharacter::TakeDamage(float a_fDamage)
{
	// Take damage
	m_fHealth -= a_fDamage;

	// Death handling
	if (m_fHealth <= 0)
	{
		// Restart world and reset points
		UGameplayStatics::OpenLevel(GetWorld(), FName(GetWorld()->GetName()), true);
		Cast<UGlobalManager>(UGameplayStatics::GetGameInstance(GetWorld()))->m_iPoints = 0;
	}
}

void ASurvivalShooterCharacter::Reload()
{
	// Check if reloading is necessary
	if (m_pEquippedWeapon->m_iCurrentAmmo < m_pEquippedWeapon->m_iClipSize)
	{
		// Check that there is ammo left
		if (m_pEquippedWeapon->m_iTotalAmmo > 0)
		{
			// Empty Anim Montage that'll be assigned below
			UAnimMontage* pReloadMontage = nullptr;

			// Get correct weapon type
			switch (m_pEquippedWeapon->m_eWeaponType)
			{
			case EWeaponType::WT_Pistol:
				// Play reload montage
				if (m_pReloadMontage != nullptr)
					pReloadMontage = m_pReloadMontage;
				break;
			case EWeaponType::WT_Rifle:
				// Play reload montage
				if (m_pRifleReloadMontage != nullptr)
					pReloadMontage = m_pRifleReloadMontage;
				break;
			case EWeaponType::WT_Shotgun:
				// Play reload montage
				if (m_pShotgunReloadMontage != nullptr)
					pReloadMontage = m_pShotgunReloadMontage;
				break;
			default:
				// Play reload montage
				if (m_pReloadMontage != nullptr)
					pReloadMontage = m_pReloadMontage;
				break;
			}

			// Get the animation object for the arms mesh
			UAnimInstance* AnimInstance = GetMesh1P()->GetAnimInstance();
			if (AnimInstance != nullptr)
			{
				// Play reload montage
				AnimInstance->Montage_Play(pReloadMontage, 1.f);

				// Try and play the sound if specified
				if (m_pEquippedWeapon->m_pReloadSound != nullptr)
				{
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_pEquippedWeapon->m_pReloadSound, GetActorLocation());
				}
			}
		}
	}
}

void ASurvivalShooterCharacter::Interact()
{
	// Ensure they can interact
	if (m_bCanInteract)
	{
		// Null check the door
		if (m_pInteractable == nullptr)
		{
			return;
		}

		// Get instance of the manager
		UGlobalManager* mngr = Cast<UGlobalManager>(UGameplayStatics::GetGameInstance(GetWorld()));
		if (mngr->m_iPoints >= m_pInteractable->m_fInteractCost)
		{
			// Take money
			mngr->m_iPoints -= m_pInteractable->m_fInteractCost;
		}
		else // No interaction if player can't afford it
		{
			return;
		}

		// Try to play the interactable sound
		if (m_pInteractable->m_pInteractSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), m_pInteractable->m_pInteractSound, GetActorLocation());
		}

		if (m_pInteractable->GetName().Contains("AmmoStation"))
		{
			// Refill equipped weapon ammo
			m_pEquippedWeapon->m_iTotalAmmo = m_pEquippedWeapon->m_iMaxAmmo;
			m_pEquippedWeapon->m_iCurrentAmmo = m_pEquippedWeapon->m_iClipSize;

			// Also refill offhand weapon
			if (m_pOffHandWeapon != nullptr)
			{
				m_pOffHandWeapon->m_iTotalAmmo = m_pOffHandWeapon->m_iMaxAmmo;
				m_pOffHandWeapon->m_iCurrentAmmo = m_pOffHandWeapon->m_iClipSize;
			}
		}
		if (m_pInteractable->GetName().Contains("Door"))
		{
			// Cast interactable to a door
			ADoor* pDoor = Cast<ADoor>(m_pInteractable);

			// Open the door
			pDoor->OpenDoor();
		}
		if (m_pInteractable->GetName().Contains("RifleShop"))
		{
			BuyWeapon("Rifle");
		}
		if (m_pInteractable->GetName().Contains("ShotgunShop"))
		{
			BuyWeapon("Shotgun");
		}
	}

}

//////////////////////////////////////////////////////////////////////////// Input

void ASurvivalShooterCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind reload event
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ASurvivalShooterCharacter::Reload);

	// Bind interact event
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ASurvivalShooterCharacter::Interact);

	// Bind weapon swap event
	PlayerInputComponent->BindAction("Swap", IE_Pressed, this, &ASurvivalShooterCharacter::SwapWeapons);

	// Bind fire events
	PlayerInputComponent->BindAction("PrimaryAction", IE_Pressed, this, &ASurvivalShooterCharacter::OnPrimaryAction);
	PlayerInputComponent->BindAction("PrimaryAction", IE_Released, this, &ASurvivalShooterCharacter::OnReleasePrimaryAction);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	// Bind movement events
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ASurvivalShooterCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ASurvivalShooterCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "Mouse" versions handle devices that provide an absolute delta, such as a mouse.
	// "Gamepad" versions are for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &ASurvivalShooterCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &ASurvivalShooterCharacter::LookUpAtRate);
}

void ASurvivalShooterCharacter::OnPrimaryAction()
{
	// Cancel any shots if delayed weapons
	if (GetMesh1P()->GetAnimInstance()->Montage_IsPlaying(m_pShotgunShootMontage))
		return;
	
	// Trigger the OnItemUsed Event
	OnUseItem.Broadcast();

	// Interrupt reload sequences
	GetMesh1P()->GetAnimInstance()->Montage_Stop(0.2f, m_pReloadMontage);
	GetMesh1P()->GetAnimInstance()->Montage_Stop(0.2f, m_pRifleReloadMontage);
	GetMesh1P()->GetAnimInstance()->Montage_Stop(0.2f, m_pShotgunReloadMontage);

	// Set holding boolean
	m_bHoldingPrimaryAction = true;

	// Empty Anim Montage will be assigned below
	UAnimMontage* pShootMontage = nullptr;

	// Conditions for weapon-type
	switch (m_pEquippedWeapon->m_eWeaponType)
	{
	case EWeaponType::WT_Pistol:
		// Pistol Shot
		if (m_pShootMontage != nullptr)
			pShootMontage = m_pShootMontage;
		break;
	case EWeaponType::WT_Rifle:
		// Rifle Shot
		if (m_pRifleShootMontage != nullptr)
			pShootMontage = m_pRifleShootMontage;
		break;
	case EWeaponType::WT_Shotgun:
		// Shotgun Shot
		if (m_pShotgunShootMontage != nullptr && m_pEquippedWeapon->m_iCurrentAmmo > 0)
			pShootMontage = m_pShotgunShootMontage;
		break;
	default:
		// Pistol Shot
		if (m_pShootMontage != nullptr)
			pShootMontage = m_pShootMontage;
		break;
	}

	// Get the animation object for the arms mesh
	UAnimInstance* AnimInstance = GetMesh1P()->GetAnimInstance();
	if (AnimInstance != nullptr)
	{
		AnimInstance->Montage_Play(pShootMontage, 1.f);
	}
}

void ASurvivalShooterCharacter::OnReleasePrimaryAction()
{
	// Reset the holding boolean
	m_bHoldingPrimaryAction = false;
}

void ASurvivalShooterCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnPrimaryAction();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void ASurvivalShooterCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

void ASurvivalShooterCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ASurvivalShooterCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ASurvivalShooterCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ASurvivalShooterCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

bool ASurvivalShooterCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ASurvivalShooterCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &ASurvivalShooterCharacter::EndTouch);

		return true;
	}
	
	return false;
}

void ASurvivalShooterCharacter::HandleOnMontageEnded(UAnimMontage* Montage, bool Interrupted)
{
	// Check if the montage is the reload montage
	if (Montage->GetName().Contains("reload") && !Interrupted)
	{
		// If no weapon is equipped then no changes to ammo can happen
		if (m_pEquippedWeapon == nullptr)
		{
			return;
		}

		// Check how much to reload
		if (m_pEquippedWeapon->m_iTotalAmmo >= m_pEquippedWeapon->m_iClipSize)
		{
			m_pEquippedWeapon->m_iTotalAmmo -= m_pEquippedWeapon->m_iClipSize;

			int reloadAmt = m_pEquippedWeapon->m_iClipSize - m_pEquippedWeapon->m_iCurrentAmmo;

			m_pEquippedWeapon->m_iCurrentAmmo += reloadAmt;
		}
		else
		{
			int reloadAmt = abs(m_pEquippedWeapon->m_iTotalAmmo - m_pEquippedWeapon->m_iCurrentAmmo);

			m_pEquippedWeapon->m_iCurrentAmmo += reloadAmt;

			m_pEquippedWeapon->m_iTotalAmmo = 0;
		}
	}
}