// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalShooter/IsPlayerInMeleeRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsPlayerInMeleeRange() {}
// Cross Module References
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_UIsPlayerInMeleeRange_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_UIsPlayerInMeleeRange();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SurvivalShooter();
// End Cross Module References
	void UIsPlayerInMeleeRange::StaticRegisterNativesUIsPlayerInMeleeRange()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsPlayerInMeleeRange);
	UClass* Z_Construct_UClass_UIsPlayerInMeleeRange_NoRegister()
	{
		return UIsPlayerInMeleeRange::StaticClass();
	}
	struct Z_Construct_UClass_UIsPlayerInMeleeRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fMeleeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fMeleeRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IsPlayerInMeleeRange.h" },
		{ "ModuleRelativePath", "IsPlayerInMeleeRange.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::NewProp_m_fMeleeRange_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "IsPlayerInMeleeRange.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::NewProp_m_fMeleeRange = { "m_fMeleeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsPlayerInMeleeRange, m_fMeleeRange), METADATA_PARAMS(Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::NewProp_m_fMeleeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::NewProp_m_fMeleeRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::NewProp_m_fMeleeRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsPlayerInMeleeRange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::ClassParams = {
		&UIsPlayerInMeleeRange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsPlayerInMeleeRange()
	{
		if (!Z_Registration_Info_UClass_UIsPlayerInMeleeRange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsPlayerInMeleeRange.OuterSingleton, Z_Construct_UClass_UIsPlayerInMeleeRange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIsPlayerInMeleeRange.OuterSingleton;
	}
	template<> SURVIVALSHOOTER_API UClass* StaticClass<UIsPlayerInMeleeRange>()
	{
		return UIsPlayerInMeleeRange::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsPlayerInMeleeRange);
	struct Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_IsPlayerInMeleeRange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_IsPlayerInMeleeRange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIsPlayerInMeleeRange, UIsPlayerInMeleeRange::StaticClass, TEXT("UIsPlayerInMeleeRange"), &Z_Registration_Info_UClass_UIsPlayerInMeleeRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsPlayerInMeleeRange), 1768285404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_IsPlayerInMeleeRange_h_1814251408(TEXT("/Script/SurvivalShooter"),
		Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_IsPlayerInMeleeRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_IsPlayerInMeleeRange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
