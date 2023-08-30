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
#ifdef SURVIVALSHOOTER_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define SURVIVALSHOOTER_Interactable_generated_h

#define FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_SPARSE_DATA
#define FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCapsuleEndOverlap); \
	DECLARE_FUNCTION(execOnCapsuleBeginOverlap);


#define FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCapsuleEndOverlap); \
	DECLARE_FUNCTION(execOnCapsuleBeginOverlap);


#define FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalShooter"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalShooter"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public:


#define FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractable)


#define FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_10_PROLOG
#define FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_SPARSE_DATA \
	FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_RPC_WRAPPERS \
	FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_INCLASS \
	FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_SPARSE_DATA \
	FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_INCLASS_NO_PURE_DECLS \
	FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALSHOOTER_API UClass* StaticClass<class AInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
