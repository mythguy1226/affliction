// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalShooter/Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalShooter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	SURVIVALSHOOTER_API UEnum* Z_Construct_UEnum_SurvivalShooter_EWeaponType();
// End Cross Module References
	void AWeapon::StaticRegisterNativesAWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptySound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptySound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pReloadSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pReloadSound;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_environmentSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_environmentSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_environmentSounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
		static const UECodeGen_Private::FBytePropertyParams NewProp_m_eWeaponType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_eWeaponType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_m_eWeaponType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fFireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fFireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bFullAuto_MetaData[];
#endif
		static void NewProp_m_bFullAuto_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bFullAuto;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_iClipSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iClipSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_iMaxAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iMaxAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_iCurrentAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iCurrentAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_iTotalAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iTotalAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_sWeaponName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_m_sWeaponName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapon.h" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_EmptySound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Sound to play each time we can't fire */" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Sound to play each time we can't fire" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_EmptySound = { "EmptySound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, EmptySound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_EmptySound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_EmptySound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_m_pReloadSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/* Gets the sound used for reloading */" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Gets the sound used for reloading" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_m_pReloadSound = { "m_pReloadSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, m_pReloadSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_m_pReloadSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_m_pReloadSound_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_environmentSounds_Inner = { "environmentSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_environmentSounds_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_environmentSounds = { "environmentSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, environmentSounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_environmentSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_environmentSounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Gun muzzle's offset from the characters location */" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "SFX" },
		{ "Comment", "/** Gun muzzle's particle */" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Gun muzzle's particle" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, MuzzleFlash), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleFlash_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_m_eWeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_m_eWeaponType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Gun Type */" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Gun Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_m_eWeaponType = { "m_eWeaponType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, m_eWeaponType), Z_Construct_UEnum_SurvivalShooter_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_m_eWeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_m_eWeaponType_MetaData)) }; // 2549277551
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_m_fFireRate_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Gun Fire-Rate for Full-Auto */" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Gun Fire-Rate for Full-Auto" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_m_fFireRate = { "m_fFireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, m_fFireRate), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_m_fFireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_m_fFireRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_m_bFullAuto_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Gun Firing Mode */" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Gun Firing Mode" },
	};
#endif
	void Z_Construct_UClass_AWeapon_Statics::NewProp_m_bFullAuto_SetBit(void* Obj)
	{
		((AWeapon*)Obj)->m_bFullAuto = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_m_bFullAuto = { "m_bFullAuto", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_m_bFullAuto_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_m_bFullAuto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_m_bFullAuto_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_m_fDamage_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Gun Damage */" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Gun Damage" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_m_fDamage = { "m_fDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, m_fDamage), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_m_fDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_m_fDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_m_iClipSize_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// Ammo Fields\n" },
		{ "ModuleRelativePath", "Weapon.h" },
		{ "ToolTip", "Ammo Fields" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_m_iClipSize = { "m_iClipSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, m_iClipSize), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_m_iClipSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_m_iClipSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_m_iMaxAmmo_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_m_iMaxAmmo = { "m_iMaxAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, m_iMaxAmmo), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_m_iMaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_m_iMaxAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_m_iCurrentAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_m_iCurrentAmmo = { "m_iCurrentAmmo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, m_iCurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_m_iCurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_m_iCurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_m_iTotalAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_m_iTotalAmmo = { "m_iTotalAmmo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, m_iTotalAmmo), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_m_iTotalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_m_iTotalAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeapon_Statics::NewProp_m_sWeaponName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Weapon.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_m_sWeaponName = { "m_sWeaponName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeapon, m_sWeaponName), METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::NewProp_m_sWeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::NewProp_m_sWeaponName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_FireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_EmptySound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_m_pReloadSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_environmentSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_environmentSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_MuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_m_eWeaponType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_m_eWeaponType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_m_fFireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_m_bFullAuto,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_m_fDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_m_iClipSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_m_iMaxAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_m_iCurrentAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_m_iTotalAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_m_sWeaponName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
		&AWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeapon()
	{
		if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
	}
	template<> SURVIVALSHOOTER_API UClass* StaticClass<AWeapon>()
	{
		return AWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
	struct Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 4036066095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_1867159690(TEXT("/Script/SurvivalShooter"),
		Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
