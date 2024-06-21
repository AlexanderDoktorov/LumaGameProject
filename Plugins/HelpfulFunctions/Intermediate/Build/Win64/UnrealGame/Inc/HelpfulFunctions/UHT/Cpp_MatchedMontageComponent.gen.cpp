// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/Cpp_MatchedMontageComponent.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_MatchedMontageComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_MatchedMontageComponent();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_MatchedMontageComponent_NoRegister();
	HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform();
	HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchedMontageManyPoints();
	HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FMatchedMontageTwoPoints();
	HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FMMEndingEvent();
	UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints;
class UScriptStruct* FMatchedMontageTwoPoints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("MatchedMontageTwoPoints"));
	}
	return Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FMatchedMontageTwoPoints>()
{
	return FMatchedMontageTwoPoints::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizeTimeToAnimLength_MetaData[];
#endif
		static void NewProp_NormalizeTimeToAnimLength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NormalizeTimeToAnimLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimelineLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartMontageAt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartMontageAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopAllMontages_MetaData[];
#endif
		static void NewProp_StopAllMontages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StopAllMontages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvertTransformsToWorld_MetaData[];
#endif
		static void NewProp_ConvertTransformsToWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConvertTransformsToWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseMotionCurvesFromAnimation_MetaData[];
#endif
		static void NewProp_UseMotionCurvesFromAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMotionCurvesFromAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemapCurves_MetaData[];
#endif
		static void NewProp_RemapCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RemapCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyTimelineAlphaAtEnd_MetaData[];
#endif
		static void NewProp_ApplyTimelineAlphaAtEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyTimelineAlphaAtEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineAlphaEndConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimelineAlphaEndConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishWhenAlphaAtEnd_MetaData[];
#endif
		static void NewProp_FinishWhenAlphaAtEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FinishWhenAlphaAtEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseInterFor180Rot_MetaData[];
#endif
		static void NewProp_UseInterFor180Rot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseInterFor180Rot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationDirection180_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationDirection180;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRotationInterpType_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CustomRotationInterpType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchedMontageTwoPoints>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageTwoPoints, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_AnimInstance_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageTwoPoints, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_AnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_AnimInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_MontageAsset_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_MontageAsset = { "MontageAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageTwoPoints, MontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_MontageAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_MontageAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_NormalizeTimeToAnimLength_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_NormalizeTimeToAnimLength_SetBit(void* Obj)
	{
		((FMatchedMontageTwoPoints*)Obj)->NormalizeTimeToAnimLength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_NormalizeTimeToAnimLength = { "NormalizeTimeToAnimLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_NormalizeTimeToAnimLength_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_NormalizeTimeToAnimLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_NormalizeTimeToAnimLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineLength_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineLength = { "TimelineLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageTwoPoints, TimelineLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageTwoPoints, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartMontageAt_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartMontageAt = { "StartMontageAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageTwoPoints, StartMontageAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartMontageAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartMontageAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StopAllMontages_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StopAllMontages_SetBit(void* Obj)
	{
		((FMatchedMontageTwoPoints*)Obj)->StopAllMontages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StopAllMontages = { "StopAllMontages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StopAllMontages_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StopAllMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StopAllMontages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ConvertTransformsToWorld_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ConvertTransformsToWorld_SetBit(void* Obj)
	{
		((FMatchedMontageTwoPoints*)Obj)->ConvertTransformsToWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ConvertTransformsToWorld = { "ConvertTransformsToWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ConvertTransformsToWorld_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ConvertTransformsToWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ConvertTransformsToWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartTransform_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartTransform = { "StartTransform", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageTwoPoints, StartTransform), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartTransform_MetaData)) }; // 3722672540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_EndTransform_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_EndTransform = { "EndTransform", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageTwoPoints, EndTransform), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_EndTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_EndTransform_MetaData)) }; // 3722672540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseMotionCurvesFromAnimation_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseMotionCurvesFromAnimation_SetBit(void* Obj)
	{
		((FMatchedMontageTwoPoints*)Obj)->UseMotionCurvesFromAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseMotionCurvesFromAnimation = { "UseMotionCurvesFromAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseMotionCurvesFromAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseMotionCurvesFromAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseMotionCurvesFromAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_LocationCurve_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_LocationCurve = { "LocationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageTwoPoints, LocationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_LocationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_LocationCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationCurve_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageTwoPoints, RotationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RemapCurves_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RemapCurves_SetBit(void* Obj)
	{
		((FMatchedMontageTwoPoints*)Obj)->RemapCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RemapCurves = { "RemapCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RemapCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RemapCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RemapCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_SetBit(void* Obj)
	{
		((FMatchedMontageTwoPoints*)Obj)->ApplyTimelineAlphaAtEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd = { "ApplyTimelineAlphaAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineAlphaEndConfig_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineAlphaEndConfig = { "TimelineAlphaEndConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageTwoPoints, TimelineAlphaEndConfig), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineAlphaEndConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineAlphaEndConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_FinishWhenAlphaAtEnd_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_FinishWhenAlphaAtEnd_SetBit(void* Obj)
	{
		((FMatchedMontageTwoPoints*)Obj)->FinishWhenAlphaAtEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_FinishWhenAlphaAtEnd = { "FinishWhenAlphaAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_FinishWhenAlphaAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_FinishWhenAlphaAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_FinishWhenAlphaAtEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseInterFor180Rot_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseInterFor180Rot_SetBit(void* Obj)
	{
		((FMatchedMontageTwoPoints*)Obj)->UseInterFor180Rot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseInterFor180Rot = { "UseInterFor180Rot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageTwoPoints), &Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseInterFor180Rot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseInterFor180Rot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseInterFor180Rot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationDirection180_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationDirection180 = { "RotationDirection180", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageTwoPoints, RotationDirection180), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationDirection180_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationDirection180_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_CustomRotationInterpType_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_CustomRotationInterpType = { "CustomRotationInterpType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageTwoPoints, CustomRotationInterpType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_CustomRotationInterpType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_CustomRotationInterpType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_MontageAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_NormalizeTimeToAnimLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartMontageAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StopAllMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ConvertTransformsToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_StartTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_EndTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseMotionCurvesFromAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_LocationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RemapCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_TimelineAlphaEndConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_FinishWhenAlphaAtEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_UseInterFor180Rot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_RotationDirection180,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewProp_CustomRotationInterpType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
		nullptr,
		&NewStructOps,
		"MatchedMontageTwoPoints",
		sizeof(FMatchedMontageTwoPoints),
		alignof(FMatchedMontageTwoPoints),
		Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchedMontageTwoPoints()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints.InnerSingleton, Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints;
class UScriptStruct* FMatchedMontageManyPoints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchedMontageManyPoints, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("MatchedMontageManyPoints"));
	}
	return Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FMatchedMontageManyPoints>()
{
	return FMatchedMontageManyPoints::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimelineLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartMontageAt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartMontageAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopAllMontages_MetaData[];
#endif
		static void NewProp_StopAllMontages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StopAllMontages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvertTransformsToWorld_MetaData[];
#endif
		static void NewProp_ConvertTransformsToWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConvertTransformsToWorld;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseMotionCurvesFromAnimation_MetaData[];
#endif
		static void NewProp_UseMotionCurvesFromAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMotionCurvesFromAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemapCurves_MetaData[];
#endif
		static void NewProp_RemapCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RemapCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyTimelineAlphaAtEnd_MetaData[];
#endif
		static void NewProp_ApplyTimelineAlphaAtEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyTimelineAlphaAtEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutBlendingDuration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutBlendingDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishWhenAlphaAtEnd_MetaData[];
#endif
		static void NewProp_FinishWhenAlphaAtEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FinishWhenAlphaAtEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseInterFor180Rot_MetaData[];
#endif
		static void NewProp_UseInterFor180Rot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseInterFor180Rot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationDirection180_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationDirection180;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRotationInterpType_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CustomRotationInterpType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchedMontageManyPoints>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageManyPoints, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_AnimInstance_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageManyPoints, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_AnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_AnimInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TimelineLength_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TimelineLength = { "TimelineLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageManyPoints, TimelineLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TimelineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TimelineLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageManyPoints, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StartMontageAt_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StartMontageAt = { "StartMontageAt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageManyPoints, StartMontageAt), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StartMontageAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StartMontageAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StopAllMontages_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StopAllMontages_SetBit(void* Obj)
	{
		((FMatchedMontageManyPoints*)Obj)->StopAllMontages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StopAllMontages = { "StopAllMontages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StopAllMontages_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StopAllMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StopAllMontages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ConvertTransformsToWorld_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ConvertTransformsToWorld_SetBit(void* Obj)
	{
		((FMatchedMontageManyPoints*)Obj)->ConvertTransformsToWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ConvertTransformsToWorld = { "ConvertTransformsToWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ConvertTransformsToWorld_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ConvertTransformsToWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ConvertTransformsToWorld_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TargetPoints_Inner = { "TargetPoints", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(nullptr, 0) }; // 3722672540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TargetPoints_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TargetPoints = { "TargetPoints", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageManyPoints, TargetPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TargetPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TargetPoints_MetaData)) }; // 3722672540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseMotionCurvesFromAnimation_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseMotionCurvesFromAnimation_SetBit(void* Obj)
	{
		((FMatchedMontageManyPoints*)Obj)->UseMotionCurvesFromAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseMotionCurvesFromAnimation = { "UseMotionCurvesFromAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseMotionCurvesFromAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseMotionCurvesFromAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseMotionCurvesFromAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_LocationCurve_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_LocationCurve = { "LocationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageManyPoints, LocationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_LocationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_LocationCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationCurve_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageManyPoints, RotationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RemapCurves_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RemapCurves_SetBit(void* Obj)
	{
		((FMatchedMontageManyPoints*)Obj)->RemapCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RemapCurves = { "RemapCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RemapCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RemapCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RemapCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_SetBit(void* Obj)
	{
		((FMatchedMontageManyPoints*)Obj)->ApplyTimelineAlphaAtEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd = { "ApplyTimelineAlphaAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_OutBlendingDuration_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_OutBlendingDuration = { "OutBlendingDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageManyPoints, OutBlendingDuration), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_OutBlendingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_OutBlendingDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_FinishWhenAlphaAtEnd_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_FinishWhenAlphaAtEnd_SetBit(void* Obj)
	{
		((FMatchedMontageManyPoints*)Obj)->FinishWhenAlphaAtEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_FinishWhenAlphaAtEnd = { "FinishWhenAlphaAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_FinishWhenAlphaAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_FinishWhenAlphaAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_FinishWhenAlphaAtEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseInterFor180Rot_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseInterFor180Rot_SetBit(void* Obj)
	{
		((FMatchedMontageManyPoints*)Obj)->UseInterFor180Rot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseInterFor180Rot = { "UseInterFor180Rot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMatchedMontageManyPoints), &Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseInterFor180Rot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseInterFor180Rot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseInterFor180Rot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationDirection180_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationDirection180 = { "RotationDirection180", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageManyPoints, RotationDirection180), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationDirection180_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationDirection180_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_CustomRotationInterpType_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_CustomRotationInterpType = { "CustomRotationInterpType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMatchedMontageManyPoints, CustomRotationInterpType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_CustomRotationInterpType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_CustomRotationInterpType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TimelineLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StartMontageAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_StopAllMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ConvertTransformsToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TargetPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_TargetPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseMotionCurvesFromAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_LocationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RemapCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_ApplyTimelineAlphaAtEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_OutBlendingDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_FinishWhenAlphaAtEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_UseInterFor180Rot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_RotationDirection180,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewProp_CustomRotationInterpType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
		nullptr,
		&NewStructOps,
		"MatchedMontageManyPoints",
		sizeof(FMatchedMontageManyPoints),
		alignof(FMatchedMontageManyPoints),
		Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchedMontageManyPoints()
	{
		if (!Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints.InnerSingleton, Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MMEndingEvent;
class UScriptStruct* FMMEndingEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MMEndingEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MMEndingEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMMEndingEvent, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("MMEndingEvent"));
	}
	return Z_Registration_Info_UScriptStruct_MMEndingEvent.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FMMEndingEvent>()
{
	return FMMEndingEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMMEndingEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMEndingEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMMEndingEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_TargetObject_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_TargetObject = { "TargetObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMMEndingEvent, TargetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_TargetObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_TargetObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMMEndingEvent, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMMEndingEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_TargetObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewProp_EventName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMMEndingEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
		nullptr,
		&NewStructOps,
		"MMEndingEvent",
		sizeof(FMMEndingEvent),
		alignof(FMMEndingEvent),
		Z_Construct_UScriptStruct_FMMEndingEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMEndingEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMMEndingEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMMEndingEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMMEndingEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_MMEndingEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MMEndingEvent.InnerSingleton, Z_Construct_UScriptStruct_FMMEndingEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MMEndingEvent.InnerSingleton;
	}
	DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execMatchingMotionNormalized)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MatchingMotionNormalized_Implementation(Z_Param_CurrentTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execFinishMatchedMontageC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishMatchedMontageC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execExtractedInterpolationC)
	{
		P_GET_STRUCT(FTransform,Z_Param_A);
		P_GET_STRUCT(FTransform,Z_Param_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VZ);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ROT);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Direction180);
		P_GET_UBOOL(Z_Param_UseInterpFor180Rot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->ExtractedInterpolationC(Z_Param_A,Z_Param_B,Z_Param_VX,Z_Param_VY,Z_Param_VZ,Z_Param_ROT,Z_Param_Alpha,Z_Param_Direction180,Z_Param_UseInterpFor180Rot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execGetCustomCurveValueC)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCustomCurveValueC(Z_Param_InTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execGetAnimCurveC)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_UBOOL(Z_Param_WithLock);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LockVariable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAnimCurveC(Z_Param_Out_Value,Z_Param_CurveName,Z_Param_WithLock,Z_Param_LockVariable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execPlayMatchedMontageTwoPointsC)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageAsset);
		P_GET_STRUCT(FMatchedMontageTwoPoints,Z_Param_ConfigStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMatchedMontageTwoPointsC(Z_Param_MontageAsset,Z_Param_ConfigStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execPlayMatchedMontageManyPointsC)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageAsset);
		P_GET_STRUCT(FMatchedMontageManyPoints,Z_Param_ConfigStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayMatchedMontageManyPointsC(Z_Param_MontageAsset,Z_Param_ConfigStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execMatchingSinglePointsC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MatchingSinglePointsC();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_MatchedMontageComponent::execMatchingMultiplePointsC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MatchingMultiplePointsC();
		P_NATIVE_END;
	}
	struct Cpp_MatchedMontageComponent_eventMatchingMotionNormalized_Parms
	{
		float CurrentTime;
	};
	static FName NAME_UCpp_MatchedMontageComponent_FinishMatchedMontageC = FName(TEXT("FinishMatchedMontageC"));
	void UCpp_MatchedMontageComponent::FinishMatchedMontageC()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCpp_MatchedMontageComponent_FinishMatchedMontageC),NULL);
	}
	static FName NAME_UCpp_MatchedMontageComponent_MatchingMotionNormalized = FName(TEXT("MatchingMotionNormalized"));
	void UCpp_MatchedMontageComponent::MatchingMotionNormalized(float CurrentTime)
	{
		Cpp_MatchedMontageComponent_eventMatchingMotionNormalized_Parms Parms;
		Parms.CurrentTime=CurrentTime;
		ProcessEvent(FindFunctionChecked(NAME_UCpp_MatchedMontageComponent_MatchingMotionNormalized),&Parms);
	}
	void UCpp_MatchedMontageComponent::StaticRegisterNativesUCpp_MatchedMontageComponent()
	{
		UClass* Class = UCpp_MatchedMontageComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExtractedInterpolationC", &UCpp_MatchedMontageComponent::execExtractedInterpolationC },
			{ "FinishMatchedMontageC", &UCpp_MatchedMontageComponent::execFinishMatchedMontageC },
			{ "GetAnimCurveC", &UCpp_MatchedMontageComponent::execGetAnimCurveC },
			{ "GetCustomCurveValueC", &UCpp_MatchedMontageComponent::execGetCustomCurveValueC },
			{ "MatchingMotionNormalized", &UCpp_MatchedMontageComponent::execMatchingMotionNormalized },
			{ "MatchingMultiplePointsC", &UCpp_MatchedMontageComponent::execMatchingMultiplePointsC },
			{ "MatchingSinglePointsC", &UCpp_MatchedMontageComponent::execMatchingSinglePointsC },
			{ "PlayMatchedMontageManyPointsC", &UCpp_MatchedMontageComponent::execPlayMatchedMontageManyPointsC },
			{ "PlayMatchedMontageTwoPointsC", &UCpp_MatchedMontageComponent::execPlayMatchedMontageTwoPointsC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics
	{
		struct Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms
		{
			FTransform A;
			FTransform B;
			float VX;
			float VY;
			float VZ;
			float ROT;
			float Alpha;
			float Direction180;
			bool UseInterpFor180Rot;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VY;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VZ;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ROT;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction180;
		static void NewProp_UseInterpFor180Rot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseInterpFor180Rot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, A), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, B), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_VX = { "VX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, VX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_VY = { "VY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, VY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_VZ = { "VZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, VZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_ROT = { "ROT", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, ROT), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_Direction180 = { "Direction180", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, Direction180), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_UseInterpFor180Rot_SetBit(void* Obj)
	{
		((Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms*)Obj)->UseInterpFor180Rot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_UseInterpFor180Rot = { "UseInterpFor180Rot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms), &Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_UseInterpFor180Rot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_VX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_VY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_VZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_ROT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_Direction180,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_UseInterpFor180Rot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Matched|Construction" },
		{ "CPP_Default_Alpha", "0.000000" },
		{ "CPP_Default_Direction180", "-90.000000" },
		{ "CPP_Default_ROT", "0.000000" },
		{ "CPP_Default_UseInterpFor180Rot", "false" },
		{ "CPP_Default_VX", "0.000000" },
		{ "CPP_Default_VY", "0.000000" },
		{ "CPP_Default_VZ", "0.000000" },
		{ "DisplayName", "Extracted Transfororm Interpolation" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "ExtractedInterpolationC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::Cpp_MatchedMontageComponent_eventExtractedInterpolationC_Parms), Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Matched|End" },
		{ "Comment", "//Can Override In Blueprint\n" },
		{ "DisplayName", "Finish Timeline And Seq" },
		{ "Keywords", "Matched Finish" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "ToolTip", "Can Override In Blueprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "FinishMatchedMontageC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics
	{
		struct Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms
		{
			float Value;
			FName CurveName;
			bool WithLock;
			float LockVariable;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static void NewProp_WithLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WithLock;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LockVariable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_WithLock_SetBit(void* Obj)
	{
		((Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms*)Obj)->WithLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_WithLock = { "WithLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms), &Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_WithLock_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_LockVariable = { "LockVariable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms, LockVariable), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms), &Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_WithLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_LockVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Matched|Construction" },
		{ "DisplayName", "Get Anim Curve" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "GetAnimCurveC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::Cpp_MatchedMontageComponent_eventGetAnimCurveC_Parms), Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics
	{
		struct Cpp_MatchedMontageComponent_eventGetCustomCurveValueC_Parms
		{
			float InTime;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventGetCustomCurveValueC_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventGetCustomCurveValueC_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Matched|Construction" },
		{ "CPP_Default_InTime", "0.000000" },
		{ "DisplayName", "Get Custom Curve Value" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "GetCustomCurveValueC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::Cpp_MatchedMontageComponent_eventGetCustomCurveValueC_Parms), Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventMatchingMotionNormalized_Parms, CurrentTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::NewProp_CurrentTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Matched|Update" },
		{ "DisplayName", "Matching Motion Normalized" },
		{ "Keywords", "Matched Update" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "MatchingMotionNormalized", nullptr, nullptr, sizeof(Cpp_MatchedMontageComponent_eventMatchingMotionNormalized_Parms), Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Matched|Update" },
		{ "DisplayName", "Matching Multiple Points" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "MatchingMultiplePointsC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Matched|Update" },
		{ "DisplayName", "Matching Single Points" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "MatchingSinglePointsC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics
	{
		struct Cpp_MatchedMontageComponent_eventPlayMatchedMontageManyPointsC_Parms
		{
			UAnimMontage* MontageAsset;
			FMatchedMontageManyPoints ConfigStruct;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::NewProp_MontageAsset = { "MontageAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventPlayMatchedMontageManyPointsC_Parms, MontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::NewProp_ConfigStruct = { "ConfigStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventPlayMatchedMontageManyPointsC_Parms, ConfigStruct), Z_Construct_UScriptStruct_FMatchedMontageManyPoints, METADATA_PARAMS(nullptr, 0) }; // 3514304421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::NewProp_MontageAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::NewProp_ConfigStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Matched|Prepare" },
		{ "DisplayName", "Play Matched Montage (ManyPoints)" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "PlayMatchedMontageManyPointsC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::Cpp_MatchedMontageComponent_eventPlayMatchedMontageManyPointsC_Parms), Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics
	{
		struct Cpp_MatchedMontageComponent_eventPlayMatchedMontageTwoPointsC_Parms
		{
			UAnimMontage* MontageAsset;
			FMatchedMontageTwoPoints ConfigStruct;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::NewProp_MontageAsset = { "MontageAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventPlayMatchedMontageTwoPointsC_Parms, MontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::NewProp_ConfigStruct = { "ConfigStruct", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_MatchedMontageComponent_eventPlayMatchedMontageTwoPointsC_Parms, ConfigStruct), Z_Construct_UScriptStruct_FMatchedMontageTwoPoints, METADATA_PARAMS(nullptr, 0) }; // 368115165
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::NewProp_MontageAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::NewProp_ConfigStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::Function_MetaDataParams[] = {
		{ "Category", "Matched|Prepare" },
		{ "DisplayName", "Play Matched Montage (TwoPoints)" },
		{ "Keywords", "MatchedMontage" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_MatchedMontageComponent, nullptr, "PlayMatchedMontageTwoPointsC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::Cpp_MatchedMontageComponent_eventPlayMatchedMontageTwoPointsC_Parms), Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCpp_MatchedMontageComponent);
	UClass* Z_Construct_UClass_UCpp_MatchedMontageComponent_NoRegister()
	{
		return UCpp_MatchedMontageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MotionCurvesNameC_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionCurvesNameC_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MotionCurvesNameC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetZeroToVelocity_MetaData[];
#endif
		static void NewProp_SetZeroToVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SetZeroToVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimAlphaCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AnimAlphaCurveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_ExtractedInterpolationC, "ExtractedInterpolationC" }, // 3163246133
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_FinishMatchedMontageC, "FinishMatchedMontageC" }, // 3905503875
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetAnimCurveC, "GetAnimCurveC" }, // 2963309778
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_GetCustomCurveValueC, "GetCustomCurveValueC" }, // 2369845814
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMotionNormalized, "MatchingMotionNormalized" }, // 1259565222
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingMultiplePointsC, "MatchingMultiplePointsC" }, // 2276103690
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_MatchingSinglePointsC, "MatchingSinglePointsC" }, // 1768370143
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageManyPointsC, "PlayMatchedMontageManyPointsC" }, // 950299793
		{ &Z_Construct_UFunction_UCpp_MatchedMontageComponent_PlayMatchedMontageTwoPointsC, "PlayMatchedMontageTwoPointsC" }, // 3714758595
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Cpp_MatchedMontageComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_MotionCurvesNameC_Inner = { "MotionCurvesNameC", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_MotionCurvesNameC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "MatchedMontage" },
		{ "Comment", "//Exposed Variables (Visible In Blueprint)\n" },
		{ "DisplayName", "MotionCurvesName" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
		{ "ToolTip", "Exposed Variables (Visible In Blueprint)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_MotionCurvesNameC = { "MotionCurvesNameC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_MatchedMontageComponent, MotionCurvesNameC), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_MotionCurvesNameC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_MotionCurvesNameC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_SetZeroToVelocity_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "MatchedMontage" },
		{ "DisplayName", "SetZeroToVelocity" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_SetZeroToVelocity_SetBit(void* Obj)
	{
		((UCpp_MatchedMontageComponent*)Obj)->SetZeroToVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_SetZeroToVelocity = { "SetZeroToVelocity", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCpp_MatchedMontageComponent), &Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_SetZeroToVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_SetZeroToVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_SetZeroToVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_AnimAlphaCurveName_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "MatchedMontage" },
		{ "DisplayName", "AnimAlphaCurveName" },
		{ "ModuleRelativePath", "Public/Cpp_MatchedMontageComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_AnimAlphaCurveName = { "AnimAlphaCurveName", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_MatchedMontageComponent, AnimAlphaCurveName), METADATA_PARAMS(Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_AnimAlphaCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_AnimAlphaCurveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_MotionCurvesNameC_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_MotionCurvesNameC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_SetZeroToVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::NewProp_AnimAlphaCurveName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCpp_MatchedMontageComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::ClassParams = {
		&UCpp_MatchedMontageComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCpp_MatchedMontageComponent()
	{
		if (!Z_Registration_Info_UClass_UCpp_MatchedMontageComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCpp_MatchedMontageComponent.OuterSingleton, Z_Construct_UClass_UCpp_MatchedMontageComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCpp_MatchedMontageComponent.OuterSingleton;
	}
	template<> HELPFULFUNCTIONS_API UClass* StaticClass<UCpp_MatchedMontageComponent>()
	{
		return UCpp_MatchedMontageComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCpp_MatchedMontageComponent);
	UCpp_MatchedMontageComponent::~UCpp_MatchedMontageComponent() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_Statics::ScriptStructInfo[] = {
		{ FMatchedMontageTwoPoints::StaticStruct, Z_Construct_UScriptStruct_FMatchedMontageTwoPoints_Statics::NewStructOps, TEXT("MatchedMontageTwoPoints"), &Z_Registration_Info_UScriptStruct_MatchedMontageTwoPoints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchedMontageTwoPoints), 368115165U) },
		{ FMatchedMontageManyPoints::StaticStruct, Z_Construct_UScriptStruct_FMatchedMontageManyPoints_Statics::NewStructOps, TEXT("MatchedMontageManyPoints"), &Z_Registration_Info_UScriptStruct_MatchedMontageManyPoints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatchedMontageManyPoints), 3514304421U) },
		{ FMMEndingEvent::StaticStruct, Z_Construct_UScriptStruct_FMMEndingEvent_Statics::NewStructOps, TEXT("MMEndingEvent"), &Z_Registration_Info_UScriptStruct_MMEndingEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMMEndingEvent), 2501831540U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCpp_MatchedMontageComponent, UCpp_MatchedMontageComponent::StaticClass, TEXT("UCpp_MatchedMontageComponent"), &Z_Registration_Info_UClass_UCpp_MatchedMontageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCpp_MatchedMontageComponent), 1151748119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_1479849165(TEXT("/Script/HelpfulFunctions"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_MatchedMontageComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
