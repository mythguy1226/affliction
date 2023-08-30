// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalShooter/EnemySpawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawn() {}
// Cross Module References
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AEnemySpawn_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AEnemySpawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalShooter();
// End Cross Module References
	void AEnemySpawn::StaticRegisterNativesAEnemySpawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySpawn);
	UClass* Z_Construct_UClass_AEnemySpawn_NoRegister()
	{
		return AEnemySpawn::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_bIsLocked_MetaData[];
#endif
		static void NewProp_m_bIsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bIsLocked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemySpawn.h" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_bIsLocked_MetaData[] = {
		{ "Category", "EnemySpawn" },
		{ "Comment", "// Boolean to track if spawn point is locked\n" },
		{ "ModuleRelativePath", "EnemySpawn.h" },
		{ "ToolTip", "Boolean to track if spawn point is locked" },
	};
#endif
	void Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_bIsLocked_SetBit(void* Obj)
	{
		((AEnemySpawn*)Obj)->m_bIsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_bIsLocked = { "m_bIsLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemySpawn), &Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_bIsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_bIsLocked_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawn_Statics::NewProp_m_bIsLocked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawn_Statics::ClassParams = {
		&AEnemySpawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemySpawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemySpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemySpawn()
	{
		if (!Z_Registration_Info_UClass_AEnemySpawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySpawn.OuterSingleton, Z_Construct_UClass_AEnemySpawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemySpawn.OuterSingleton;
	}
	template<> SURVIVALSHOOTER_API UClass* StaticClass<AEnemySpawn>()
	{
		return AEnemySpawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawn);
	struct Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_EnemySpawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_EnemySpawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySpawn, AEnemySpawn::StaticClass, TEXT("AEnemySpawn"), &Z_Registration_Info_UClass_AEnemySpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpawn), 3483635147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_EnemySpawn_h_1897181200(TEXT("/Script/SurvivalShooter"),
		Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_EnemySpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_EnemySpawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
