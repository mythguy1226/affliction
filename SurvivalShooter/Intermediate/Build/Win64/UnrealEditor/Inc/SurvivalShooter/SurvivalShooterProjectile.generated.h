// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SURVIVALSHOOTER_SurvivalShooterProjectile_generated_h
#error "SurvivalShooterProjectile.generated.h already included, missing '#pragma once' in SurvivalShooterProjectile.h"
#endif
#define SURVIVALSHOOTER_SurvivalShooterProjectile_generated_h

#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_SPARSE_DATA
#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalShooterProjectile(); \
	friend struct Z_Construct_UClass_ASurvivalShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(ASurvivalShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalShooter"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASurvivalShooterProjectile(); \
	friend struct Z_Construct_UClass_ASurvivalShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(ASurvivalShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalShooter"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASurvivalShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASurvivalShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalShooterProjectile(ASurvivalShooterProjectile&&); \
	NO_API ASurvivalShooterProjectile(const ASurvivalShooterProjectile&); \
public:


#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalShooterProjectile(ASurvivalShooterProjectile&&); \
	NO_API ASurvivalShooterProjectile(const ASurvivalShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalShooterProjectile)


#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_12_PROLOG
#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_SPARSE_DATA \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_RPC_WRAPPERS \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_INCLASS \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_SPARSE_DATA \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALSHOOTER_API UClass* StaticClass<class ASurvivalShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SurvivalShooter_Source_SurvivalShooter_SurvivalShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
