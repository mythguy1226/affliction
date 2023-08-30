// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalShooter_init() {}
	SURVIVALSHOOTER_API UFunction* Z_Construct_UDelegateFunction_SurvivalShooter_OnPickUp__DelegateSignature();
	SURVIVALSHOOTER_API UFunction* Z_Construct_UDelegateFunction_SurvivalShooter_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SurvivalShooter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SurvivalShooter()
	{
		if (!Z_Registration_Info_UPackage__Script_SurvivalShooter.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SurvivalShooter_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SurvivalShooter_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SurvivalShooter",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFD206314,
				0x925560A0,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SurvivalShooter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SurvivalShooter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SurvivalShooter(Z_Construct_UPackage__Script_SurvivalShooter, TEXT("/Script/SurvivalShooter"), Z_Registration_Info_UPackage__Script_SurvivalShooter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFD206314, 0x925560A0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
