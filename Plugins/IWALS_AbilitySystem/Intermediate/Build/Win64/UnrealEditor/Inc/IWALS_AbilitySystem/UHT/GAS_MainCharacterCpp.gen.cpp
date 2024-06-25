// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/GAS_MainCharacterCpp.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAS_MainCharacterCpp() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_AGAS_MainCharacterCpp();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_AGAS_MainCharacterCpp_NoRegister();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_BaseAttributeSet_NoRegister();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_GameplayAbilitySet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References
	DEFINE_FUNCTION(AGAS_MainCharacterCpp::execTryCreateInputsGAS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryCreateInputsGAS();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGAS_MainCharacterCpp::execSwitchOnOwnedTagsWithIgnore)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewState);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_DoNotEdit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchOnOwnedTagsWithIgnore(Z_Param_Out_NewState,Z_Param_Out_DoNotEdit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGAS_MainCharacterCpp::execSwitchOnOwnedTags)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchOnOwnedTags(Z_Param_Out_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGAS_MainCharacterCpp::execIsTagLeaf)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTagLeaf(Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGAS_MainCharacterCpp::execGetSubTag)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_PROPERTY(FIntProperty,Z_Param_DesiredDepth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSubTag(Z_Param_Out_Tag,Z_Param_DesiredDepth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGAS_MainCharacterCpp::execConvertLiteralNameToTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->ConvertLiteralNameToTag(Z_Param_TagName);
		P_NATIVE_END;
	}
	void AGAS_MainCharacterCpp::StaticRegisterNativesAGAS_MainCharacterCpp()
	{
		UClass* Class = AGAS_MainCharacterCpp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertLiteralNameToTag", &AGAS_MainCharacterCpp::execConvertLiteralNameToTag },
			{ "GetSubTag", &AGAS_MainCharacterCpp::execGetSubTag },
			{ "IsTagLeaf", &AGAS_MainCharacterCpp::execIsTagLeaf },
			{ "SwitchOnOwnedTags", &AGAS_MainCharacterCpp::execSwitchOnOwnedTags },
			{ "SwitchOnOwnedTagsWithIgnore", &AGAS_MainCharacterCpp::execSwitchOnOwnedTagsWithIgnore },
			{ "TryCreateInputsGAS", &AGAS_MainCharacterCpp::execTryCreateInputsGAS },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics
	{
		struct GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms
		{
			FName TagName;
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms, TagName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::NewProp_TagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "DisplayName", "Convert Literal Name To Tag" },
		{ "Keywords", "Gameplay Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "ConvertLiteralNameToTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::GAS_MainCharacterCpp_eventConvertLiteralNameToTag_Parms), Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics
	{
		struct GAS_MainCharacterCpp_eventGetSubTag_Parms
		{
			FGameplayTag Tag;
			int32 DesiredDepth;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredDepth;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetSubTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_DesiredDepth = { "DesiredDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetSubTag_Parms, DesiredDepth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GAS_MainCharacterCpp_eventGetSubTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_DesiredDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "DisplayName", "Get Sub Tag" },
		{ "Keywords", "Gameplay Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "GetSubTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::GAS_MainCharacterCpp_eventGetSubTag_Parms), Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics
	{
		struct GAS_MainCharacterCpp_eventIsTagLeaf_Parms
		{
			FGameplayTag Tag;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GAS_MainCharacterCpp_eventIsTagLeaf_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	void Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GAS_MainCharacterCpp_eventIsTagLeaf_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventIsTagLeaf_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "DisplayName", "Is Tag Leaf" },
		{ "Keywords", "Gameplay Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "IsTagLeaf", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::GAS_MainCharacterCpp_eventIsTagLeaf_Parms), Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics
	{
		struct GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms
		{
			FGameplayTag NewState;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms, NewState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_NewState_MetaData)) }; // 1225434376
	void Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_NewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "DisplayName", "Switch On Owned Tags" },
		{ "Keywords", "Gameplay Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "SwitchOnOwnedTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::GAS_MainCharacterCpp_eventSwitchOnOwnedTags_Parms), Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics
	{
		struct GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms
		{
			FGameplayTag NewState;
			FGameplayTagContainer DoNotEdit;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoNotEdit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoNotEdit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms, NewState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_NewState_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_DoNotEdit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_DoNotEdit = { "DoNotEdit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms, DoNotEdit), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_DoNotEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_DoNotEdit_MetaData)) }; // 3057219007
	void Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms), &Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_NewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_DoNotEdit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "DisplayName", "Switch On Owned Tags With Ignore" },
		{ "Keywords", "Gameplay Tag" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "SwitchOnOwnedTagsWithIgnore", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::GAS_MainCharacterCpp_eventSwitchOnOwnedTagsWithIgnore_Parms), Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "DisplayName", "Try Create Inputs Binds For GAS" },
		{ "Keywords", "Inputs Player" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGAS_MainCharacterCpp, nullptr, "TryCreateInputsGAS", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAS_MainCharacterCpp);
	UClass* Z_Construct_UClass_AGAS_MainCharacterCpp_NoRegister()
	{
		return AGAS_MainCharacterCpp::StaticClass();
	}
	struct Z_Construct_UClass_AGAS_MainCharacterCpp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMovingC_MetaData[];
#endif
		static void NewProp_IsMovingC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMovingC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasMovementInputC_MetaData[];
#endif
		static void NewProp_HasMovementInputC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasMovementInputC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStartedMovementOnTargetC_MetaData[];
#endif
		static void NewProp_IsStartedMovementOnTargetC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStartedMovementOnTargetC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWithPropC_MetaData[];
#endif
		static void NewProp_InteractionWithPropC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InteractionWithPropC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsLayBackC_MetaData[];
#endif
		static void NewProp_IsLayBackC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLayBackC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollOnGroundC_MetaData[];
#endif
		static void NewProp_RagdollOnGroundC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RagdollOnGroundC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollFaceUpC_MetaData[];
#endif
		static void NewProp_RagdollFaceUpC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RagdollFaceUpC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeAcceleractionC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeAcceleractionC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousVelocityC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousVelocityC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastRagdollVelocityC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastRagdollVelocityC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementInputAmountC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementInputAmountC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeedDifferenceC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeedDifferenceC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRateC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRateC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousAimYawC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousAimYawC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitiesData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributeEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributeEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_ConvertLiteralNameToTag, "ConvertLiteralNameToTag" }, // 3599006595
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_GetSubTag, "GetSubTag" }, // 3152098124
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_IsTagLeaf, "IsTagLeaf" }, // 2959495166
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTags, "SwitchOnOwnedTags" }, // 2053334291
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_SwitchOnOwnedTagsWithIgnore, "SwitchOnOwnedTagsWithIgnore" }, // 1033617953
		{ &Z_Construct_UFunction_AGAS_MainCharacterCpp_TryCreateInputsGAS, "TryCreateInputsGAS" }, // 1780420672
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GAS_MainCharacterCpp.h" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "Comment", "//Define Base Variables For ALS Character\n" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
		{ "ToolTip", "Define Base Variables For ALS Character" },
	};
