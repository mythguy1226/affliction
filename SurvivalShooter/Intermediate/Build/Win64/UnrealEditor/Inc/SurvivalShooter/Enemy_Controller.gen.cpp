// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalShooter/Enemy_Controller.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Controller() {}
// Cross Module References
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AEnemy_Controller_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AEnemy_Controller();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_SurvivalShooter();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AEnemy_Controller::StaticRegisterNativesAEnemy_Controller()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_Controller);
	UClass* Z_Construct_UClass_AEnemy_Controller_NoRegister()
	{
		return AEnemy_Controller::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pBehaviorTreeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBehaviorTreeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pBehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBehaviorTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Controller_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemy_Controller.h" },
		{ "ModuleRelativePath", "Enemy_Controller.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTreeComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "// References to Behavior Tree and Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_Controller.h" },
		{ "ToolTip", "References to Behavior Tree and Component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTreeComponent = { "m_pBehaviorTreeComponent", nullptr, (EPropertyFlags)0x001000000008080d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Controller, m_pBehaviorTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTreeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTreeComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemy_Controller.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTree = { "m_pBehaviorTree", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Controller, m_pBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTree_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Controller_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTreeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Controller_Statics::NewProp_m_pBehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Controller>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Controller_Statics::ClassParams = {
		&AEnemy_Controller::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_Controller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Controller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_Controller()
	{
		if (!Z_Registration_Info_UClass_AEnemy_Controller.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_Controller.OuterSingleton, Z_Construct_UClass_AEnemy_Controller_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy_Controller.OuterSingleton;
	}
	template<> SURVIVALSHOOTER_API UClass* StaticClass<AEnemy_Controller>()
	{
		return AEnemy_Controller::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Controller);
	struct Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Enemy_Controller_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Enemy_Controller_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_Controller, AEnemy_Controller::StaticClass, TEXT("AEnemy_Controller"), &Z_Registration_Info_UClass_AEnemy_Controller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_Controller), 2888397501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Enemy_Controller_h_1478673549(TEXT("/Script/SurvivalShooter"),
		Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Enemy_Controller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Enemy_Controller_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
