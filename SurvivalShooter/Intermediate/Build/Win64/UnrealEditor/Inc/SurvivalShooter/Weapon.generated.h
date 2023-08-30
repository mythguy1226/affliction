// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SURVIVALSHOOTER_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define SURVIVALSHOOTER_Weapon_generated_h

#define FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_SPARSE_DATA
#define FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_RPC_WRAPPERS
#define FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalShooter"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalShooter"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_10_PROLOG
#define FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_SPARSE_DATA \
	FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_RPC_WRAPPERS \
	FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_INCLASS \
	FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_SPARSE_DATA \
	FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_INCLASS_NO_PURE_DECLS \
	FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALSHOOTER_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SurvivalShooter_Source_SurvivalShooter_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
