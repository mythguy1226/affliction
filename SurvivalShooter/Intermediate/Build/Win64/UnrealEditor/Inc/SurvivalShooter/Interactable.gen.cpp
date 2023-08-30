// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalShooter/Interactable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}
// Cross Module References
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AInteractable_NoRegister();
	SURVIVALSHOOTER_API UClass* Z_Construct_UClass_AInteractable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SurvivalShooter();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInteractable::execOnCapsuleEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCapsuleEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractable::execOnCapsuleBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCapsuleBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AInteractable::StaticRegisterNativesAInteractable()
	{
		UClass* Class = AInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCapsuleBeginOverlap", &AInteractable::execOnCapsuleBeginOverlap },
			{ "OnCapsuleEndOverlap", &AInteractable::execOnCapsuleEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics
	{
		struct Interactable_eventOnCapsuleBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventOnCapsuleBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventOnCapsuleBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventOnCapsuleBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventOnCapsuleBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Interactable_eventOnCapsuleBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactable_eventOnCapsuleBeginOverlap_Parms), &Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventOnCapsuleBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Code for when something overlaps this component */" },
		{ "ModuleRelativePath", "Interactable.h" },
		{ "ToolTip", "Code for when something overlaps this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "OnCapsuleBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::Interactable_eventOnCapsuleBeginOverlap_Parms), Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics
	{
		struct Interactable_eventOnCapsuleEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventOnCapsuleEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventOnCapsuleEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventOnCapsuleEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_eventOnCapsuleEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Code for when something overlaps this component */" },
		{ "ModuleRelativePath", "Interactable.h" },
		{ "ToolTip", "Code for when something overlaps this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable, nullptr, "OnCapsuleEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::Interactable_eventOnCapsuleEndOverlap_Parms), Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractable);
	UClass* Z_Construct_UClass_AInteractable_NoRegister()
	{
		return AInteractable::StaticClass();
	}
	struct Z_Construct_UClass_AInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pCapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pCapsuleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_fInteractCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_fInteractCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_pInteractSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_pInteractSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_sInteractMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_m_sInteractMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractable_OnCapsuleBeginOverlap, "OnCapsuleBeginOverlap" }, // 51133039
		{ &Z_Construct_UFunction_AInteractable_OnCapsuleEndOverlap, "OnCapsuleEndOverlap" }, // 1181196970
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactable.h" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp_m_pMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_m_pMesh = { "m_pMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractable, m_pMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp_m_pMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp_m_pMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp_m_pCapsuleComponent_MetaData[] = {
		{ "Category", "Trigger Capsule" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_m_pCapsuleComponent = { "m_pCapsuleComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractable, m_pCapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp_m_pCapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp_m_pCapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp_m_fInteractCost_MetaData[] = {
		{ "Category", "Interactable" },
		{ "Comment", "// Interactable Cost\n" },
		{ "ModuleRelativePath", "Interactable.h" },
		{ "ToolTip", "Interactable Cost" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_m_fInteractCost = { "m_fInteractCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractable, m_fInteractCost), METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp_m_fInteractCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp_m_fInteractCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp_m_pInteractSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/* Gets the sound used for interaction */" },
		{ "ModuleRelativePath", "Interactable.h" },
		{ "ToolTip", "Gets the sound used for interaction" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_m_pInteractSound = { "m_pInteractSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractable, m_pInteractSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp_m_pInteractSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp_m_pInteractSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Statics::NewProp_m_sInteractMessage_MetaData[] = {
		{ "Category", "Interactable" },
		{ "Comment", "// Interactable Message\n" },
		{ "ModuleRelativePath", "Interactable.h" },
		{ "ToolTip", "Interactable Message" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AInteractable_Statics::NewProp_m_sInteractMessage = { "m_sInteractMessage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractable, m_sInteractMessage), METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::NewProp_m_sInteractMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::NewProp_m_sInteractMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_m_pMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_m_pCapsuleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_m_fInteractCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_m_pInteractSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Statics::NewProp_m_sInteractMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractable_Statics::ClassParams = {
		&AInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractable()
	{
		if (!Z_Registration_Info_UClass_AInteractable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractable.OuterSingleton, Z_Construct_UClass_AInteractable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractable.OuterSingleton;
	}
	template<> SURVIVALSHOOTER_API UClass* StaticClass<AInteractable>()
	{
		return AInteractable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractable);
	struct Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractable, AInteractable::StaticClass, TEXT("AInteractable"), &Z_Registration_Info_UClass_AInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractable), 2282836604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_1092926091(TEXT("/Script/SurvivalShooter"),
		Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalShooter_Source_SurvivalShooter_Interactable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
