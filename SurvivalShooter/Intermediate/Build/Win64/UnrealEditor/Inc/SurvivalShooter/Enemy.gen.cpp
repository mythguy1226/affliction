// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalShooter/Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}
// Cross Module References
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SurvivalShooter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AEnemy::execHandleOnMontageEnded)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_Interrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnMontageEnded(Z_Param_Montage,Z_Param_Interrupted);
		P_NATIVE_END;
	}
	void AEnemy::StaticRegisterNativesAEnemy()
	{
		UClass* Class = AEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleOnMontageEnded", &AEnemy::execHandleOnMontageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics
	{
		struct Enemy_eventHandleOnMontageEnded_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_eventHandleOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::NewProp_Interrupted_SetBit(void* Obj)
	{
		((Enemy_eventHandleOnMontageEnded_Parms*)Obj)->Interrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::NewProp_Interrupted = { "Interrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Enemy_eventHandleOnMontageEnded_Parms), &Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::NewProp_Interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::NewProp_Interrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Event handler for montage endings\n" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "Event handler for montage endings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy, nullptr, "HandleOnMontageEnded", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::Enemy_eventHandleOnMontageEnded_Parms), Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_HandleOnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_HandleOnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy);
	UClass* Z_Construct_UClass_AEnemy_NoRegister()
	{
		return AEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pAttackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pAttackMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pDeathMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pDeathMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pAttackSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pAttackSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_pAttackSounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pDeathSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pDeathSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_pDeathSounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pZombieHitSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pZombieHitSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pBloodParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pBloodParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_HandleOnMontageEnded, "HandleOnMontageEnded" }, // 2141084549
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy.h" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttackMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** AnimMontage to play each time enemy attacks */" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "AnimMontage to play each time enemy attacks" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttackMontage = { "m_pAttackMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, m_pAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttackMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_pDeathMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** AnimMontage to play when enemy dies */" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "AnimMontage to play when enemy dies" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_pDeathMontage = { "m_pDeathMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, m_pDeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pDeathMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pDeathMontage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttackSounds_Inner = { "m_pAttackSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttackSounds_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Array of possible sounds to play when an enemy attacks */" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "Array of possible sounds to play when an enemy attacks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttackSounds = { "m_pAttackSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, m_pAttackSounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttackSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttackSounds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_pDeathSounds_Inner = { "m_pDeathSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_pDeathSounds_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Array of possible sounds to play when an enemy dies */" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "Array of possible sounds to play when an enemy dies" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_pDeathSounds = { "m_pDeathSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, m_pDeathSounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pDeathSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pDeathSounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_pZombieHitSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Sound to play each time enemy is hit */" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "Sound to play each time enemy is hit" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_pZombieHitSound = { "m_pZombieHitSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, m_pZombieHitSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pZombieHitSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pZombieHitSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_pBloodParticle_MetaData[] = {
		{ "Category", "FX" },
		{ "Comment", "/** Blood Splat Particle */" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "Blood Splat Particle" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_pBloodParticle = { "m_pBloodParticle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, m_pBloodParticle), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pBloodParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_pBloodParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Statics::NewProp_m_fHealth_MetaData[] = {
		{ "Category", "Enemy" },
		{ "Comment", "// Enemy Fields for Combat and Health\n" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "ToolTip", "Enemy Fields for Combat and Health" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_m_fHealth = { "m_fHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy, m_fHealth), METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::NewProp_m_fHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::NewProp_m_fHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_pDeathMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttackSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_pAttackSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_pDeathSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_pDeathSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_pZombieHitSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_pBloodParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_m_fHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
		&AEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy()
	{
		if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
	}
	template<> SURVIVALSHOOTER_API UClass* StaticClass<AEnemy>()
	{
		return AEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
	struct Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Enemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 596660126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Enemy_h_2991123491(TEXT("/Script/SurvivalShooter"),
		Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Enemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
