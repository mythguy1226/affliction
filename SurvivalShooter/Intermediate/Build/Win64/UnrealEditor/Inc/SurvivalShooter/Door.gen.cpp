// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalShooter/Door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}
// Cross Module References
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_ADoor();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AInteractable();
	UPackage* Z_Construct_UPackage__Script_SurvivalShooter();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AEnemySpawn_NoRegister();
// End Cross Module References
	void ADoor::StaticRegisterNativesADoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoor);
	UClass* Z_Construct_UClass_ADoor_NoRegister()
	{
		return ADoor::StaticClass();
	}
	struct Z_Construct_UClass_ADoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_aSpawnsToUnlock_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_aSpawnsToUnlock_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_aSpawnsToUnlock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Door.h" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_m_aSpawnsToUnlock_Inner = { "m_aSpawnsToUnlock", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEnemySpawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoor_Statics::NewProp_m_aSpawnsToUnlock_MetaData[] = {
		{ "Category", "Door" },
		{ "Comment", "// Reference to different spawns to unlock\n" },
		{ "ModuleRelativePath", "Door.h" },
		{ "ToolTip", "Reference to different spawns to unlock" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_m_aSpawnsToUnlock = { "m_aSpawnsToUnlock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoor, m_aSpawnsToUnlock), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::NewProp_m_aSpawnsToUnlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::NewProp_m_aSpawnsToUnlock_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_m_aSpawnsToUnlock_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_m_aSpawnsToUnlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
		&ADoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoor()
	{
		if (!Z_Registration_Info_UClass_ADoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor.OuterSingleton, Z_Construct_UClass_ADoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoor.OuterSingleton;
	}
	template<> SURVIVALSHOOTER_API UClass* StaticClass<ADoor>()
	{
		return ADoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
	struct Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Door_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Door_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoor, ADoor::StaticClass, TEXT("ADoor"), &Z_Registration_Info_UClass_ADoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor), 148638820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Door_h_2399790014(TEXT("/Script/SurvivalShooter"),
		Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Door_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
