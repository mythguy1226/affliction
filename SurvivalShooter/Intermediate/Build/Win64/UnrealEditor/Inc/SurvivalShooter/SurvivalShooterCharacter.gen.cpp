// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalShooter/SurvivalShooterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalShooterCharacter() {}
// Cross Module References
	SURVIVALSHOOTER_API UFunction* Z_Construct_UDelegateFunction_SurvivalShooter_OnUseItem__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SurvivalShooter();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_ASurvivalShooterCharacter_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_ASurvivalShooterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SurvivalShooter_OnUseItem__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SurvivalShooter_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declaration of the delegate that will be called when the Primary Action is triggered\n// It is declared as dynamic so it can be accessed also in Blueprints\n" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "Declaration of the delegate that will be called when the Primary Action is triggered\nIt is declared as dynamic so it can be accessed also in Blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SurvivalShooter_OnUseItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SurvivalShooter, nullptr, "OnUseItem__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SurvivalShooter_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SurvivalShooter_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SurvivalShooter_OnUseItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SurvivalShooter_OnUseItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ASurvivalShooterCharacter::execHandleOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_Interrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnMontageEnded(Z_Param_Montage,Z_Param_Interrupted);
		P_NATIVE_END;
	}
	void ASurvivalShooterCharacter::StaticRegisterNativesASurvivalShooterCharacter()
	{
		UClass* Class = ASurvivalShooterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleOnMontageEnded", &ASurvivalShooterCharacter::execHandleOnMontageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics
	{
		struct SurvivalShooterCharacter_eventHandleOnMontageEnded_Parms
		{
			UAnimMontage* Montage;
			bool Interrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_Interrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Interrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SurvivalShooterCharacter_eventHandleOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::NewProp_Interrupted_SetBit(void* Obj)
	{
		((SurvivalShooterCharacter_eventHandleOnMontageEnded_Parms*)Obj)->Interrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::NewProp_Interrupted = { "Interrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SurvivalShooterCharacter_eventHandleOnMontageEnded_Parms), &Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::NewProp_Interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::NewProp_Interrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASurvivalShooterCharacter, nullptr, "HandleOnMontageEnded", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::SurvivalShooterCharacter_eventHandleOnMontageEnded_Parms), Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvivalShooterCharacter);
	UClass* Z_Construct_UClass_ASurvivalShooterCharacter_NoRegister()
	{
		return ASurvivalShooterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalShooterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_cPistol_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_m_cPistol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_cRifle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_m_cRifle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_cPlayerHUD_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_m_cPlayerHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUseItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUseItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pEquippedWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pEquippedWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pOffHandWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pOffHandWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pReloadMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pReloadMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pRifleReloadMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pRifleReloadMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pShootMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pShootMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pRifleShootMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pRifleShootMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pWeaponSwapSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pWeaponSwapSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canInteract_MetaData[];
#endif
		static void NewProp_canInteract_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canInteract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_sClosestInteractable_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_m_sClosestInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pInteractable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_sInteractMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_m_sInteractMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pGunSwitchParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pGunSwitchParticle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalShooterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASurvivalShooterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASurvivalShooterCharacter_HandleOnMontageEnded, "HandleOnMontageEnded" }, // 524899437
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SurvivalShooterCharacter.h" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cPistol_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "Comment", "/* Pistol Class to Spawn*/" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "Pistol Class to Spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cPistol = { "m_cPistol", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_cPistol), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cPistol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cPistol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cRifle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Weapon" },
		{ "Comment", "/* Rifle Class to Spawn*/" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "Rifle Class to Spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cRifle = { "m_cRifle", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_cRifle), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cRifle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cRifle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cPlayerHUD_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Widgets" },
		{ "Comment", "/* Get the blueprint widget to assign to the player viewport */" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "Get the blueprint widget to assign to the player viewport" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cPlayerHUD = { "m_cPlayerHUD", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_cPlayerHUD), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cPlayerHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cPlayerHUD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_OnUseItem_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_OnUseItem = { "OnUseItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, OnUseItem), Z_Construct_UDelegateFunction_SurvivalShooter_OnUseItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_OnUseItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_OnUseItem_MetaData)) }; // 1157789649
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pEquippedWeapon_MetaData[] = {
		{ "Category", "SurvivalShooterCharacter" },
		{ "Comment", "/* Reference of current weapon equipped */" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "Reference of current weapon equipped" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pEquippedWeapon = { "m_pEquippedWeapon", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_pEquippedWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pEquippedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pEquippedWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pOffHandWeapon_MetaData[] = {
		{ "Category", "SurvivalShooterCharacter" },
		{ "Comment", "/* Reference of off-hand weapon equipped */" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "Reference of off-hand weapon equipped" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pOffHandWeapon = { "m_pOffHandWeapon", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_pOffHandWeapon), Z_Construct_UClass_AWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pOffHandWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pOffHandWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pReloadMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/* Gets the montage used for reloading */" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "Gets the montage used for reloading" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pReloadMontage = { "m_pReloadMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_pReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pReloadMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pRifleReloadMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pRifleReloadMontage = { "m_pRifleReloadMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_pRifleReloadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pRifleReloadMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pRifleReloadMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pShootMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pShootMontage = { "m_pShootMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_pShootMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pShootMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pShootMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pRifleShootMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pRifleShootMontage = { "m_pRifleShootMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_pRifleShootMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pRifleShootMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pRifleShootMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pWeaponSwapSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/* Gets the sound used for swapping weapons */" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "Gets the sound used for swapping weapons" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pWeaponSwapSound = { "m_pWeaponSwapSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_pWeaponSwapSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pWeaponSwapSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pWeaponSwapSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_health_MetaData[] = {
		{ "Category", "SurvivalShooterCharacter" },
		{ "Comment", "// Public fields\n" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "Public fields" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, health), METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_canInteract_MetaData[] = {
		{ "Category", "SurvivalShooterCharacter" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_canInteract_SetBit(void* Obj)
	{
		((ASurvivalShooterCharacter*)Obj)->canInteract = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_canInteract = { "canInteract", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASurvivalShooterCharacter), &Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_canInteract_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_canInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_canInteract_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_sClosestInteractable_MetaData[] = {
		{ "Category", "SurvivalShooterCharacter" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_sClosestInteractable = { "m_sClosestInteractable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_sClosestInteractable), METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_sClosestInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_sClosestInteractable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pInteractable_MetaData[] = {
		{ "Category", "SurvivalShooterCharacter" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pInteractable = { "m_pInteractable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_pInteractable), Z_Construct_UClass_AInteractable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pInteractable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_sInteractMessage_MetaData[] = {
		{ "Category", "SurvivalShooterCharacter" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_sInteractMessage = { "m_sInteractMessage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_sInteractMessage), METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_sInteractMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_sInteractMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pGunSwitchParticle_MetaData[] = {
		{ "Category", "SFX" },
		{ "Comment", "/** Gun switch particle */" },
		{ "ModuleRelativePath", "SurvivalShooterCharacter.h" },
		{ "ToolTip", "Gun switch particle" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pGunSwitchParticle = { "m_pGunSwitchParticle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASurvivalShooterCharacter, m_pGunSwitchParticle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pGunSwitchParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pGunSwitchParticle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASurvivalShooterCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cPistol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cRifle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_cPlayerHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_OnUseItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pEquippedWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pOffHandWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pReloadMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pRifleReloadMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pShootMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pRifleShootMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pWeaponSwapSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_canInteract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_sClosestInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_sInteractMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASurvivalShooterCharacter_Statics::NewProp_m_pGunSwitchParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalShooterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalShooterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalShooterCharacter_Statics::ClassParams = {
		&ASurvivalShooterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASurvivalShooterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalShooterCharacter()
	{
		if (!Z_Registration_Info_UClass_ASurvivalShooterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivalShooterCharacter.OuterSingleton, Z_Construct_UClass_ASurvivalShooterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASurvivalShooterCharacter.OuterSingleton;
	}
	template<> SURVIVALSHOOTER_API UClass* StaticClass<ASurvivalShooterCharacter>()
	{
		return ASurvivalShooterCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalShooterCharacter);
	struct Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalShooterCharacter, ASurvivalShooterCharacter::StaticClass, TEXT("ASurvivalShooterCharacter"), &Z_Registration_Info_UClass_ASurvivalShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalShooterCharacter), 1009411320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_2487555071(TEXT("/Script/SurvivalShooter"),
		Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
