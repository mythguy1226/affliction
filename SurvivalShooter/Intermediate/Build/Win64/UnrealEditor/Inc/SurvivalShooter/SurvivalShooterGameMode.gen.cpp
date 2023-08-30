// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalShooter/SurvivalShooterGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalShooterGameMode() {}
// Cross Module References
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_ASurvivalShooterGameMode_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_ASurvivalShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SurvivalShooter();
// End Cross Module References
	void ASurvivalShooterGameMode::StaticRegisterNativesASurvivalShooterGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvivalShooterGameMode);
	UClass* Z_Construct_UClass_ASurvivalShooterGameMode_NoRegister()
	{
		return ASurvivalShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SurvivalShooterGameMode.h" },
		{ "ModuleRelativePath", "SurvivalShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalShooterGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalShooterGameMode_Statics::ClassParams = {
		&ASurvivalShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASurvivalShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASurvivalShooterGameMode()
	{
		if (!Z_Registration_Info_UClass_ASurvivalShooterGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivalShooterGameMode.OuterSingleton, Z_Construct_UClass_ASurvivalShooterGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASurvivalShooterGameMode.OuterSingleton;
	}
	template<> SURVIVALSHOOTER_API UClass* StaticClass<ASurvivalShooterGameMode>()
	{
		return ASurvivalShooterGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalShooterGameMode);
	struct Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalShooterGameMode, ASurvivalShooterGameMode::StaticClass, TEXT("ASurvivalShooterGameMode"), &Z_Registration_Info_UClass_ASurvivalShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalShooterGameMode), 453590078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterGameMode_h_1768768809(TEXT("/Script/SurvivalShooter"),
		Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