#endif
	void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC_SetBit(void* Obj)
	{
		((AGAS_MainCharacterCpp*)Obj)->IsMovingC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC = { "IsMovingC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC_SetBit(void* Obj)
	{
		((AGAS_MainCharacterCpp*)Obj)->HasMovementInputC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC = { "HasMovementInputC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC_SetBit(void* Obj)
	{
		((AGAS_MainCharacterCpp*)Obj)->IsStartedMovementOnTargetC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC = { "IsStartedMovementOnTargetC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "DisplayName", "Start Interaction With Dynamic Prop C" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC_SetBit(void* Obj)
	{
		((AGAS_MainCharacterCpp*)Obj)->InteractionWithPropC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC = { "InteractionWithPropC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC_SetBit(void* Obj)
	{
		((AGAS_MainCharacterCpp*)Obj)->IsLayBackC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC = { "IsLayBackC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Ragdoll System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC_SetBit(void* Obj)
	{
		((AGAS_MainCharacterCpp*)Obj)->RagdollOnGroundC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC = { "RagdollOnGroundC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Ragdoll System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	void Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC_SetBit(void* Obj)
	{
		((AGAS_MainCharacterCpp*)Obj)->RagdollFaceUpC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC = { "RagdollFaceUpC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGAS_MainCharacterCpp), &Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AccelerationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AccelerationC = { "AccelerationC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, AccelerationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AccelerationC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AccelerationC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RelativeAcceleractionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RelativeAcceleractionC = { "RelativeAcceleractionC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, RelativeAcceleractionC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RelativeAcceleractionC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RelativeAcceleractionC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Cached Variables" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousVelocityC = { "PreviousVelocityC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, PreviousVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousVelocityC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousVelocityC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastRagdollVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Ragdoll System" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastRagdollVelocityC = { "LastRagdollVelocityC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, LastRagdollVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastRagdollVelocityC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastRagdollVelocityC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_SpeedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_SpeedC = { "SpeedC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, SpeedC), METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_SpeedC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_SpeedC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementInputAmountC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementInputAmountC = { "MovementInputAmountC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, MovementInputAmountC), METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementInputAmountC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementInputAmountC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementSpeedDifferenceC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementSpeedDifferenceC = { "MovementSpeedDifferenceC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, MovementSpeedDifferenceC), METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementSpeedDifferenceC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementSpeedDifferenceC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AimYawRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Information" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AimYawRateC = { "AimYawRateC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, AimYawRateC), METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AimYawRateC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AimYawRateC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousAimYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Cached Variables" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousAimYawC = { "PreviousAimYawC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, PreviousAimYawC), METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousAimYawC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousAimYawC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilityHandle_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Cached Variables" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilityHandle = { "AbilityHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, AbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilityHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilityHandle_MetaData)) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS_MainCharacterCpp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitiesData_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitiesData = { "AbilitiesData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, AbilitiesData), Z_Construct_UClass_UIWALS_GameplayAbilitySet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitiesData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitiesData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_DefaultAttributeEffect_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_DefaultAttributeEffect = { "DefaultAttributeEffect", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, DefaultAttributeEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_DefaultAttributeEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_DefaultAttributeEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_Attributes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GAS_MainCharacterCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGAS_MainCharacterCpp, Attributes), Z_Construct_UClass_UIWALS_BaseAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_Attributes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsMovingC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_HasMovementInputC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsStartedMovementOnTargetC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_InteractionWithPropC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_IsLayBackC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollOnGroundC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RagdollFaceUpC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AccelerationC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_RelativeAcceleractionC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousVelocityC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_LastRagdollVelocityC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_SpeedC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementInputAmountC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_MovementSpeedDifferenceC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AimYawRateC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_PreviousAimYawC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilityHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_AbilitiesData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_DefaultAttributeEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::NewProp_Attributes,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGAS_MainCharacterCpp, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAS_MainCharacterCpp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::ClassParams = {
		&AGAS_MainCharacterCpp::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGAS_MainCharacterCpp()
	{
		if (!Z_Registration_Info_UClass_AGAS_MainCharacterCpp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAS_MainCharacterCpp.OuterSingleton, Z_Construct_UClass_AGAS_MainCharacterCpp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGAS_MainCharacterCpp.OuterSingleton;
	}
	template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<AGAS_MainCharacterCpp>()
	{
		return AGAS_MainCharacterCpp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGAS_MainCharacterCpp);
	AGAS_MainCharacterCpp::~AGAS_MainCharacterCpp() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGAS_MainCharacterCpp, AGAS_MainCharacterCpp::StaticClass, TEXT("AGAS_MainCharacterCpp"), &Z_Registration_Info_UClass_AGAS_MainCharacterCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAS_MainCharacterCpp), 2524521756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_3041185473(TEXT("/Script/IWALS_AbilitySystem"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
