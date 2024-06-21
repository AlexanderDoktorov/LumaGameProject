// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/ALS_HumanAI_InterfaceCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALS_HumanAI_InterfaceCpp() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_HumanAI_InterfaceCpp();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References
	DEFINE_FUNCTION(IALS_HumanAI_InterfaceCpp::execHAI_DrawDebugTraces)
	{
		P_GET_UBOOL_REF(Z_Param_Out_DrawDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAI_DrawDebugTraces_Implementation(Z_Param_Out_DrawDebug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALS_HumanAI_InterfaceCpp::execHAI_GetDetectedEnemy)
	{
		P_GET_UBOOL_REF(Z_Param_Out_DetectedEnemy);
		P_GET_UBOOL_REF(Z_Param_Out_IsSelfEnemy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAI_GetDetectedEnemy_Implementation(Z_Param_Out_DetectedEnemy,Z_Param_Out_IsSelfEnemy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALS_HumanAI_InterfaceCpp::execHAI_GetHumanAIValues)
	{
		P_GET_UBOOL_REF(Z_Param_Out_HavePistol);
		P_GET_UBOOL_REF(Z_Param_Out_HaveRifle);
		P_GET_UBOOL_REF(Z_Param_Out_IsSiting);
		P_GET_UBOOL_REF(Z_Param_Out_IsHostage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAI_GetHumanAIValues_Implementation(Z_Param_Out_HavePistol,Z_Param_Out_HaveRifle,Z_Param_Out_IsSiting,Z_Param_Out_IsHostage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALS_HumanAI_InterfaceCpp::execHAI_GetCharacterType)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsSolider);
		P_GET_UBOOL_REF(Z_Param_Out_IsZombie);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAI_GetCharacterType_Implementation(Z_Param_Out_IsSolider,Z_Param_Out_IsZombie);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALS_HumanAI_InterfaceCpp::execHAI_GetEnemyState)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsEnemy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAI_GetEnemyState_Implementation(Z_Param_Out_IsEnemy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IALS_HumanAI_InterfaceCpp::execHAI_GetDeathState)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsDeath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HAI_GetDeathState_Implementation(Z_Param_Out_IsDeath);
		P_NATIVE_END;
	}
	struct ALS_HumanAI_InterfaceCpp_eventHAI_DrawDebugTraces_Parms
	{
		bool DrawDebug;
	};
	struct ALS_HumanAI_InterfaceCpp_eventHAI_GetCharacterType_Parms
	{
		bool IsSolider;
		bool IsZombie;
	};
	struct ALS_HumanAI_InterfaceCpp_eventHAI_GetControllerSmallValues_Parms
	{
		bool DetectedEnemy;
		float DetectedEnemyTime;
		ACharacter* EnemyActor;
	};
	struct ALS_HumanAI_InterfaceCpp_eventHAI_GetDeathState_Parms
	{
		bool IsDeath;
	};
	struct ALS_HumanAI_InterfaceCpp_eventHAI_GetDetectedEnemy_Parms
	{
		bool DetectedEnemy;
		bool IsSelfEnemy;
	};
	struct ALS_HumanAI_InterfaceCpp_eventHAI_GetEnemyState_Parms
	{
		bool IsEnemy;
	};
	struct ALS_HumanAI_InterfaceCpp_eventHAI_GetHumanAIValues_Parms
	{
		bool HavePistol;
		bool HaveRifle;
		bool IsSiting;
		bool IsHostage;
	};
	void IALS_HumanAI_InterfaceCpp::HAI_DrawDebugTraces(bool& DrawDebug)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAI_DrawDebugTraces instead.");
	}
	void IALS_HumanAI_InterfaceCpp::HAI_GetCharacterType(bool& IsSolider, bool& IsZombie)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAI_GetCharacterType instead.");
	}
	void IALS_HumanAI_InterfaceCpp::HAI_GetControllerSmallValues(bool& DetectedEnemy, float& DetectedEnemyTime, ACharacter*& EnemyActor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAI_GetControllerSmallValues instead.");
	}
	void IALS_HumanAI_InterfaceCpp::HAI_GetDeathState(bool& IsDeath)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAI_GetDeathState instead.");
	}
	void IALS_HumanAI_InterfaceCpp::HAI_GetDetectedEnemy(bool& DetectedEnemy, bool& IsSelfEnemy)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAI_GetDetectedEnemy instead.");
	}
	void IALS_HumanAI_InterfaceCpp::HAI_GetEnemyState(bool& IsEnemy)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAI_GetEnemyState instead.");
	}
	void IALS_HumanAI_InterfaceCpp::HAI_GetHumanAIValues(bool& HavePistol, bool& HaveRifle, bool& IsSiting, bool& IsHostage)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HAI_GetHumanAIValues instead.");
	}
	void UALS_HumanAI_InterfaceCpp::StaticRegisterNativesUALS_HumanAI_InterfaceCpp()
	{
		UClass* Class = UALS_HumanAI_InterfaceCpp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HAI_DrawDebugTraces", &IALS_HumanAI_InterfaceCpp::execHAI_DrawDebugTraces },
			{ "HAI_GetCharacterType", &IALS_HumanAI_InterfaceCpp::execHAI_GetCharacterType },
			{ "HAI_GetDeathState", &IALS_HumanAI_InterfaceCpp::execHAI_GetDeathState },
			{ "HAI_GetDetectedEnemy", &IALS_HumanAI_InterfaceCpp::execHAI_GetDetectedEnemy },
			{ "HAI_GetEnemyState", &IALS_HumanAI_InterfaceCpp::execHAI_GetEnemyState },
			{ "HAI_GetHumanAIValues", &IALS_HumanAI_InterfaceCpp::execHAI_GetHumanAIValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces_Statics
	{
		static void NewProp_DrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces_Statics::NewProp_DrawDebug_SetBit(void* Obj)
	{
		((ALS_HumanAI_InterfaceCpp_eventHAI_DrawDebugTraces_Parms*)Obj)->DrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_DrawDebugTraces_Parms), &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces_Statics::NewProp_DrawDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces_Statics::NewProp_DrawDebug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI States" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_InterfaceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HumanAI_InterfaceCpp, nullptr, "HAI_DrawDebugTraces", nullptr, nullptr, sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_DrawDebugTraces_Parms), Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics
	{
		static void NewProp_IsSolider_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSolider;
		static void NewProp_IsZombie_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsZombie;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::NewProp_IsSolider_SetBit(void* Obj)
	{
		((ALS_HumanAI_InterfaceCpp_eventHAI_GetCharacterType_Parms*)Obj)->IsSolider = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::NewProp_IsSolider = { "IsSolider", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetCharacterType_Parms), &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::NewProp_IsSolider_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::NewProp_IsZombie_SetBit(void* Obj)
	{
		((ALS_HumanAI_InterfaceCpp_eventHAI_GetCharacterType_Parms*)Obj)->IsZombie = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::NewProp_IsZombie = { "IsZombie", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetCharacterType_Parms), &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::NewProp_IsZombie_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::NewProp_IsSolider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::NewProp_IsZombie,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI States" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_InterfaceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HumanAI_InterfaceCpp, nullptr, "HAI_GetCharacterType", nullptr, nullptr, sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetCharacterType_Parms), Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics
	{
		static void NewProp_DetectedEnemy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DetectedEnemy;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectedEnemyTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::NewProp_DetectedEnemy_SetBit(void* Obj)
	{
		((ALS_HumanAI_InterfaceCpp_eventHAI_GetControllerSmallValues_Parms*)Obj)->DetectedEnemy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::NewProp_DetectedEnemy = { "DetectedEnemy", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetControllerSmallValues_Parms), &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::NewProp_DetectedEnemy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::NewProp_DetectedEnemyTime = { "DetectedEnemyTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_InterfaceCpp_eventHAI_GetControllerSmallValues_Parms, DetectedEnemyTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::NewProp_EnemyActor = { "EnemyActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_HumanAI_InterfaceCpp_eventHAI_GetControllerSmallValues_Parms, EnemyActor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::NewProp_DetectedEnemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::NewProp_DetectedEnemyTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::NewProp_EnemyActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI States" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_InterfaceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HumanAI_InterfaceCpp, nullptr, "HAI_GetControllerSmallValues", nullptr, nullptr, sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetControllerSmallValues_Parms), Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState_Statics
	{
		static void NewProp_IsDeath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDeath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState_Statics::NewProp_IsDeath_SetBit(void* Obj)
	{
		((ALS_HumanAI_InterfaceCpp_eventHAI_GetDeathState_Parms*)Obj)->IsDeath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState_Statics::NewProp_IsDeath = { "IsDeath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetDeathState_Parms), &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState_Statics::NewProp_IsDeath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState_Statics::NewProp_IsDeath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI States" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_InterfaceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HumanAI_InterfaceCpp, nullptr, "HAI_GetDeathState", nullptr, nullptr, sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetDeathState_Parms), Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics
	{
		static void NewProp_DetectedEnemy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DetectedEnemy;
		static void NewProp_IsSelfEnemy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSelfEnemy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::NewProp_DetectedEnemy_SetBit(void* Obj)
	{
		((ALS_HumanAI_InterfaceCpp_eventHAI_GetDetectedEnemy_Parms*)Obj)->DetectedEnemy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::NewProp_DetectedEnemy = { "DetectedEnemy", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetDetectedEnemy_Parms), &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::NewProp_DetectedEnemy_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::NewProp_IsSelfEnemy_SetBit(void* Obj)
	{
		((ALS_HumanAI_InterfaceCpp_eventHAI_GetDetectedEnemy_Parms*)Obj)->IsSelfEnemy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::NewProp_IsSelfEnemy = { "IsSelfEnemy", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetDetectedEnemy_Parms), &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::NewProp_IsSelfEnemy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::NewProp_DetectedEnemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::NewProp_IsSelfEnemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI States" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_InterfaceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HumanAI_InterfaceCpp, nullptr, "HAI_GetDetectedEnemy", nullptr, nullptr, sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetDetectedEnemy_Parms), Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState_Statics
	{
		static void NewProp_IsEnemy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEnemy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState_Statics::NewProp_IsEnemy_SetBit(void* Obj)
	{
		((ALS_HumanAI_InterfaceCpp_eventHAI_GetEnemyState_Parms*)Obj)->IsEnemy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState_Statics::NewProp_IsEnemy = { "IsEnemy", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetEnemyState_Parms), &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState_Statics::NewProp_IsEnemy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState_Statics::NewProp_IsEnemy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI States" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_InterfaceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HumanAI_InterfaceCpp, nullptr, "HAI_GetEnemyState", nullptr, nullptr, sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetEnemyState_Parms), Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics
	{
		static void NewProp_HavePistol_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HavePistol;
		static void NewProp_HaveRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveRifle;
		static void NewProp_IsSiting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSiting;
		static void NewProp_IsHostage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHostage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_HavePistol_SetBit(void* Obj)
	{
		((ALS_HumanAI_InterfaceCpp_eventHAI_GetHumanAIValues_Parms*)Obj)->HavePistol = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_HavePistol = { "HavePistol", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetHumanAIValues_Parms), &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_HavePistol_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_HaveRifle_SetBit(void* Obj)
	{
		((ALS_HumanAI_InterfaceCpp_eventHAI_GetHumanAIValues_Parms*)Obj)->HaveRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_HaveRifle = { "HaveRifle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetHumanAIValues_Parms), &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_HaveRifle_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_IsSiting_SetBit(void* Obj)
	{
		((ALS_HumanAI_InterfaceCpp_eventHAI_GetHumanAIValues_Parms*)Obj)->IsSiting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_IsSiting = { "IsSiting", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetHumanAIValues_Parms), &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_IsSiting_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_IsHostage_SetBit(void* Obj)
	{
		((ALS_HumanAI_InterfaceCpp_eventHAI_GetHumanAIValues_Parms*)Obj)->IsHostage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_IsHostage = { "IsHostage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetHumanAIValues_Parms), &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_IsHostage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_HavePistol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_HaveRifle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_IsSiting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::NewProp_IsHostage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI States" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_InterfaceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_HumanAI_InterfaceCpp, nullptr, "HAI_GetHumanAIValues", nullptr, nullptr, sizeof(ALS_HumanAI_InterfaceCpp_eventHAI_GetHumanAIValues_Parms), Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALS_HumanAI_InterfaceCpp);
	UClass* Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_NoRegister()
	{
		return UALS_HumanAI_InterfaceCpp::StaticClass();
	}
	struct Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces, "HAI_DrawDebugTraces" }, // 709681503
		{ &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType, "HAI_GetCharacterType" }, // 1868702838
		{ &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues, "HAI_GetControllerSmallValues" }, // 2371980950
		{ &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState, "HAI_GetDeathState" }, // 2299215351
		{ &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy, "HAI_GetDetectedEnemy" }, // 612816662
		{ &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState, "HAI_GetEnemyState" }, // 1569724765
		{ &Z_Construct_UFunction_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues, "HAI_GetHumanAIValues" }, // 4101281216
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ALS_HumanAI_InterfaceCpp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IALS_HumanAI_InterfaceCpp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_Statics::ClassParams = {
		&UALS_HumanAI_InterfaceCpp::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UALS_HumanAI_InterfaceCpp()
	{
		if (!Z_Registration_Info_UClass_UALS_HumanAI_InterfaceCpp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALS_HumanAI_InterfaceCpp.OuterSingleton, Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALS_HumanAI_InterfaceCpp.OuterSingleton;
	}
	template<> HELPFULFUNCTIONS_API UClass* StaticClass<UALS_HumanAI_InterfaceCpp>()
	{
		return UALS_HumanAI_InterfaceCpp::StaticClass();
	}
	UALS_HumanAI_InterfaceCpp::UALS_HumanAI_InterfaceCpp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALS_HumanAI_InterfaceCpp);
	UALS_HumanAI_InterfaceCpp::~UALS_HumanAI_InterfaceCpp() {}
	static FName NAME_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces = FName(TEXT("HAI_DrawDebugTraces"));
	void IALS_HumanAI_InterfaceCpp::Execute_HAI_DrawDebugTraces(UObject* O, bool& DrawDebug)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HumanAI_InterfaceCpp::StaticClass()));
		ALS_HumanAI_InterfaceCpp_eventHAI_DrawDebugTraces_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALS_HumanAI_InterfaceCpp_HAI_DrawDebugTraces);
		if (Func)
		{
			Parms.DrawDebug=DrawDebug;
			O->ProcessEvent(Func, &Parms);
			DrawDebug=Parms.DrawDebug;
		}
		else if (auto I = (IALS_HumanAI_InterfaceCpp*)(O->GetNativeInterfaceAddress(UALS_HumanAI_InterfaceCpp::StaticClass())))
		{
			I->HAI_DrawDebugTraces_Implementation(DrawDebug);
		}
	}
	static FName NAME_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType = FName(TEXT("HAI_GetCharacterType"));
	void IALS_HumanAI_InterfaceCpp::Execute_HAI_GetCharacterType(UObject* O, bool& IsSolider, bool& IsZombie)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HumanAI_InterfaceCpp::StaticClass()));
		ALS_HumanAI_InterfaceCpp_eventHAI_GetCharacterType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALS_HumanAI_InterfaceCpp_HAI_GetCharacterType);
		if (Func)
		{
			Parms.IsSolider=IsSolider;
			Parms.IsZombie=IsZombie;
			O->ProcessEvent(Func, &Parms);
			IsSolider=Parms.IsSolider;
			IsZombie=Parms.IsZombie;
		}
		else if (auto I = (IALS_HumanAI_InterfaceCpp*)(O->GetNativeInterfaceAddress(UALS_HumanAI_InterfaceCpp::StaticClass())))
		{
			I->HAI_GetCharacterType_Implementation(IsSolider,IsZombie);
		}
	}
	static FName NAME_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues = FName(TEXT("HAI_GetControllerSmallValues"));
	void IALS_HumanAI_InterfaceCpp::Execute_HAI_GetControllerSmallValues(UObject* O, bool& DetectedEnemy, float& DetectedEnemyTime, ACharacter*& EnemyActor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HumanAI_InterfaceCpp::StaticClass()));
		ALS_HumanAI_InterfaceCpp_eventHAI_GetControllerSmallValues_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALS_HumanAI_InterfaceCpp_HAI_GetControllerSmallValues);
		if (Func)
		{
			Parms.DetectedEnemy=DetectedEnemy;
			Parms.DetectedEnemyTime=DetectedEnemyTime;
			Parms.EnemyActor=EnemyActor;
			O->ProcessEvent(Func, &Parms);
			DetectedEnemy=Parms.DetectedEnemy;
			DetectedEnemyTime=Parms.DetectedEnemyTime;
			EnemyActor=Parms.EnemyActor;
		}
	}
	static FName NAME_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState = FName(TEXT("HAI_GetDeathState"));
	void IALS_HumanAI_InterfaceCpp::Execute_HAI_GetDeathState(UObject* O, bool& IsDeath)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HumanAI_InterfaceCpp::StaticClass()));
		ALS_HumanAI_InterfaceCpp_eventHAI_GetDeathState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALS_HumanAI_InterfaceCpp_HAI_GetDeathState);
		if (Func)
		{
			Parms.IsDeath=IsDeath;
			O->ProcessEvent(Func, &Parms);
			IsDeath=Parms.IsDeath;
		}
		else if (auto I = (IALS_HumanAI_InterfaceCpp*)(O->GetNativeInterfaceAddress(UALS_HumanAI_InterfaceCpp::StaticClass())))
		{
			I->HAI_GetDeathState_Implementation(IsDeath);
		}
	}
	static FName NAME_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy = FName(TEXT("HAI_GetDetectedEnemy"));
	void IALS_HumanAI_InterfaceCpp::Execute_HAI_GetDetectedEnemy(UObject* O, bool& DetectedEnemy, bool& IsSelfEnemy)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HumanAI_InterfaceCpp::StaticClass()));
		ALS_HumanAI_InterfaceCpp_eventHAI_GetDetectedEnemy_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALS_HumanAI_InterfaceCpp_HAI_GetDetectedEnemy);
		if (Func)
		{
			Parms.DetectedEnemy=DetectedEnemy;
			Parms.IsSelfEnemy=IsSelfEnemy;
			O->ProcessEvent(Func, &Parms);
			DetectedEnemy=Parms.DetectedEnemy;
			IsSelfEnemy=Parms.IsSelfEnemy;
		}
		else if (auto I = (IALS_HumanAI_InterfaceCpp*)(O->GetNativeInterfaceAddress(UALS_HumanAI_InterfaceCpp::StaticClass())))
		{
			I->HAI_GetDetectedEnemy_Implementation(DetectedEnemy,IsSelfEnemy);
		}
	}
	static FName NAME_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState = FName(TEXT("HAI_GetEnemyState"));
	void IALS_HumanAI_InterfaceCpp::Execute_HAI_GetEnemyState(UObject* O, bool& IsEnemy)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HumanAI_InterfaceCpp::StaticClass()));
		ALS_HumanAI_InterfaceCpp_eventHAI_GetEnemyState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALS_HumanAI_InterfaceCpp_HAI_GetEnemyState);
		if (Func)
		{
			Parms.IsEnemy=IsEnemy;
			O->ProcessEvent(Func, &Parms);
			IsEnemy=Parms.IsEnemy;
		}
		else if (auto I = (IALS_HumanAI_InterfaceCpp*)(O->GetNativeInterfaceAddress(UALS_HumanAI_InterfaceCpp::StaticClass())))
		{
			I->HAI_GetEnemyState_Implementation(IsEnemy);
		}
	}
	static FName NAME_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues = FName(TEXT("HAI_GetHumanAIValues"));
	void IALS_HumanAI_InterfaceCpp::Execute_HAI_GetHumanAIValues(UObject* O, bool& HavePistol, bool& HaveRifle, bool& IsSiting, bool& IsHostage)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UALS_HumanAI_InterfaceCpp::StaticClass()));
		ALS_HumanAI_InterfaceCpp_eventHAI_GetHumanAIValues_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UALS_HumanAI_InterfaceCpp_HAI_GetHumanAIValues);
		if (Func)
		{
			Parms.HavePistol=HavePistol;
			Parms.HaveRifle=HaveRifle;
			Parms.IsSiting=IsSiting;
			Parms.IsHostage=IsHostage;
			O->ProcessEvent(Func, &Parms);
			HavePistol=Parms.HavePistol;
			HaveRifle=Parms.HaveRifle;
			IsSiting=Parms.IsSiting;
			IsHostage=Parms.IsHostage;
		}
		else if (auto I = (IALS_HumanAI_InterfaceCpp*)(O->GetNativeInterfaceAddress(UALS_HumanAI_InterfaceCpp::StaticClass())))
		{
			I->HAI_GetHumanAIValues_Implementation(HavePistol,HaveRifle,IsSiting,IsHostage);
		}
	}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALS_HumanAI_InterfaceCpp, UALS_HumanAI_InterfaceCpp::StaticClass, TEXT("UALS_HumanAI_InterfaceCpp"), &Z_Registration_Info_UClass_UALS_HumanAI_InterfaceCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALS_HumanAI_InterfaceCpp), 138800462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_911810299(TEXT("/Script/HelpfulFunctions"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_HumanAI_InterfaceCpp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
