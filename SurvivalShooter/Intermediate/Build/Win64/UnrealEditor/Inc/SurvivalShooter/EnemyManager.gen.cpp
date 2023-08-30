// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalShooter/EnemyManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyManager() {}
// Cross Module References
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AEnemyManager_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AEnemyManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalShooter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AEnemyManager::StaticRegisterNativesAEnemyManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyManager);
	UClass* Z_Construct_UClass_AEnemyManager_NoRegister()
	{
		return AEnemyManager::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_aSpawnLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_aSpawnLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_aSpawnLocations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_iFirstWaveCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iFirstWaveCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_iCurrentWave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iCurrentWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyManager.h" },
		{ "ModuleRelativePath", "EnemyManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_aSpawnLocations_Inner = { "m_aSpawnLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_aSpawnLocations_MetaData[] = {
		{ "Category", "Management" },
		{ "Comment", "// Spawn Locations\n" },
		{ "ModuleRelativePath", "EnemyManager.h" },
		{ "ToolTip", "Spawn Locations" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_aSpawnLocations = { "m_aSpawnLocations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, m_aSpawnLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_aSpawnLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_aSpawnLocations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_iFirstWaveCount_MetaData[] = {
		{ "Category", "Management" },
		{ "Comment", "// Enemies per wave\n" },
		{ "ModuleRelativePath", "EnemyManager.h" },
		{ "ToolTip", "Enemies per wave" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_iFirstWaveCount = { "m_iFirstWaveCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, m_iFirstWaveCount), METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_iFirstWaveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_iFirstWaveCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_iCurrentWave_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "// Only manage waves in here but make readable for UI\n" },
		{ "ModuleRelativePath", "EnemyManager.h" },
		{ "ToolTip", "Only manage waves in here but make readable for UI" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_iCurrentWave = { "m_iCurrentWave", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyManager, m_iCurrentWave), METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_iCurrentWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_iCurrentWave_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_aSpawnLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_aSpawnLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_iFirstWaveCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyManager_Statics::NewProp_m_iCurrentWave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyManager_Statics::ClassParams = {
		&AEnemyManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyManager()
	{
		if (!Z_Registration_Info_UClass_AEnemyManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyManager.OuterSingleton, Z_Construct_UClass_AEnemyManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyManager.OuterSingleton;
	}
	template<> SURVIVALSHOOTER_API UClass* StaticClass<AEnemyManager>()
	{
		return AEnemyManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyManager);
	struct Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_EnemyManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_EnemyManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyManager, AEnemyManager::StaticClass, TEXT("AEnemyManager"), &Z_Registration_Info_UClass_AEnemyManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyManager), 1758808494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_EnemyManager_h_1801877665(TEXT("/Script/SurvivalShooter"),
		Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_EnemyManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_EnemyManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
