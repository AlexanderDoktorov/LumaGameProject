// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/ALS_DamageConfigData.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALS_DamageConfigData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_DamageConfigData();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_DamageConfigData_NoRegister();
	HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType();
	HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FBoneAndWeight();
	UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneAndWeight;
class UScriptStruct* FBoneAndWeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneAndWeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneAndWeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneAndWeight, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("BoneAndWeight"));
	}
	return Z_Registration_Info_UScriptStruct_BoneAndWeight.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FBoneAndWeight>()
{
	return FBoneAndWeight::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoneAndWeight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAndWeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneAndWeight>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "BoneAndWeight" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneAndWeight, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "BoneAndWeight" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneAndWeight, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneAndWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneAndWeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
		nullptr,
		&NewStructOps,
		"BoneAndWeight",
		sizeof(FBoneAndWeight),
		alignof(FBoneAndWeight),
		Z_Construct_UScriptStruct_FBoneAndWeight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAndWeight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAndWeight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAndWeight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneAndWeight()
	{
		if (!Z_Registration_Info_UScriptStruct_BoneAndWeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneAndWeight.InnerSingleton, Z_Construct_UScriptStruct_FBoneAndWeight_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoneAndWeight.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECALS_WeaponType;
	static UEnum* ECALS_WeaponType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECALS_WeaponType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECALS_WeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("ECALS_WeaponType"));
		}
		return Z_Registration_Info_UEnum_ECALS_WeaponType.OuterSingleton;
	}
	template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<ECALS_WeaponType>()
	{
		return ECALS_WeaponType_StaticEnum();
	}
	struct Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::Enumerators[] = {
		{ "ECALS_WeaponType::None", (int64)ECALS_WeaponType::None },
		{ "ECALS_WeaponType::Rifle", (int64)ECALS_WeaponType::Rifle },
		{ "ECALS_WeaponType::Pistol", (int64)ECALS_WeaponType::Pistol },
		{ "ECALS_WeaponType::Bow", (int64)ECALS_WeaponType::Bow },
		{ "ECALS_WeaponType::Knife", (int64)ECALS_WeaponType::Knife },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bow.DisplayName", "Bow" },
		{ "Bow.Name", "ECALS_WeaponType::Bow" },
		{ "Knife.DisplayName", "Knife" },
		{ "Knife.Name", "ECALS_WeaponType::Knife" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ECALS_WeaponType::None" },
		{ "Pistol.DisplayName", "Pistol" },
		{ "Pistol.Name", "ECALS_WeaponType::Pistol" },
		{ "Rifle.DisplayName", "Rifle" },
		{ "Rifle.Name", "ECALS_WeaponType::Rifle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
		nullptr,
		"ECALS_WeaponType",
		"ECALS_WeaponType",
		Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType()
	{
		if (!Z_Registration_Info_UEnum_ECALS_WeaponType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECALS_WeaponType.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECALS_WeaponType.InnerSingleton;
	}
	DEFINE_FUNCTION(UALS_DamageConfigData::execGetWeightPerBoneC)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_TARRAY(FBoneAndWeight,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UALS_DamageConfigData::GetWeightPerBoneC(Z_Param_BoneName,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UALS_DamageConfigData::execGetScalingCurveValueC)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentHealthPoints);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxHealthPoints);
		P_GET_STRUCT(FRuntimeFloatCurve,Z_Param_Curve1);
		P_GET_STRUCT(FRuntimeFloatCurve,Z_Param_CurveRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UALS_DamageConfigData::GetScalingCurveValueC(Z_Param_CurrentHealthPoints,Z_Param_MaxHealthPoints,Z_Param_Curve1,Z_Param_CurveRef);
		P_NATIVE_END;
	}
	void UALS_DamageConfigData::StaticRegisterNativesUALS_DamageConfigData()
	{
		UClass* Class = UALS_DamageConfigData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScalingCurveValueC", &UALS_DamageConfigData::execGetScalingCurveValueC },
			{ "GetWeightPerBoneC", &UALS_DamageConfigData::execGetWeightPerBoneC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics
	{
		struct ALS_DamageConfigData_eventGetScalingCurveValueC_Parms
		{
			float CurrentHealthPoints;
			float MaxHealthPoints;
			FRuntimeFloatCurve Curve1;
			FRuntimeFloatCurve CurveRef;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealthPoints;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealthPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveRef;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_CurrentHealthPoints = { "CurrentHealthPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_DamageConfigData_eventGetScalingCurveValueC_Parms, CurrentHealthPoints), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_MaxHealthPoints = { "MaxHealthPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_DamageConfigData_eventGetScalingCurveValueC_Parms, MaxHealthPoints), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_Curve1 = { "Curve1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_DamageConfigData_eventGetScalingCurveValueC_Parms, Curve1), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(nullptr, 0) }; // 1477693291
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_CurveRef = { "CurveRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_DamageConfigData_eventGetScalingCurveValueC_Parms, CurveRef), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(nullptr, 0) }; // 1477693291
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_DamageConfigData_eventGetScalingCurveValueC_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_CurrentHealthPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_MaxHealthPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_Curve1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_CurveRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage System" },
		{ "DisplayName", "Get Scaling Curve Value" },
		{ "Keywords", "Damage System" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_DamageConfigData, nullptr, "GetScalingCurveValueC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::ALS_DamageConfigData_eventGetScalingCurveValueC_Parms), Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics
	{
		struct ALS_DamageConfigData_eventGetWeightPerBoneC_Parms
		{
			FName BoneName;
			TArray<FBoneAndWeight> Data;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_DamageConfigData_eventGetWeightPerBoneC_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneAndWeight, METADATA_PARAMS(nullptr, 0) }; // 1605874907
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_DamageConfigData_eventGetWeightPerBoneC_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1605874907
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALS_DamageConfigData_eventGetWeightPerBoneC_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage System" },
		{ "DisplayName", "Get Weight Per Bone" },
		{ "Keywords", "Damage System" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_DamageConfigData, nullptr, "GetWeightPerBoneC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::ALS_DamageConfigData_eventGetWeightPerBoneC_Parms), Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALS_DamageConfigData);
	UClass* Z_Construct_UClass_UALS_DamageConfigData_NoRegister()
	{
		return UALS_DamageConfigData::StaticClass();
	}
	struct Z_Construct_UClass_UALS_DamageConfigData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceiveDamageScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReceiveDamageScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmorValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmorValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalingCurve;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeightsPerBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightsPerBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightsPerBones;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightPerWeapon_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeightPerWeapon_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeightPerWeapon_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightPerWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WeightPerWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageEquation_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DamageEquation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UALS_DamageConfigData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UALS_DamageConfigData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UALS_DamageConfigData_GetScalingCurveValueC, "GetScalingCurveValueC" }, // 3746012780
		{ &Z_Construct_UFunction_UALS_DamageConfigData_GetWeightPerBoneC, "GetWeightPerBoneC" }, // 222615472
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_DamageConfigData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ALS_DamageConfigData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Damage Config" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Default max Health points for character */" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
		{ "ToolTip", "Default max Health points for character" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UALS_DamageConfigData, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReceiveDamageScale_MetaData[] = {
		{ "Category", "Damage Config" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Allows you to introduce a constant scaling of RECEIVED damage */" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
		{ "ToolTip", "Allows you to introduce a constant scaling of RECEIVED damage" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReceiveDamageScale = { "ReceiveDamageScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UALS_DamageConfigData, ReceiveDamageScale), METADATA_PARAMS(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReceiveDamageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReceiveDamageScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ArmorValue_MetaData[] = {
		{ "Category", "Damage Config" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** It results in the final damage value being reduced by an amount associated with the armor */" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
		{ "ToolTip", "It results in the final damage value being reduced by an amount associated with the armor" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ArmorValue = { "ArmorValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UALS_DamageConfigData, ArmorValue), METADATA_PARAMS(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ArmorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ArmorValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ScalingCurve_MetaData[] = {
		{ "Category", "Damage Config" },
		{ "Comment", "/**  Is used to introduce non-linear scaling of the damage value. The range on the X and Y axis should always be between 0 and 1. \nThe X axis represents the mapped minimum and maximum health values. We set the scaling value on the Y axis. \nNote: a reference curve is used to calculate the final value, which is always a function of Y = X. */" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
		{ "ToolTip", "Is used to introduce non-linear scaling of the damage value. The range on the X and Y axis should always be between 0 and 1.\nThe X axis represents the mapped minimum and maximum health values. We set the scaling value on the Y axis.\nNote: a reference curve is used to calculate the final value, which is always a function of Y = X." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ScalingCurve = { "ScalingCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UALS_DamageConfigData, ScalingCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ScalingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ScalingCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightsPerBones_Inner = { "WeightsPerBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneAndWeight, METADATA_PARAMS(nullptr, 0) }; // 1605874907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightsPerBones_MetaData[] = {
		{ "Category", "Damage Config" },
		{ "Comment", "/* Sets the scaling of the 'Input Damage' value depending on the bone hit.*/" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
		{ "ToolTip", "Sets the scaling of the 'Input Damage' value depending on the bone hit." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightsPerBones = { "WeightsPerBones", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UALS_DamageConfigData, WeightsPerBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightsPerBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightsPerBones_MetaData)) }; // 1605874907
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_ValueProp = { "WeightPerWeapon", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_Key_KeyProp = { "WeightPerWeapon_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_HelpfulFunctions_ECALS_WeaponType, METADATA_PARAMS(nullptr, 0) }; // 86806322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_MetaData[] = {
		{ "Category", "Damage Config" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon = { "WeightPerWeapon", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UALS_DamageConfigData, WeightPerWeapon), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_MetaData)) }; // 86806322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReferenceCurve_MetaData[] = {
		{ "Category", "Read Only" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReferenceCurve = { "ReferenceCurve", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UALS_DamageConfigData, ReferenceCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReferenceCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReferenceCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_DamageEquation_MetaData[] = {
		{ "Category", "Read Only" },
		{ "ModuleRelativePath", "Public/ALS_DamageConfigData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_DamageEquation = { "DamageEquation", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UALS_DamageConfigData, DamageEquation), METADATA_PARAMS(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_DamageEquation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_DamageEquation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UALS_DamageConfigData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReceiveDamageScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ArmorValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ScalingCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightsPerBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightsPerBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_WeightPerWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_ReferenceCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UALS_DamageConfigData_Statics::NewProp_DamageEquation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UALS_DamageConfigData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UALS_DamageConfigData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UALS_DamageConfigData_Statics::ClassParams = {
		&UALS_DamageConfigData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UALS_DamageConfigData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UALS_DamageConfigData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UALS_DamageConfigData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UALS_DamageConfigData()
	{
		if (!Z_Registration_Info_UClass_UALS_DamageConfigData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALS_DamageConfigData.OuterSingleton, Z_Construct_UClass_UALS_DamageConfigData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UALS_DamageConfigData.OuterSingleton;
	}
	template<> HELPFULFUNCTIONS_API UClass* StaticClass<UALS_DamageConfigData>()
	{
		return UALS_DamageConfigData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UALS_DamageConfigData);
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::EnumInfo[] = {
		{ ECALS_WeaponType_StaticEnum, TEXT("ECALS_WeaponType"), &Z_Registration_Info_UEnum_ECALS_WeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 86806322U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::ScriptStructInfo[] = {
		{ FBoneAndWeight::StaticStruct, Z_Construct_UScriptStruct_FBoneAndWeight_Statics::NewStructOps, TEXT("BoneAndWeight"), &Z_Registration_Info_UScriptStruct_BoneAndWeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneAndWeight), 1605874907U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UALS_DamageConfigData, UALS_DamageConfigData::StaticClass, TEXT("UALS_DamageConfigData"), &Z_Registration_Info_UClass_UALS_DamageConfigData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALS_DamageConfigData), 954815449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_3963660104(TEXT("/Script/HelpfulFunctions"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_DamageConfigData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
