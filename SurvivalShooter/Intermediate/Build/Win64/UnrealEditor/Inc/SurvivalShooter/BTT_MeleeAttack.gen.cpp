// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalShooter/BTT_MeleeAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_MeleeAttack() {}
// Cross Module References
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_UBTT_MeleeAttack_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_UBTT_MeleeAttack();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_SurvivalShooter();
// End Cross Module References
	void UBTT_MeleeAttack::StaticRegisterNativesUBTT_MeleeAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_MeleeAttack);
	UClass* Z_Construct_UClass_UBTT_MeleeAttack_NoRegister()
	{
		return UBTT_MeleeAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBTT_MeleeAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTT_MeleeAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTT_MeleeAttack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTT_MeleeAttack.h" },
		{ "ModuleRelativePath", "BTT_MeleeAttack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTT_MeleeAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_MeleeAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_MeleeAttack_Statics::ClassParams = {
		&UBTT_MeleeAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTT_MeleeAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTT_MeleeAttack()
	{
		if (!Z_Registration_Info_UClass_UBTT_MeleeAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_MeleeAttack.OuterSingleton, Z_Construct_UClass_UBTT_MeleeAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTT_MeleeAttack.OuterSingleton;
	}
	template<> SURVIVALSHOOTER_API UClass* StaticClass<UBTT_MeleeAttack>()
	{
		return UBTT_MeleeAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_MeleeAttack);
	struct Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_BTT_MeleeAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_BTT_MeleeAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_MeleeAttack, UBTT_MeleeAttack::StaticClass, TEXT("UBTT_MeleeAttack"), &Z_Registration_Info_UClass_UBTT_MeleeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_MeleeAttack), 2013458159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_BTT_MeleeAttack_h_1815420976(TEXT("/Script/SurvivalShooter"),
		Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_BTT_MeleeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_BTT_MeleeAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
