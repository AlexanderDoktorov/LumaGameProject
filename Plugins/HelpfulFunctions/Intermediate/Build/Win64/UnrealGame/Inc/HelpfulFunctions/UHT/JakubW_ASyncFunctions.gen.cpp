// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/JakubW_ASyncFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJakubW_ASyncFunctions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UJakubW_ASyncFunctions();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UJakubW_ASyncFunctions_NoRegister();
	HELPFULFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics
	{
		struct _Script_HelpfulFunctions_eventDelayOneFrameOutputPin_Parms
		{
			float InputFloatPlusOne;
			float InputFloatPlusTwo;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputFloatPlusOne;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputFloatPlusTwo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics::NewProp_InputFloatPlusOne = { "InputFloatPlusOne", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HelpfulFunctions_eventDelayOneFrameOutputPin_Parms, InputFloatPlusOne), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics::NewProp_InputFloatPlusTwo = { "InputFloatPlusTwo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HelpfulFunctions_eventDelayOneFrameOutputPin_Parms, InputFloatPlusTwo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics::NewProp_InputFloatPlusOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics::NewProp_InputFloatPlusTwo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JakubW_ASyncFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions, nullptr, "DelayOneFrameOutputPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics::_Script_HelpfulFunctions_eventDelayOneFrameOutputPin_Parms), Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDelayOneFrameOutputPin_DelegateWrapper(const FMulticastScriptDelegate& DelayOneFrameOutputPin, float InputFloatPlusOne, float InputFloatPlusTwo)
{
	struct _Script_HelpfulFunctions_eventDelayOneFrameOutputPin_Parms
	{
		float InputFloatPlusOne;
		float InputFloatPlusTwo;
	};
	_Script_HelpfulFunctions_eventDelayOneFrameOutputPin_Parms Parms;
	Parms.InputFloatPlusOne=InputFloatPlusOne;
	Parms.InputFloatPlusTwo=InputFloatPlusTwo;
	DelayOneFrameOutputPin.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UJakubW_ASyncFunctions::execExecuteAfterOneFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteAfterOneFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJakubW_ASyncFunctions::execWaitForOneFrame)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SomeInputVariables);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJakubW_ASyncFunctions**)Z_Param__Result=UJakubW_ASyncFunctions::WaitForOneFrame(Z_Param_WorldContextObject,Z_Param_SomeInputVariables);
		P_NATIVE_END;
	}
	void UJakubW_ASyncFunctions::StaticRegisterNativesUJakubW_ASyncFunctions()
	{
		UClass* Class = UJakubW_ASyncFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteAfterOneFrame", &UJakubW_ASyncFunctions::execExecuteAfterOneFrame },
			{ "WaitForOneFrame", &UJakubW_ASyncFunctions::execWaitForOneFrame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJakubW_ASyncFunctions_ExecuteAfterOneFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubW_ASyncFunctions_ExecuteAfterOneFrame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JakubW_ASyncFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubW_ASyncFunctions_ExecuteAfterOneFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubW_ASyncFunctions, nullptr, "ExecuteAfterOneFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubW_ASyncFunctions_ExecuteAfterOneFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubW_ASyncFunctions_ExecuteAfterOneFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubW_ASyncFunctions_ExecuteAfterOneFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubW_ASyncFunctions_ExecuteAfterOneFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics
	{
		struct JakubW_ASyncFunctions_eventWaitForOneFrame_Parms
		{
			const UObject* WorldContextObject;
			float SomeInputVariables;
			UJakubW_ASyncFunctions* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeInputVariables_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SomeInputVariables;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubW_ASyncFunctions_eventWaitForOneFrame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::NewProp_SomeInputVariables_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::NewProp_SomeInputVariables = { "SomeInputVariables", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubW_ASyncFunctions_eventWaitForOneFrame_Parms, SomeInputVariables), METADATA_PARAMS(Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::NewProp_SomeInputVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::NewProp_SomeInputVariables_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JakubW_ASyncFunctions_eventWaitForOneFrame_Parms, ReturnValue), Z_Construct_UClass_UJakubW_ASyncFunctions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::NewProp_SomeInputVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "JakubW_FunctionsLibrary| Flow Control" },
		{ "ModuleRelativePath", "Public/JakubW_ASyncFunctions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubW_ASyncFunctions, nullptr, "WaitForOneFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::JakubW_ASyncFunctions_eventWaitForOneFrame_Parms), Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJakubW_ASyncFunctions);
	UClass* Z_Construct_UClass_UJakubW_ASyncFunctions_NoRegister()
	{
		return UJakubW_ASyncFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UJakubW_ASyncFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AfterOneFrame_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_AfterOneFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJakubW_ASyncFunctions_ExecuteAfterOneFrame, "ExecuteAfterOneFrame" }, // 4103677080
		{ &Z_Construct_UFunction_UJakubW_ASyncFunctions_WaitForOneFrame, "WaitForOneFrame" }, // 1658835421
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JakubW_ASyncFunctions.h" },
		{ "ModuleRelativePath", "Public/JakubW_ASyncFunctions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::NewProp_AfterOneFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/JakubW_ASyncFunctions.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::NewProp_AfterOneFrame = { "AfterOneFrame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJakubW_ASyncFunctions, AfterOneFrame), Z_Construct_UDelegateFunction_HelpfulFunctions_DelayOneFrameOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::NewProp_AfterOneFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::NewProp_AfterOneFrame_MetaData)) }; // 1009393651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::NewProp_AfterOneFrame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJakubW_ASyncFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::ClassParams = {
		&UJakubW_ASyncFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJakubW_ASyncFunctions()
	{
		if (!Z_Registration_Info_UClass_UJakubW_ASyncFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJakubW_ASyncFunctions.OuterSingleton, Z_Construct_UClass_UJakubW_ASyncFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJakubW_ASyncFunctions.OuterSingleton;
	}
	template<> HELPFULFUNCTIONS_API UClass* StaticClass<UJakubW_ASyncFunctions>()
	{
		return UJakubW_ASyncFunctions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJakubW_ASyncFunctions);
	UJakubW_ASyncFunctions::~UJakubW_ASyncFunctions() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJakubW_ASyncFunctions, UJakubW_ASyncFunctions::StaticClass, TEXT("UJakubW_ASyncFunctions"), &Z_Registration_Info_UClass_UJakubW_ASyncFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJakubW_ASyncFunctions), 3661231747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_3254210545(TEXT("/Script/HelpfulFunctions"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JakubW_ASyncFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
