// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef SURVIVALSHOOTER_SurvivalShooterCharacter_generated_h
#error "SurvivalShooterCharacter.generated.h already included, missing '#pragma once' in SurvivalShooterCharacter.h"
#endif
#define SURVIVALSHOOTER_SurvivalShooterCharacter_generated_h

#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_20_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_SPARSE_DATA
#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOnMontageEnded);


#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOnMontageEnded);


#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalShooterCharacter(); \
	friend struct Z_Construct_UClass_ASurvivalShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(ASurvivalShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalShooter"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalShooterCharacter)


#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_INCLASS \
private: \
	static void StaticRegisterNativesASurvivalShooterCharacter(); \
	friend struct Z_Construct_UClass_ASurvivalShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(ASurvivalShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalShooter"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalShooterCharacter)


#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASurvivalShooterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurvivalShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalShooterCharacter(ASurvivalShooterCharacter&&); \
	NO_API ASurvivalShooterCharacter(const ASurvivalShooterCharacter&); \
public:


#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalShooterCharacter(ASurvivalShooterCharacter&&); \
	NO_API ASurvivalShooterCharacter(const ASurvivalShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalShooterCharacter)


#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_22_PROLOG
#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_SPARSE_DATA \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_RPC_WRAPPERS \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_INCLASS \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_SPARSE_DATA \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALSHOOTER_API UClass* StaticClass<class ASurvivalShooterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
