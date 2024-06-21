// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/ALS_HumanAI_ControllerCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALS_HumanAI_ControllerCpp() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AALS_HumanAI_ControllerCpp();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AALS_HumanAI_ControllerCpp_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References
	DEFINE_FUNCTION(AALS_HumanAI_ControllerCpp::execGetTheAverageValueOfSpottedEnemiesFast)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTheAverageValueOfSpottedEnemiesFast(Z_Param_InRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALS_HumanAI_ControllerCpp::execGetEnemyFromOtherAIs)
	{
		P_GET_UBOOL(Z_Param_CheckDistanceToPlayer);
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValid);
		P_GET_OBJECT_REF(ACharacter,Z_Param_Out_ReturnCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEnemyFromOtherAIs(Z_Param_CheckDistanceToPlayer,Z_Param_Out_ReturnValid,Z_Param_Out_ReturnCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALS_HumanAI_ControllerCpp::execSetFocusActorTransformFast)
	{
		P_GET_OBJECT(AActor,Z_Param_FocusActor);
		P_GET_STRUCT(FTransform,Z_Param_NewTransform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeedA);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeedB);
		P_GET_UBOOL(Z_Param_PrintInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocusActorTransformFast(Z_Param_FocusActor,Z_Param_NewTransform,Z_Param_InterpSpeedA,Z_Param_InterpSpeedB,Z_Param_PrintInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALS_HumanAI_ControllerCpp::execChooseEnemyActor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeedMultiplyDown);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeedMultiplyUp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DetectedStateTolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChooseEnemyActor(Z_Param_InterpSpeedMultiplyDown,Z_Param_InterpSpeedMultiplyUp,Z_Param_DetectedStateTolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALS_HumanAI_ControllerCpp::execFindOtherComrate)
	{
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValid);
		P_GET_TARRAY_REF(ACharacter*,Z_Param_Out_ReturnCharacters);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindOtherComrate(Z_Param_Out_ReturnValid,Z_Param_Out_ReturnCharacters,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALS_HumanAI_ControllerCpp::execUseTraceSightPercept)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UseTraceSightPercept();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALS_HumanAI_ControllerCpp::execCheckIsInFoliage)
	{
		P_GET_OBJECT(ACharacter,Z_Param_EnemyCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckIsInFoliage(Z_Param_EnemyCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALS_HumanAI_ControllerCpp::execGetBestEnemyFromSight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayerDetectionPriority);
		P_GET_UBOOL_REF(Z_Param_Out_ReturnValid);
		P_GET_OBJECT_REF(ACharacter,Z_Param_Out_ReturnCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBestEnemyFromSight(Z_Param_PlayerDetectionPriority,Z_Param_Out_ReturnValid,Z_Param_Out_ReturnCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALS_HumanAI_ControllerCpp::execSightPerceptionByTraceFast)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_HeadSocketName);
		P_GET_UBOOL_REF(Z_Param_Out_AndDetected);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_CharactersList);
		P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SightPerceptionByTraceFast(Z_Param_HeadSocketName,Z_Param_Out_AndDetected,Z_Param_Out_CharactersList,Z_Param_DebugIndex,Z_Param_MaxDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALS_HumanAI_ControllerCpp::execSightPerceptionByMeshFast)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_HeadSocketName);
		P_GET_UBOOL_REF(Z_Param_Out_AndDetected);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_CharactersList);
		P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SightPerceptionByMeshFast(Z_Param_HeadSocketName,Z_Param_Out_AndDetected,Z_Param_Out_CharactersList,Z_Param_DebugIndex,Z_Param_MaxDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AALS_HumanAI_ControllerCpp::execInterfaceTest)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Char);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InterfaceTest(Z_Param_Char);
		P_NATIVE_END;
	}
	void AALS_HumanAI_ControllerCpp::StaticRegisterNativesAALS_HumanAI_ControllerCpp()
	{
		UClass* Class = AALS_HumanAI_ControllerCpp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckIsInFoliage", &AALS_HumanAI_ControllerCpp::execCheckIsInFoliage },
			{ "ChooseEnemyActor", &AALS_HumanAI_ControllerCpp::execChooseEnemyActor },
			{ "FindOtherComrate", &AALS_HumanAI_ControllerCpp::execFindOtherComrate },
			{ "GetBestEnemyFromSight", &AALS_HumanAI_ControllerCpp::execGetBestEnemyFromSight },
			{ "GetEnemyFromOtherAIs", &AALS_HumanAI_ControllerCpp::execGetEnemyFromOtherAIs },
			{ "GetTheAverageValueOfSpottedEnemiesFast", &AALS_HumanAI_ControllerCpp::execGetTheAverageValueOfSpottedEnemiesFast },
			{ "InterfaceTest", &AALS_HumanAI_ControllerCpp::execInterfaceTest },
			{ "SetFocusActorTransformFast", &AALS_HumanAI_ControllerCpp::execSetFocusActorTransformFast },
			{ "SightPerceptionByMeshFast", &AALS_HumanAI_ControllerCpp::execSightPerceptionByMeshFast },
			{ "SightPerceptionByTraceFast", &AALS_HumanAI_ControllerCpp::execSightPerceptionByTraceFast },
			{ "UseTraceSightPercept", &AALS_HumanAI_ControllerCpp::execUseTraceSightPercept },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics
	{
		struct ALS_HumanAI_ControllerCpp_eventCheckIsInFoliage_Parms
		{
			ACharacter* EnemyCharacter;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCharacter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::NewProp_EnemyCharacter = { "EnemyCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventCheckIsInFoliage_Parms, EnemyCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALS_HumanAI_ControllerCpp_eventCheckIsInFoliage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_ControllerCpp_eventCheckIsInFoliage_Parms), &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::NewProp_EnemyCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS Human AI" },
		{ "DisplayName", "Check Enemy Is In Foliage Fast" },
		{ "Keywords", "AI" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_HumanAI_ControllerCpp, nullptr, "CheckIsInFoliage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::ALS_HumanAI_ControllerCpp_eventCheckIsInFoliage_Parms), Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics
	{
		struct ALS_HumanAI_ControllerCpp_eventChooseEnemyActor_Parms
		{
			float InterpSpeedMultiplyDown;
			float InterpSpeedMultiplyUp;
			float DetectedStateTolerance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedMultiplyDown;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedMultiplyUp;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectedStateTolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::NewProp_InterpSpeedMultiplyDown = { "InterpSpeedMultiplyDown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventChooseEnemyActor_Parms, InterpSpeedMultiplyDown), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::NewProp_InterpSpeedMultiplyUp = { "InterpSpeedMultiplyUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventChooseEnemyActor_Parms, InterpSpeedMultiplyUp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::NewProp_DetectedStateTolerance = { "DetectedStateTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventChooseEnemyActor_Parms, DetectedStateTolerance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::NewProp_InterpSpeedMultiplyDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::NewProp_InterpSpeedMultiplyUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::NewProp_DetectedStateTolerance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS Human AI" },
		{ "CPP_Default_DetectedStateTolerance", "0.900000" },
		{ "CPP_Default_InterpSpeedMultiplyDown", "1.000000" },
		{ "CPP_Default_InterpSpeedMultiplyUp", "1.000000" },
		{ "DisplayName", "Choose Enemy Actor Fast" },
		{ "Keywords", "AI" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_HumanAI_ControllerCpp, nullptr, "ChooseEnemyActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::ALS_HumanAI_ControllerCpp_eventChooseEnemyActor_Parms), Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics
	{
		struct ALS_HumanAI_ControllerCpp_eventFindOtherComrate_Parms
		{
			bool ReturnValid;
			TArray<ACharacter*> ReturnCharacters;
			float Radius;
		};
		static void NewProp_ReturnValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnCharacters_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnCharacters;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::NewProp_ReturnValid_SetBit(void* Obj)
	{
		((ALS_HumanAI_ControllerCpp_eventFindOtherComrate_Parms*)Obj)->ReturnValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::NewProp_ReturnValid = { "ReturnValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_ControllerCpp_eventFindOtherComrate_Parms), &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::NewProp_ReturnValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::NewProp_ReturnCharacters_Inner = { "ReturnCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::NewProp_ReturnCharacters = { "ReturnCharacters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventFindOtherComrate_Parms, ReturnCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventFindOtherComrate_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::NewProp_ReturnValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::NewProp_ReturnCharacters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::NewProp_ReturnCharacters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS Human AI" },
		{ "CPP_Default_Radius", "400.000000" },
		{ "DisplayName", "Find Other Comrate In Radius Fast" },
		{ "Keywords", "AI" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_HumanAI_ControllerCpp, nullptr, "FindOtherComrate", nullptr, nullptr, sizeof(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::ALS_HumanAI_ControllerCpp_eventFindOtherComrate_Parms), Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics
	{
		struct ALS_HumanAI_ControllerCpp_eventGetBestEnemyFromSight_Parms
		{
			float PlayerDetectionPriority;
			bool ReturnValid;
			ACharacter* ReturnCharacter;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerDetectionPriority;
		static void NewProp_ReturnValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::NewProp_PlayerDetectionPriority = { "PlayerDetectionPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventGetBestEnemyFromSight_Parms, PlayerDetectionPriority), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::NewProp_ReturnValid_SetBit(void* Obj)
	{
		((ALS_HumanAI_ControllerCpp_eventGetBestEnemyFromSight_Parms*)Obj)->ReturnValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::NewProp_ReturnValid = { "ReturnValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_ControllerCpp_eventGetBestEnemyFromSight_Parms), &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::NewProp_ReturnValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::NewProp_ReturnCharacter = { "ReturnCharacter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventGetBestEnemyFromSight_Parms, ReturnCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::NewProp_PlayerDetectionPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::NewProp_ReturnValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::NewProp_ReturnCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS Human AI" },
		{ "DisplayName", "Get Best Enemy From Sight" },
		{ "Keywords", "AI" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_HumanAI_ControllerCpp, nullptr, "GetBestEnemyFromSight", nullptr, nullptr, sizeof(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::ALS_HumanAI_ControllerCpp_eventGetBestEnemyFromSight_Parms), Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics
	{
		struct ALS_HumanAI_ControllerCpp_eventGetEnemyFromOtherAIs_Parms
		{
			bool CheckDistanceToPlayer;
			bool ReturnValid;
			ACharacter* ReturnCharacter;
		};
		static void NewProp_CheckDistanceToPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckDistanceToPlayer;
		static void NewProp_ReturnValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::NewProp_CheckDistanceToPlayer_SetBit(void* Obj)
	{
		((ALS_HumanAI_ControllerCpp_eventGetEnemyFromOtherAIs_Parms*)Obj)->CheckDistanceToPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::NewProp_CheckDistanceToPlayer = { "CheckDistanceToPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_ControllerCpp_eventGetEnemyFromOtherAIs_Parms), &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::NewProp_CheckDistanceToPlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::NewProp_ReturnValid_SetBit(void* Obj)
	{
		((ALS_HumanAI_ControllerCpp_eventGetEnemyFromOtherAIs_Parms*)Obj)->ReturnValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::NewProp_ReturnValid = { "ReturnValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_ControllerCpp_eventGetEnemyFromOtherAIs_Parms), &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::NewProp_ReturnValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::NewProp_ReturnCharacter = { "ReturnCharacter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventGetEnemyFromOtherAIs_Parms, ReturnCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::NewProp_CheckDistanceToPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::NewProp_ReturnValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::NewProp_ReturnCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS Human AI" },
		{ "DisplayName", "Get Solider Enemy From Other AI Fast" },
		{ "Keywords", "AI" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_HumanAI_ControllerCpp, nullptr, "GetEnemyFromOtherAIs", nullptr, nullptr, sizeof(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::ALS_HumanAI_ControllerCpp_eventGetEnemyFromOtherAIs_Parms), Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics
	{
		struct ALS_HumanAI_ControllerCpp_eventGetTheAverageValueOfSpottedEnemiesFast_Parms
		{
			float InRadius;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics::NewProp_InRadius = { "InRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventGetTheAverageValueOfSpottedEnemiesFast_Parms, InRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventGetTheAverageValueOfSpottedEnemiesFast_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics::NewProp_InRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS Human AI" },
		{ "CPP_Default_InRadius", "1000.000000" },
		{ "DisplayName", "Get The Average Value Of Spotted Enemies Fast" },
		{ "Keywords", "AI" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_HumanAI_ControllerCpp, nullptr, "GetTheAverageValueOfSpottedEnemiesFast", nullptr, nullptr, sizeof(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics::ALS_HumanAI_ControllerCpp_eventGetTheAverageValueOfSpottedEnemiesFast_Parms), Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics
	{
		struct ALS_HumanAI_ControllerCpp_eventInterfaceTest_Parms
		{
			ACharacter* Char;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Char;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::NewProp_Char = { "Char", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventInterfaceTest_Parms, Char), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALS_HumanAI_ControllerCpp_eventInterfaceTest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_ControllerCpp_eventInterfaceTest_Parms), &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::NewProp_Char,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS Human AI" },
		{ "DisplayName", "Interface Test" },
		{ "Keywords", "AI" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_HumanAI_ControllerCpp, nullptr, "InterfaceTest", nullptr, nullptr, sizeof(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::ALS_HumanAI_ControllerCpp_eventInterfaceTest_Parms), Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics
	{
		struct ALS_HumanAI_ControllerCpp_eventSetFocusActorTransformFast_Parms
		{
			AActor* FocusActor;
			FTransform NewTransform;
			float InterpSpeedA;
			float InterpSpeedB;
			bool PrintInfo;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedA;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedB;
		static void NewProp_PrintInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PrintInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::NewProp_FocusActor = { "FocusActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventSetFocusActorTransformFast_Parms, FocusActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventSetFocusActorTransformFast_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::NewProp_InterpSpeedA = { "InterpSpeedA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventSetFocusActorTransformFast_Parms, InterpSpeedA), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::NewProp_InterpSpeedB = { "InterpSpeedB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventSetFocusActorTransformFast_Parms, InterpSpeedB), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::NewProp_PrintInfo_SetBit(void* Obj)
	{
		((ALS_HumanAI_ControllerCpp_eventSetFocusActorTransformFast_Parms*)Obj)->PrintInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::NewProp_PrintInfo = { "PrintInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_ControllerCpp_eventSetFocusActorTransformFast_Parms), &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::NewProp_PrintInfo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::NewProp_FocusActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::NewProp_NewTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::NewProp_InterpSpeedA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::NewProp_InterpSpeedB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::NewProp_PrintInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS Human AI" },
		{ "CPP_Default_InterpSpeedA", "1.000000" },
		{ "CPP_Default_InterpSpeedB", "3.000000" },
		{ "CPP_Default_PrintInfo", "false" },
		{ "DisplayName", "Set Focus Actor Transform Fast" },
		{ "Keywords", "AI" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_HumanAI_ControllerCpp, nullptr, "SetFocusActorTransformFast", nullptr, nullptr, sizeof(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::ALS_HumanAI_ControllerCpp_eventSetFocusActorTransformFast_Parms), Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics
	{
		struct ALS_HumanAI_ControllerCpp_eventSightPerceptionByMeshFast_Parms
		{
			FName HeadSocketName;
			bool AndDetected;
			TArray<AActor*> CharactersList;
			int32 DebugIndex;
			float MaxDistance;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_HeadSocketName;
		static void NewProp_AndDetected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AndDetected;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharactersList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CharactersList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DebugIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_HeadSocketName = { "HeadSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventSightPerceptionByMeshFast_Parms, HeadSocketName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_AndDetected_SetBit(void* Obj)
	{
		((ALS_HumanAI_ControllerCpp_eventSightPerceptionByMeshFast_Parms*)Obj)->AndDetected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_AndDetected = { "AndDetected", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_ControllerCpp_eventSightPerceptionByMeshFast_Parms), &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_AndDetected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_CharactersList_Inner = { "CharactersList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_CharactersList = { "CharactersList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventSightPerceptionByMeshFast_Parms, CharactersList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventSightPerceptionByMeshFast_Parms, DebugIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventSightPerceptionByMeshFast_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_HeadSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_AndDetected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_CharactersList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_CharactersList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_DebugIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::NewProp_MaxDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS Human AI" },
		{ "CPP_Default_MaxDistance", "5000.000000" },
		{ "DisplayName", "Sight Perception By Static Mesh" },
		{ "Keywords", "AI" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_HumanAI_ControllerCpp, nullptr, "SightPerceptionByMeshFast", nullptr, nullptr, sizeof(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::ALS_HumanAI_ControllerCpp_eventSightPerceptionByMeshFast_Parms), Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics
	{
		struct ALS_HumanAI_ControllerCpp_eventSightPerceptionByTraceFast_Parms
		{
			FName HeadSocketName;
			bool AndDetected;
			TArray<AActor*> CharactersList;
			int32 DebugIndex;
			float MaxDistance;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_HeadSocketName;
		static void NewProp_AndDetected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AndDetected;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharactersList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CharactersList;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DebugIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_HeadSocketName = { "HeadSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventSightPerceptionByTraceFast_Parms, HeadSocketName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_AndDetected_SetBit(void* Obj)
	{
		((ALS_HumanAI_ControllerCpp_eventSightPerceptionByTraceFast_Parms*)Obj)->AndDetected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_AndDetected = { "AndDetected", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_ControllerCpp_eventSightPerceptionByTraceFast_Parms), &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_AndDetected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_CharactersList_Inner = { "CharactersList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_CharactersList = { "CharactersList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventSightPerceptionByTraceFast_Parms, CharactersList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventSightPerceptionByTraceFast_Parms, DebugIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_ControllerCpp_eventSightPerceptionByTraceFast_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_HeadSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_AndDetected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_CharactersList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_CharactersList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_DebugIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::NewProp_MaxDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS Human AI" },
		{ "CPP_Default_MaxDistance", "1800.000000" },
		{ "DisplayName", "Sight Perception By Trace Fast" },
		{ "Keywords", "AI" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_HumanAI_ControllerCpp, nullptr, "SightPerceptionByTraceFast", nullptr, nullptr, sizeof(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::ALS_HumanAI_ControllerCpp_eventSightPerceptionByTraceFast_Parms), Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics
	{
		struct ALS_HumanAI_ControllerCpp_eventUseTraceSightPercept_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ALS_HumanAI_ControllerCpp_eventUseTraceSightPercept_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_ControllerCpp_eventUseTraceSightPercept_Parms), &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics::Function_MetaDataParams[] = {
		{ "Category", "ALS Human AI" },
		{ "DisplayName", "Use Trace Sight Perception Fast" },
		{ "Keywords", "AI" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_HumanAI_ControllerCpp, nullptr, "UseTraceSightPercept", nullptr, nullptr, sizeof(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics::ALS_HumanAI_ControllerCpp_eventUseTraceSightPercept_Parms), Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AALS_HumanAI_ControllerCpp);
	UClass* Z_Construct_UClass_AALS_HumanAI_ControllerCpp_NoRegister()
	{
		return AALS_HumanAI_ControllerCpp::StaticClass();
	}
	struct Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TracePerceptionEnemyValidC_MetaData[];
#endif
		static void NewProp_TracePerceptionEnemyValidC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TracePerceptionEnemyValidC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectedEnemyC_MetaData[];
#endif
		static void NewProp_DetectedEnemyC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DetectedEnemyC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyFromTraceC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyFromTraceC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyFromPerceptionC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyFromPerceptionC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetEnemyActorC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEnemyActorC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisionStaticMeshC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VisionStaticMeshC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightComponentC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SightComponentC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODsStateIndexC_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LODsStateIndexC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackStateIndexC_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AttackStateIndexC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatModeTimeC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CombatModeTimeC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteligenceC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteligenceC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectedEnemyTimeC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectedEnemyTimeC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationModeIndexC_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RotationModeIndexC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionModeIndexC_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LocomotionModeIndexC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageChannelIndexC_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FoliageChannelIndexC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetControlRotationC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetControlRotationC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_CheckIsInFoliage, "CheckIsInFoliage" }, // 3449881335
		{ &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_ChooseEnemyActor, "ChooseEnemyActor" }, // 3841144438
		{ &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_FindOtherComrate, "FindOtherComrate" }, // 1399804337
		{ &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetBestEnemyFromSight, "GetBestEnemyFromSight" }, // 3039223979
		{ &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetEnemyFromOtherAIs, "GetEnemyFromOtherAIs" }, // 1030802240
		{ &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_GetTheAverageValueOfSpottedEnemiesFast, "GetTheAverageValueOfSpottedEnemiesFast" }, // 520269874
		{ &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_InterfaceTest, "InterfaceTest" }, // 616364015
		{ &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SetFocusActorTransformFast, "SetFocusActorTransformFast" }, // 3324316865
		{ &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByMeshFast, "SightPerceptionByMeshFast" }, // 3004467078
		{ &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_SightPerceptionByTraceFast, "SightPerceptionByTraceFast" }, // 1665475594
		{ &Z_Construct_UFunction_AALS_HumanAI_ControllerCpp_UseTraceSightPercept, "UseTraceSightPercept" }, // 3458785568
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ALS_HumanAI_ControllerCpp.h" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TracePerceptionEnemyValidC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "Comment", "// Create Essential Variables\n" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
		{ "ToolTip", "Create Essential Variables" },
	};
#endif
	void Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TracePerceptionEnemyValidC_SetBit(void* Obj)
	{
		((AALS_HumanAI_ControllerCpp*)Obj)->TracePerceptionEnemyValidC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TracePerceptionEnemyValidC = { "TracePerceptionEnemyValidC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AALS_HumanAI_ControllerCpp), &Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TracePerceptionEnemyValidC_SetBit, METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TracePerceptionEnemyValidC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TracePerceptionEnemyValidC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_DetectedEnemyC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	void Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_DetectedEnemyC_SetBit(void* Obj)
	{
		((AALS_HumanAI_ControllerCpp*)Obj)->DetectedEnemyC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_DetectedEnemyC = { "DetectedEnemyC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AALS_HumanAI_ControllerCpp), &Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_DetectedEnemyC_SetBit, METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_DetectedEnemyC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_DetectedEnemyC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_EnemyFromTraceC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_EnemyFromTraceC = { "EnemyFromTraceC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, EnemyFromTraceC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_EnemyFromTraceC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_EnemyFromTraceC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_EnemyFromPerceptionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_EnemyFromPerceptionC = { "EnemyFromPerceptionC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, EnemyFromPerceptionC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_EnemyFromPerceptionC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_EnemyFromPerceptionC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TargetEnemyActorC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TargetEnemyActorC = { "TargetEnemyActorC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, TargetEnemyActorC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TargetEnemyActorC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TargetEnemyActorC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_VisionStaticMeshC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_VisionStaticMeshC = { "VisionStaticMeshC", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, VisionStaticMeshC), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_VisionStaticMeshC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_VisionStaticMeshC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_SightComponentC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_SightComponentC = { "SightComponentC", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, SightComponentC), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_SightComponentC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_SightComponentC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_LODsStateIndexC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_LODsStateIndexC = { "LODsStateIndexC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, LODsStateIndexC), METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_LODsStateIndexC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_LODsStateIndexC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_AttackStateIndexC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_AttackStateIndexC = { "AttackStateIndexC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, AttackStateIndexC), METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_AttackStateIndexC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_AttackStateIndexC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_CombatModeTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_CombatModeTimeC = { "CombatModeTimeC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, CombatModeTimeC), METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_CombatModeTimeC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_CombatModeTimeC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_InteligenceC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_InteligenceC = { "InteligenceC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, InteligenceC), METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_InteligenceC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_InteligenceC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_DetectedEnemyTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_DetectedEnemyTimeC = { "DetectedEnemyTimeC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, DetectedEnemyTimeC), METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_DetectedEnemyTimeC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_DetectedEnemyTimeC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_RotationModeIndexC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_RotationModeIndexC = { "RotationModeIndexC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, RotationModeIndexC), METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_RotationModeIndexC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_RotationModeIndexC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_LocomotionModeIndexC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_LocomotionModeIndexC = { "LocomotionModeIndexC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, LocomotionModeIndexC), METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_LocomotionModeIndexC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_LocomotionModeIndexC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_FoliageChannelIndexC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_FoliageChannelIndexC = { "FoliageChannelIndexC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, FoliageChannelIndexC), METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_FoliageChannelIndexC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_FoliageChannelIndexC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TargetControlRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_HumanAI_ControllerCpp" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_ControllerCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TargetControlRotationC = { "TargetControlRotationC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AALS_HumanAI_ControllerCpp, TargetControlRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TargetControlRotationC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TargetControlRotationC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TracePerceptionEnemyValidC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_DetectedEnemyC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_EnemyFromTraceC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_EnemyFromPerceptionC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TargetEnemyActorC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_VisionStaticMeshC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_SightComponentC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_LODsStateIndexC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_AttackStateIndexC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_CombatModeTimeC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_InteligenceC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_DetectedEnemyTimeC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_RotationModeIndexC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_LocomotionModeIndexC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_FoliageChannelIndexC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::NewProp_TargetControlRotationC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AALS_HumanAI_ControllerCpp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::ClassParams = {
		&AALS_HumanAI_ControllerCpp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AALS_HumanAI_ControllerCpp()
	{
		if (!Z_Registration_Info_UClass_AALS_HumanAI_ControllerCpp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AALS_HumanAI_ControllerCpp.OuterSingleton, Z_Construct_UClass_AALS_HumanAI_ControllerCpp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AALS_HumanAI_ControllerCpp.OuterSingleton;
	}
	template<> HELPFULFUNCTIONS_API UClass* StaticClass<AALS_HumanAI_ControllerCpp>()
	{
		return AALS_HumanAI_ControllerCpp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AALS_HumanAI_ControllerCpp);
	AALS_HumanAI_ControllerCpp::~AALS_HumanAI_ControllerCpp() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AALS_HumanAI_ControllerCpp, AALS_HumanAI_ControllerCpp::StaticClass, TEXT("AALS_HumanAI_ControllerCpp"), &Z_Registration_Info_UClass_AALS_HumanAI_ControllerCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AALS_HumanAI_ControllerCpp), 1353641627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_2135050256(TEXT("/Script/HelpfulFunctions"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_ControllerCpp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
