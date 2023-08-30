// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalShooter/GlobalManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalManager() {}
// Cross Module References
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_UGlobalManager_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_UGlobalManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_SurvivalShooter();
// End Cross Module References
	void UGlobalManager::StaticRegisterNativesUGlobalManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGlobalManager);
	UClass* Z_Construct_UClass_UGlobalManager_NoRegister()
	{
		return UGlobalManager::StaticClass();
	}
	struct Z_Construct_UClass_UGlobalManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_iPoints_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_m_iPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlobalManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GlobalManager.h" },
		{ "ModuleRelativePath", "GlobalManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalManager_Statics::NewProp_m_iPoints_MetaData[] = {
		{ "Category", "GlobalManager" },
		{ "Comment", "// Player's Total Points\n" },
		{ "ModuleRelativePath", "GlobalManager.h" },
		{ "ToolTip", "Player's Total Points" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGlobalManager_Statics::NewProp_m_iPoints = { "m_iPoints", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGlobalManager, m_iPoints), METADATA_PARAMS(Z_Construct_UClass_UGlobalManager_Statics::NewProp_m_iPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalManager_Statics::NewProp_m_iPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGlobalManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGlobalManager_Statics::NewProp_m_iPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlobalManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGlobalManager_Statics::ClassParams = {
		&UGlobalManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGlobalManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalManager_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGlobalManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlobalManager()
	{
		if (!Z_Registration_Info_UClass_UGlobalManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGlobalManager.OuterSingleton, Z_Construct_UClass_UGlobalManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGlobalManager.OuterSingleton;
	}
	template<> SURVIVALSHOOTER_API UClass* StaticClass<UGlobalManager>()
	{
		return UGlobalManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalManager);
	struct Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_GlobalManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_GlobalManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGlobalManager, UGlobalManager::StaticClass, TEXT("UGlobalManager"), &Z_Registration_Info_UClass_UGlobalManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGlobalManager), 948092725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_GlobalManager_h_2266138706(TEXT("/Script/SurvivalShooter"),
		Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_GlobalManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_GlobalManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
