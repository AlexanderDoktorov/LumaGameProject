// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/ALS_HookActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALS_HookActorInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_HookActorInterface();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_HookActorInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References
	DEFINE_FUNCTION(IALS_HookActorInterface::execHAFSI_Get_ParticleNormalValidation)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAFSI_Get_ParticleNormalValidation_Implementation(Z_Param_Out_Angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALS_HookActorInterface::execHAFSI_DetachRopeAndRollUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAFSI_DetachRopeAndRollUp_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALS_HookActorInterface::execHAFSI_Get_HookTargetComp)
	{
		P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_ForwardComponent);
		P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_BackwardComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAFSI_Get_HookTargetComp_Implementation(Z_Param_Out_ForwardComponent,Z_Param_Out_BackwardComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALS_HookActorInterface::execHAFSI_Play_AnimOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAFSI_Play_AnimOut_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALS_HookActorInterface::execHAFSI_Play_AnimIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAFSI_Play_AnimIn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALS_HookActorInterface::execHAFSI_Set_IsUsed)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Updated);
		P_GET_UBOOL(Z_Param_Using);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAFSI_Set_IsUsed_Implementation(Z_Param_Out_Updated,Z_Param_Using);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALS_HookActorInterface::execHAFSI_Get_ItsCurrentUsed)
	{
		P_GET_UBOOL_REF(Z_Param_Out_ItsUsed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAFSI_Get_ItsCurrentUsed_Implementation(Z_Param_Out_ItsUsed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALS_HookActorInterface::execHAFSI_Get_IsHookActor)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsActorForHook);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAFSI_Get_IsHookActor_Implementation(Z_Param_Out_IsActorForHook);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALS_HookActorInterface::execHAFSI_Get_HookTargetMeshPosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAFSI_Get_HookTargetMeshPosition_Implementation(Z_Param_Out_Position);
		P_NATIVE_END;
	}
	struct ALS_HookActorInterface_eventHAFSI_Get_HookTargetComp_Parms
	{
		UPrimitiveComponent* ForwardComponent;
		UPrimitiveComponent* BackwardComponent;
	};
	struct ALS_HookActorInterface_eventHAFSI_Get_HookTargetMeshPosition_Parms
	{
		FVector Position;
	};
	struct ALS_HookActorInterface_eventHAFSI_Get_IsHookActor_Parms
	{
		bool IsActorForHook;
	};
	struct ALS_HookActorInterface_eventHAFSI_Get_ItsCurrentUsed_Parms
	{
		bool ItsUsed;
	};
	struct ALS_HookActorInterface_eventHAFSI_Get_ParticleNormalValidation_Parms
	{
		float Angle;
	};
	struct ALS_HookActorInterface_eventHAFSI_Set_IsUsed_Parms
	{
		bool Updated;
		bool Using;
	};
	void IALS_HookActorInterface::HAFSI_DetachRopeAndRollUp()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAFSI_DetachRopeAndRollUp instead.");
	}
	void IALS_HookActorInterface::HAFSI_Get_HookTargetComp(UPrimitiveComponent*& ForwardComponent, UPrimitiveComponent*& BackwardComponent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAFSI_Get_HookTargetComp instead.");
	}
	void IALS_HookActorInterface::HAFSI_Get_HookTargetMeshPosition(FVector& Position)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAFSI_Get_HookTargetMeshPosition instead.");
	}
	void IALS_HookActorInterface::HAFSI_Get_IsHookActor(bool& IsActorForHook)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAFSI_Get_IsHookActor instead.");
	}
	void IALS_HookActorInterface::HAFSI_Get_ItsCurrentUsed(bool& ItsUsed)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAFSI_Get_ItsCurrentUsed instead.");
	}
	void IALS_HookActorInterface::HAFSI_Get_ParticleNormalValidation(float& Angle)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAFSI_Get_ParticleNormalValidation instead.");
	}
	void IALS_HookActorInterface::HAFSI_Play_AnimIn()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAFSI_Play_AnimIn instead.");
	}
	void IALS_HookActorInterface::HAFSI_Play_AnimOut()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAFSI_Play_AnimOut instead.");
	}
	void IALS_HookActorInterface::HAFSI_Set_IsUsed(bool& Updated, bool Using)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAFSI_Set_IsUsed instead.");
	}
	void UALS_HookActorInterface::StaticRegisterNativesUALS_HookActorInterface()
	{
		UClass* Class = UALS_HookActorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HAFSI_DetachRopeAndRollUp", &IALS_HookActorInterface::execHAFSI_DetachRopeAndRollUp },
			{ "HAFSI_Get_HookTargetComp", &IALS_HookActorInterface::execHAFSI_Get_HookTargetComp },
			{ "HAFSI_Get_HookTargetMeshPosition", &IALS_HookActorInterface::execHAFSI_Get_HookTargetMeshPosition },
			{ "HAFSI_Get_IsHookActor", &IALS_HookActorInterface::execHAFSI_Get_IsHookActor },
			{ "HAFSI_Get_ItsCurrentUsed", &IALS_HookActorInterface::execHAFSI_Get_ItsCurrentUsed },
			{ "HAFSI_Get_ParticleNormalValidation", &IALS_HookActorInterface::execHAFSI_Get_ParticleNormalValidation },
			{ "HAFSI_Play_AnimIn", &IALS_HookActorInterface::execHAFSI_Play_AnimIn },
			{ "HAFSI_Play_AnimOut", &IALS_HookActorInterface::execHAFSI_Play_AnimOut },
			{ "HAFSI_Set_IsUsed", &IALS_HookActorInterface::execHAFSI_Set_IsUsed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_DetachRopeAndRollUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_DetachRopeAndRollUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hook Actor Interface|Execute" },
		{ "ModuleRelativePath", "Public/ALS_HookActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_DetachRopeAndRollUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HookActorInterface, nullptr, "HAFSI_DetachRopeAndRollUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_DetachRopeAndRollUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_DetachRopeAndRollUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_DetachRopeAndRollUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_DetachRopeAndRollUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ForwardComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackwardComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackwardComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::NewProp_ForwardComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::NewProp_ForwardComponent = { "ForwardComponent", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HookActorInterface_eventHAFSI_Get_HookTargetComp_Parms, ForwardComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::NewProp_ForwardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::NewProp_ForwardComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::NewProp_BackwardComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::NewProp_BackwardComponent = { "BackwardComponent", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HookActorInterface_eventHAFSI_Get_HookTargetComp_Parms, BackwardComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::NewProp_BackwardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::NewProp_BackwardComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::NewProp_ForwardComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::NewProp_BackwardComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hook Actor Interface|Get" },
		{ "ModuleRelativePath", "Public/ALS_HookActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HookActorInterface, nullptr, "HAFSI_Get_HookTargetComp", nullptr, nullptr, sizeof(ALS_HookActorInterface_eventHAFSI_Get_HookTargetComp_Parms), Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HookActorInterface_eventHAFSI_Get_HookTargetMeshPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hook Actor Interface|Get" },
		{ "ModuleRelativePath", "Public/ALS_HookActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HookActorInterface, nullptr, "HAFSI_Get_HookTargetMeshPosition", nullptr, nullptr, sizeof(ALS_HookActorInterface_eventHAFSI_Get_HookTargetMeshPosition_Parms), Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor_Statics
	{
		static void NewProp_IsActorForHook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActorForHook;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor_Statics::NewProp_IsActorForHook_SetBit(void* Obj)
	{
		((ALS_HookActorInterface_eventHAFSI_Get_IsHookActor_Parms*)Obj)->IsActorForHook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor_Statics::NewProp_IsActorForHook = { "IsActorForHook", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HookActorInterface_eventHAFSI_Get_IsHookActor_Parms), &Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor_Statics::NewProp_IsActorForHook_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor_Statics::NewProp_IsActorForHook,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hook Actor Interface|Get" },
		{ "ModuleRelativePath", "Public/ALS_HookActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HookActorInterface, nullptr, "HAFSI_Get_IsHookActor", nullptr, nullptr, sizeof(ALS_HookActorInterface_eventHAFSI_Get_IsHookActor_Parms), Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed_Statics
	{
		static void NewProp_ItsUsed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ItsUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed_Statics::NewProp_ItsUsed_SetBit(void* Obj)
	{
		((ALS_HookActorInterface_eventHAFSI_Get_ItsCurrentUsed_Parms*)Obj)->ItsUsed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed_Statics::NewProp_ItsUsed = { "ItsUsed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HookActorInterface_eventHAFSI_Get_ItsCurrentUsed_Parms), &Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed_Statics::NewProp_ItsUsed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed_Statics::NewProp_ItsUsed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hook Actor Interface|Get" },
		{ "ModuleRelativePath", "Public/ALS_HookActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HookActorInterface, nullptr, "HAFSI_Get_ItsCurrentUsed", nullptr, nullptr, sizeof(ALS_HookActorInterface_eventHAFSI_Get_ItsCurrentUsed_Parms), Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HookActorInterface_eventHAFSI_Get_ParticleNormalValidation_Parms, Angle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation_Statics::NewProp_Angle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hook Actor Interface|Get" },
		{ "ModuleRelativePath", "Public/ALS_HookActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HookActorInterface, nullptr, "HAFSI_Get_ParticleNormalValidation", nullptr, nullptr, sizeof(ALS_HookActorInterface_eventHAFSI_Get_ParticleNormalValidation_Parms), Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimIn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hook Actor Interface|Execute" },
		{ "ModuleRelativePath", "Public/ALS_HookActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HookActorInterface, nullptr, "HAFSI_Play_AnimIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimOut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hook Actor Interface|Execute" },
		{ "ModuleRelativePath", "Public/ALS_HookActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HookActorInterface, nullptr, "HAFSI_Play_AnimOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics
	{
		static void NewProp_Updated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Updated;
		static void NewProp_Using_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Using;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::NewProp_Updated_SetBit(void* Obj)
	{
		((ALS_HookActorInterface_eventHAFSI_Set_IsUsed_Parms*)Obj)->Updated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::NewProp_Updated = { "Updated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HookActorInterface_eventHAFSI_Set_IsUsed_Parms), &Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::NewProp_Updated_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::NewProp_Using_SetBit(void* Obj)
	{
		((ALS_HookActorInterface_eventHAFSI_Set_IsUsed_Parms*)Obj)->Using = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::NewProp_Using = { "Using", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HookActorInterface_eventHAFSI_Set_IsUsed_Parms), &Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::NewProp_Using_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::NewProp_Updated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::NewProp_Using,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hook Actor Interface|Set" },
		{ "ModuleRelativePath", "Public/ALS_HookActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HookActorInterface, nullptr, "HAFSI_Set_IsUsed", nullptr, nullptr, sizeof(ALS_HookActorInterface_eventHAFSI_Set_IsUsed_Parms), Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALS_HookActorInterface);
	UClass* Z_Construct_UClass_UALS_HookActorInterface_NoRegister()
	{
		return UALS_HookActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UALS_HookActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALS_HookActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UALS_HookActorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_DetachRopeAndRollUp, "HAFSI_DetachRopeAndRollUp" }, // 308723412
		{ &Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetComp, "HAFSI_Get_HookTargetComp" }, // 1111271533
		{ &Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition, "HAFSI_Get_HookTargetMeshPosition" }, // 2238632153
		{ &Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_IsHookActor, "HAFSI_Get_IsHookActor" }, // 41644608
		{ &Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed, "HAFSI_Get_ItsCurrentUsed" }, // 3131193073
		{ &Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation, "HAFSI_Get_ParticleNormalValidation" }, // 2329471398
		{ &Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimIn, "HAFSI_Play_AnimIn" }, // 1369597549
		{ &Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Play_AnimOut, "HAFSI_Play_AnimOut" }, // 981434904
		{ &Z_Construct_UFunction_UALS_HookActorInterface_HAFSI_Set_IsUsed, "HAFSI_Set_IsUsed" }, // 891463013
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_HookActorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ALS_HookActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALS_HookActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IALS_HookActorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALS_HookActorInterface_Statics::ClassParams = {
		&UALS_HookActorInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UALS_HookActorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UALS_HookActorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UALS_HookActorInterface()
	{
		if (!Z_Registration_Info_UClass_UALS_HookActorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALS_HookActorInterface.OuterSingleton, Z_Construct_UClass_UALS_HookActorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALS_HookActorInterface.OuterSingleton;
	}
	template<> HELPFULFUNCTIONS_API UClass* StaticClass<UALS_HookActorInterface>()
	{
		return UALS_HookActorInterface::StaticClass();
	}
	UALS_HookActorInterface::UALS_HookActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALS_HookActorInterface);
	UALS_HookActorInterface::~UALS_HookActorInterface() {}
	static FName NAME_UALS_HookActorInterface_HAFSI_DetachRopeAndRollUp = FName(TEXT("HAFSI_DetachRopeAndRollUp"));
	void IALS_HookActorInterface::Execute_HAFSI_DetachRopeAndRollUp(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HookActorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UALS_HookActorInterface_HAFSI_DetachRopeAndRollUp);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IALS_HookActorInterface*)(O->GetNativeInterfaceAddress(UALS_HookActorInterface::StaticClass())))
		{
			I->HAFSI_DetachRopeAndRollUp_Implementation();
		}
	}
	static FName NAME_UALS_HookActorInterface_HAFSI_Get_HookTargetComp = FName(TEXT("HAFSI_Get_HookTargetComp"));
	void IALS_HookActorInterface::Execute_HAFSI_Get_HookTargetComp(UObject* O, UPrimitiveComponent*& ForwardComponent, UPrimitiveComponent*& BackwardComponent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HookActorInterface::StaticClass()));
		ALS_HookActorInterface_eventHAFSI_Get_HookTargetComp_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALS_HookActorInterface_HAFSI_Get_HookTargetComp);
		if (Func)
		{
			Parms.ForwardComponent=ForwardComponent;
			Parms.BackwardComponent=BackwardComponent;
			O->ProcessEvent(Func, &Parms);
			ForwardComponent=Parms.ForwardComponent;
			BackwardComponent=Parms.BackwardComponent;
		}
		else if (auto I = (IALS_HookActorInterface*)(O->GetNativeInterfaceAddress(UALS_HookActorInterface::StaticClass())))
		{
			I->HAFSI_Get_HookTargetComp_Implementation(ForwardComponent,BackwardComponent);
		}
	}
	static FName NAME_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition = FName(TEXT("HAFSI_Get_HookTargetMeshPosition"));
	void IALS_HookActorInterface::Execute_HAFSI_Get_HookTargetMeshPosition(UObject* O, FVector& Position)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HookActorInterface::StaticClass()));
		ALS_HookActorInterface_eventHAFSI_Get_HookTargetMeshPosition_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALS_HookActorInterface_HAFSI_Get_HookTargetMeshPosition);
		if (Func)
		{
			Parms.Position=Position;
			O->ProcessEvent(Func, &Parms);
			Position=Parms.Position;
		}
		else if (auto I = (IALS_HookActorInterface*)(O->GetNativeInterfaceAddress(UALS_HookActorInterface::StaticClass())))
		{
			I->HAFSI_Get_HookTargetMeshPosition_Implementation(Position);
		}
	}
	static FName NAME_UALS_HookActorInterface_HAFSI_Get_IsHookActor = FName(TEXT("HAFSI_Get_IsHookActor"));
	void IALS_HookActorInterface::Execute_HAFSI_Get_IsHookActor(UObject* O, bool& IsActorForHook)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HookActorInterface::StaticClass()));
		ALS_HookActorInterface_eventHAFSI_Get_IsHookActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALS_HookActorInterface_HAFSI_Get_IsHookActor);
		if (Func)
		{
			Parms.IsActorForHook=IsActorForHook;
			O->ProcessEvent(Func, &Parms);
			IsActorForHook=Parms.IsActorForHook;
		}
		else if (auto I = (IALS_HookActorInterface*)(O->GetNativeInterfaceAddress(UALS_HookActorInterface::StaticClass())))
		{
			I->HAFSI_Get_IsHookActor_Implementation(IsActorForHook);
		}
	}
	static FName NAME_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed = FName(TEXT("HAFSI_Get_ItsCurrentUsed"));
	void IALS_HookActorInterface::Execute_HAFSI_Get_ItsCurrentUsed(UObject* O, bool& ItsUsed)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HookActorInterface::StaticClass()));
		ALS_HookActorInterface_eventHAFSI_Get_ItsCurrentUsed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALS_HookActorInterface_HAFSI_Get_ItsCurrentUsed);
		if (Func)
		{
			Parms.ItsUsed=ItsUsed;
			O->ProcessEvent(Func, &Parms);
			ItsUsed=Parms.ItsUsed;
		}
		else if (auto I = (IALS_HookActorInterface*)(O->GetNativeInterfaceAddress(UALS_HookActorInterface::StaticClass())))
		{
			I->HAFSI_Get_ItsCurrentUsed_Implementation(ItsUsed);
		}
	}
	static FName NAME_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation = FName(TEXT("HAFSI_Get_ParticleNormalValidation"));
	void IALS_HookActorInterface::Execute_HAFSI_Get_ParticleNormalValidation(UObject* O, float& Angle)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HookActorInterface::StaticClass()));
		ALS_HookActorInterface_eventHAFSI_Get_ParticleNormalValidation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALS_HookActorInterface_HAFSI_Get_ParticleNormalValidation);
		if (Func)
		{
			Parms.Angle=Angle;
			O->ProcessEvent(Func, &Parms);
			Angle=Parms.Angle;
		}
		else if (auto I = (IALS_HookActorInterface*)(O->GetNativeInterfaceAddress(UALS_HookActorInterface::StaticClass())))
		{
			I->HAFSI_Get_ParticleNormalValidation_Implementation(Angle);
		}
	}
	static FName NAME_UALS_HookActorInterface_HAFSI_Play_AnimIn = FName(TEXT("HAFSI_Play_AnimIn"));
	void IALS_HookActorInterface::Execute_HAFSI_Play_AnimIn(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HookActorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UALS_HookActorInterface_HAFSI_Play_AnimIn);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IALS_HookActorInterface*)(O->GetNativeInterfaceAddress(UALS_HookActorInterface::StaticClass())))
		{
			I->HAFSI_Play_AnimIn_Implementation();
		}
	}
	static FName NAME_UALS_HookActorInterface_HAFSI_Play_AnimOut = FName(TEXT("HAFSI_Play_AnimOut"));
	void IALS_HookActorInterface::Execute_HAFSI_Play_AnimOut(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HookActorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UALS_HookActorInterface_HAFSI_Play_AnimOut);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IALS_HookActorInterface*)(O->GetNativeInterfaceAddress(UALS_HookActorInterface::StaticClass())))
		{
			I->HAFSI_Play_AnimOut_Implementation();
		}
	}
	static FName NAME_UALS_HookActorInterface_HAFSI_Set_IsUsed = FName(TEXT("HAFSI_Set_IsUsed"));
	void IALS_HookActorInterface::Execute_HAFSI_Set_IsUsed(UObject* O, bool& Updated, bool Using)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HookActorInterface::StaticClass()));
		ALS_HookActorInterface_eventHAFSI_Set_IsUsed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALS_HookActorInterface_HAFSI_Set_IsUsed);
		if (Func)
		{
			Parms.Updated=Updated;
			Parms.Using=Using;
			O->ProcessEvent(Func, &Parms);
			Updated=Parms.Updated;
		}
		else if (auto I = (IALS_HookActorInterface*)(O->GetNativeInterfaceAddress(UALS_HookActorInterface::StaticClass())))
		{
			I->HAFSI_Set_IsUsed_Implementation(Updated,Using);
		}
	}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALS_HookActorInterface, UALS_HookActorInterface::StaticClass, TEXT("UALS_HookActorInterface"), &Z_Registration_Info_UClass_UALS_HookActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALS_HookActorInterface), 1978440703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_1015418880(TEXT("/Script/HelpfulFunctions"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HookActorInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
