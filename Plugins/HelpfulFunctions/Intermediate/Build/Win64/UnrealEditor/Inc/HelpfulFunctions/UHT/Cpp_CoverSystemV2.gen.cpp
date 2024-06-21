// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/Cpp_CoverSystemV2.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_CoverSystemV2() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_CoverSystemV2();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_CoverSystemV2_NoRegister();
	HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCoverSystemMoveConfig();
	HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCoverTraceStartConfig();
	UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoverTraceStartConfig;
class UScriptStruct* FCoverTraceStartConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoverTraceStartConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoverTraceStartConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoverTraceStartConfig, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CoverTraceStartConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CoverTraceStartConfig.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCoverTraceStartConfig>()
{
	return FCoverTraceStartConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetToRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetToRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardOffsetScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardOffsetScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagNameToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagNameToIgnore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoverTraceStartConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_RightOffset_MetaData[] = {
		{ "Category", "CoverTraceStartConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_RightOffset = { "RightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverTraceStartConfig, RightOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_RightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_RightOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_LeftOffset_MetaData[] = {
		{ "Category", "CoverTraceStartConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_LeftOffset = { "LeftOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverTraceStartConfig, LeftOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_LeftOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_LeftOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_OffsetToRadius_MetaData[] = {
		{ "Category", "CoverTraceStartConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_OffsetToRadius = { "OffsetToRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverTraceStartConfig, OffsetToRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_OffsetToRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_OffsetToRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_ForwardOffsetScale_MetaData[] = {
		{ "Category", "CoverTraceStartConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_ForwardOffsetScale = { "ForwardOffsetScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverTraceStartConfig, ForwardOffsetScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_ForwardOffsetScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_ForwardOffsetScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_TagNameToIgnore_MetaData[] = {
		{ "Category", "CoverTraceStartConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_TagNameToIgnore = { "TagNameToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverTraceStartConfig, TagNameToIgnore), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_TagNameToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_TagNameToIgnore_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_RightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_LeftOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_OffsetToRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_ForwardOffsetScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewProp_TagNameToIgnore,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
		nullptr,
		&NewStructOps,
		"CoverTraceStartConfig",
		sizeof(FCoverTraceStartConfig),
		alignof(FCoverTraceStartConfig),
		Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoverTraceStartConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_CoverTraceStartConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoverTraceStartConfig.InnerSingleton, Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoverTraceStartConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig;
class UScriptStruct* FCoverSystemMoveConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoverSystemMoveConfig, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CoverSystemMoveConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCoverSystemMoveConfig>()
{
	return FCoverSystemMoveConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstRightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstRightOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiplyOffsetRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiplyOffsetRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LerpWithInputWall_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpWithInputWall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TOffsetForward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TOffsetForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TOffsetBackward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TOffsetBackward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleTollerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleTollerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LoopCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoverSystemMoveConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_FirstRightOffset_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_FirstRightOffset = { "FirstRightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverSystemMoveConfig, FirstRightOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_FirstRightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_FirstRightOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_MultiplyOffsetRight_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_MultiplyOffsetRight = { "MultiplyOffsetRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverSystemMoveConfig, MultiplyOffsetRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_MultiplyOffsetRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_MultiplyOffsetRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LerpWithInputWall_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LerpWithInputWall = { "LerpWithInputWall", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverSystemMoveConfig, LerpWithInputWall), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LerpWithInputWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LerpWithInputWall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetForward_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetForward = { "TOffsetForward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverSystemMoveConfig, TOffsetForward), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetBackward_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetBackward = { "TOffsetBackward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverSystemMoveConfig, TOffsetBackward), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetBackward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetBackward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceRadius_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverSystemMoveConfig, TraceRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_AngleTollerance_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_AngleTollerance = { "AngleTollerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverSystemMoveConfig, AngleTollerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_AngleTollerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_AngleTollerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LoopCount_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverSystemMoveConfig, LoopCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LoopCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LoopCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "CoverSystemMoveConfig" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoverSystemMoveConfig, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceChannel_MetaData)) }; // 727872708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_FirstRightOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_MultiplyOffsetRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LerpWithInputWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TOffsetBackward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_AngleTollerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_LoopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewProp_TraceChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
		nullptr,
		&NewStructOps,
		"CoverSystemMoveConfig",
		sizeof(FCoverSystemMoveConfig),
		alignof(FCoverSystemMoveConfig),
		Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoverSystemMoveConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig.InnerSingleton, Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig.InnerSingleton;
	}
	DEFINE_FUNCTION(UCpp_CoverSystemV2::execSetAxisValuesForCpp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->SetAxisValuesForCpp_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_CoverSystemV2::execFinishCoverModeC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishCoverModeC_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_CoverSystemV2::execStartCoverModeC)
	{
		P_GET_UBOOL_REF(Z_Param_Out_StartedCover);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCoverModeC_Implementation(Z_Param_Out_StartedCover);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_CoverSystemV2::execUpdateDirectionValuesC)
	{
		P_GET_UBOOL(Z_Param_IsCrouch);
		P_GET_PROPERTY(FIntProperty,Z_Param_DirectionState);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PerDirectionInterpSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MovementInterpSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SmoothAxisInterpSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDirectionValuesC(Z_Param_IsCrouch,Z_Param_DirectionState,Z_Param_PerDirectionInterpSpeed,Z_Param_MovementInterpSpeed,Z_Param_SmoothAxisInterpSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_CoverSystemV2::execConvertWallToCapPositionC)
	{
		P_GET_STRUCT(FVector,Z_Param_WallLocation);
		P_GET_STRUCT(FVector,Z_Param_WallNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConvertWallToCapPositionC(Z_Param_WallLocation,Z_Param_WallNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_CoverSystemV2::execCheckCanStartMoveC)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DesiredWalkAxis);
		P_GET_UBOOL(Z_Param_WallValid);
		P_GET_STRUCT(FHitResult,Z_Param_WallHit);
		P_GET_STRUCT(FCoverSystemMoveConfig,Z_Param_Config);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCanStartMoveC(Z_Param_Out_DesiredWalkAxis,Z_Param_WallValid,Z_Param_WallHit,Z_Param_Config);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_CoverSystemV2::execSmoothWallNormalC)
	{
		P_GET_STRUCT(FVector,Z_Param_TraceLocation);
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DirectionAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->SmoothWallNormalC(Z_Param_TraceLocation,Z_Param_Normal,Z_Param_DirectionAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_CoverSystemV2::execMoveCharToWallC)
	{
		P_GET_UBOOL_REF(Z_Param_Out_WallValid);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ReturnWall);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MoveToWallSpeed);
		P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveCharToWallC(Z_Param_Out_WallValid,Z_Param_Out_ReturnWall,Z_Param_MoveToWallSpeed,Z_Param_DebugIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_CoverSystemV2::execTryStartCoverSystemC)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ReturnWall);
		P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryStartCoverSystemC(Z_Param_Out_ReturnWall,Z_Param_DebugIndex);
		P_NATIVE_END;
	}
	struct Cpp_CoverSystemV2_eventSetAxisValuesForCpp_Parms
	{
		FVector2D ReturnValue;

		/** Constructor, initializes return property only **/
		Cpp_CoverSystemV2_eventSetAxisValuesForCpp_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct Cpp_CoverSystemV2_eventStartCoverModeC_Parms
	{
		bool StartedCover;
	};
	static FName NAME_UCpp_CoverSystemV2_FinishCoverModeC = FName(TEXT("FinishCoverModeC"));
	void UCpp_CoverSystemV2::FinishCoverModeC()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCpp_CoverSystemV2_FinishCoverModeC),NULL);
	}
	static FName NAME_UCpp_CoverSystemV2_SetAxisValuesForCpp = FName(TEXT("SetAxisValuesForCpp"));
	FVector2D UCpp_CoverSystemV2::SetAxisValuesForCpp()
	{
		Cpp_CoverSystemV2_eventSetAxisValuesForCpp_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UCpp_CoverSystemV2_SetAxisValuesForCpp),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UCpp_CoverSystemV2_StartCoverModeC = FName(TEXT("StartCoverModeC"));
	void UCpp_CoverSystemV2::StartCoverModeC(bool& StartedCover)
	{
		Cpp_CoverSystemV2_eventStartCoverModeC_Parms Parms;
		Parms.StartedCover=StartedCover ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCpp_CoverSystemV2_StartCoverModeC),&Parms);
		StartedCover=Parms.StartedCover;
	}
	void UCpp_CoverSystemV2::StaticRegisterNativesUCpp_CoverSystemV2()
	{
		UClass* Class = UCpp_CoverSystemV2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckCanStartMoveC", &UCpp_CoverSystemV2::execCheckCanStartMoveC },
			{ "ConvertWallToCapPositionC", &UCpp_CoverSystemV2::execConvertWallToCapPositionC },
			{ "FinishCoverModeC", &UCpp_CoverSystemV2::execFinishCoverModeC },
			{ "MoveCharToWallC", &UCpp_CoverSystemV2::execMoveCharToWallC },
			{ "SetAxisValuesForCpp", &UCpp_CoverSystemV2::execSetAxisValuesForCpp },
			{ "SmoothWallNormalC", &UCpp_CoverSystemV2::execSmoothWallNormalC },
			{ "StartCoverModeC", &UCpp_CoverSystemV2::execStartCoverModeC },
			{ "TryStartCoverSystemC", &UCpp_CoverSystemV2::execTryStartCoverSystemC },
			{ "UpdateDirectionValuesC", &UCpp_CoverSystemV2::execUpdateDirectionValuesC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics
	{
		struct Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms
		{
			float DesiredWalkAxis;
			bool WallValid;
			FHitResult WallHit;
			FCoverSystemMoveConfig Config;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredWalkAxis;
		static void NewProp_WallValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WallValid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WallHit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_DesiredWalkAxis = { "DesiredWalkAxis", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms, DesiredWalkAxis), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_WallValid_SetBit(void* Obj)
	{
		((Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms*)Obj)->WallValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_WallValid = { "WallValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms), &Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_WallValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_WallHit = { "WallHit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms, WallHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms, Config), Z_Construct_UScriptStruct_FCoverSystemMoveConfig, METADATA_PARAMS(nullptr, 0) }; // 3876971222
	void Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms), &Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_DesiredWalkAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_WallValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_WallHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "DisplayName", "Check Can Start Move" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "CheckCanStartMoveC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::Cpp_CoverSystemV2_eventCheckCanStartMoveC_Parms), Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics
	{
		struct Cpp_CoverSystemV2_eventConvertWallToCapPositionC_Parms
		{
			FVector WallLocation;
			FVector WallNormal;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WallLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WallNormal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::NewProp_WallLocation = { "WallLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventConvertWallToCapPositionC_Parms, WallLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::NewProp_WallNormal = { "WallNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventConvertWallToCapPositionC_Parms, WallNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventConvertWallToCapPositionC_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::NewProp_WallLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::NewProp_WallNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "DisplayName", "Wall To Cap" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "ConvertWallToCapPositionC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::Cpp_CoverSystemV2_eventConvertWallToCapPositionC_Parms), Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "DisplayName", "Finish Cover Mode Call" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "FinishCoverModeC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics
	{
		struct Cpp_CoverSystemV2_eventMoveCharToWallC_Parms
		{
			bool WallValid;
			FHitResult ReturnWall;
			float MoveToWallSpeed;
			int32 DebugIndex;
		};
		static void NewProp_WallValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WallValid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnWall;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveToWallSpeed;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DebugIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_WallValid_SetBit(void* Obj)
	{
		((Cpp_CoverSystemV2_eventMoveCharToWallC_Parms*)Obj)->WallValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_WallValid = { "WallValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Cpp_CoverSystemV2_eventMoveCharToWallC_Parms), &Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_WallValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_ReturnWall = { "ReturnWall", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventMoveCharToWallC_Parms, ReturnWall), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_MoveToWallSpeed = { "MoveToWallSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventMoveCharToWallC_Parms, MoveToWallSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventMoveCharToWallC_Parms, DebugIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_WallValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_ReturnWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_MoveToWallSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::NewProp_DebugIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "CPP_Default_DebugIndex", "0" },
		{ "CPP_Default_MoveToWallSpeed", "1.000000" },
		{ "DisplayName", "Move Char To Wall" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "MoveCharToWallC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::Cpp_CoverSystemV2_eventMoveCharToWallC_Parms), Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventSetAxisValuesForCpp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "DisplayName", "Set Axis Values For Cpp" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "SetAxisValuesForCpp", nullptr, nullptr, sizeof(Cpp_CoverSystemV2_eventSetAxisValuesForCpp_Parms), Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics
	{
		struct Cpp_CoverSystemV2_eventSmoothWallNormalC_Parms
		{
			FVector TraceLocation;
			FVector Normal;
			float DirectionAxis;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionAxis;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_TraceLocation = { "TraceLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventSmoothWallNormalC_Parms, TraceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventSmoothWallNormalC_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_DirectionAxis = { "DirectionAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventSmoothWallNormalC_Parms, DirectionAxis), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventSmoothWallNormalC_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_TraceLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_DirectionAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "DisplayName", "Smoothing Wall Normal" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "SmoothWallNormalC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::Cpp_CoverSystemV2_eventSmoothWallNormalC_Parms), Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics
	{
		static void NewProp_StartedCover_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedCover;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::NewProp_StartedCover_SetBit(void* Obj)
	{
		((Cpp_CoverSystemV2_eventStartCoverModeC_Parms*)Obj)->StartedCover = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::NewProp_StartedCover = { "StartedCover", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Cpp_CoverSystemV2_eventStartCoverModeC_Parms), &Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::NewProp_StartedCover_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::NewProp_StartedCover,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "DisplayName", "Start Cover Mode Call" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "StartCoverModeC", nullptr, nullptr, sizeof(Cpp_CoverSystemV2_eventStartCoverModeC_Parms), Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics
	{
		struct Cpp_CoverSystemV2_eventTryStartCoverSystemC_Parms
		{
			FHitResult ReturnWall;
			int32 DebugIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnWall;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DebugIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_ReturnWall = { "ReturnWall", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventTryStartCoverSystemC_Parms, ReturnWall), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventTryStartCoverSystemC_Parms, DebugIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Cpp_CoverSystemV2_eventTryStartCoverSystemC_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Cpp_CoverSystemV2_eventTryStartCoverSystemC_Parms), &Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_ReturnWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_DebugIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoverSystem" },
		{ "CPP_Default_DebugIndex", "0" },
		{ "DisplayName", "Try Start Cover System" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "TryStartCoverSystemC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::Cpp_CoverSystemV2_eventTryStartCoverSystemC_Parms), Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics
	{
		struct Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms
		{
			bool IsCrouch;
			int32 DirectionState;
			float PerDirectionInterpSpeed;
			float MovementInterpSpeed;
			float SmoothAxisInterpSpeed;
		};
		static void NewProp_IsCrouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCrouch;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DirectionState;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerDirectionInterpSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementInterpSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothAxisInterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_IsCrouch_SetBit(void* Obj)
	{
		((Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms*)Obj)->IsCrouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_IsCrouch = { "IsCrouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms), &Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_IsCrouch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_DirectionState = { "DirectionState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms, DirectionState), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_PerDirectionInterpSpeed = { "PerDirectionInterpSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms, PerDirectionInterpSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_MovementInterpSpeed = { "MovementInterpSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms, MovementInterpSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_SmoothAxisInterpSpeed = { "SmoothAxisInterpSpeed", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms, SmoothAxisInterpSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_IsCrouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_DirectionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_PerDirectionInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_MovementInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::NewProp_SmoothAxisInterpSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "PerDirectionInterpSpeed, MovementInterpSpeed, SmoothAxisInterpSpeed" },
		{ "Category", "CoverSystem" },
		{ "CPP_Default_DirectionState", "0" },
		{ "CPP_Default_IsCrouch", "false" },
		{ "CPP_Default_MovementInterpSpeed", "10.000000" },
		{ "CPP_Default_PerDirectionInterpSpeed", "10.000000" },
		{ "CPP_Default_SmoothAxisInterpSpeed", "8.000000" },
		{ "DisplayName", "Update Direction Values" },
		{ "Keywords", "Cover System" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_CoverSystemV2, nullptr, "UpdateDirectionValuesC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::Cpp_CoverSystemV2_eventUpdateDirectionValuesC_Parms), Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCpp_CoverSystemV2);
	UClass* Z_Construct_UClass_UCpp_CoverSystemV2_NoRegister()
	{
		return UCpp_CoverSystemV2::StaticClass();
	}
	struct Z_Construct_UClass_UCpp_CoverSystemV2_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefCapSizeC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefCapSizeC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartCoverC_MetaData[];
#endif
		static void NewProp_StartCoverC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StartCoverC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanMoveLeftRightC_MetaData[];
#endif
		static void NewProp_CanMoveLeftRightC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanMoveLeftRightC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaPerDirectionC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaPerDirectionC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirectionSmoothC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDirectionSmoothC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirectionAxisC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDirectionAxisC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisSmoothC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisSmoothC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedWallNormalC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedWallNormalC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothOffsetToWallC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothOffsetToWallC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TConfigS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TConfigS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallPullingStrengthC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WallPullingStrengthC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapRadiusDurningCoverC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapRadiusDurningCoverC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSmoothingNormalsC_MetaData[];
#endif
		static void NewProp_UseSmoothingNormalsC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSmoothingNormalsC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceDebugIndexC_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TraceDebugIndexC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCpp_CoverSystemV2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCpp_CoverSystemV2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_CheckCanStartMoveC, "CheckCanStartMoveC" }, // 2054708235
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_ConvertWallToCapPositionC, "ConvertWallToCapPositionC" }, // 2079171779
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_FinishCoverModeC, "FinishCoverModeC" }, // 2152895280
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_MoveCharToWallC, "MoveCharToWallC" }, // 443801115
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_SetAxisValuesForCpp, "SetAxisValuesForCpp" }, // 1323628939
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_SmoothWallNormalC, "SmoothWallNormalC" }, // 2844058360
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_StartCoverModeC, "StartCoverModeC" }, // 3816713058
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_TryStartCoverSystemC, "TryStartCoverSystemC" }, // 2998417003
		{ &Z_Construct_UFunction_UCpp_CoverSystemV2_UpdateDirectionValuesC, "UpdateDirectionValuesC" }, // 3974878968
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Cpp_CoverSystemV2.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CharC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "Comment", "//References Variables\n" },
		{ "DisplayName", "CharC" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "ToolTip", "References Variables" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CharC = { "CharC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_CoverSystemV2, CharC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CharC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CharC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_DefCapSizeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "DisplayName", "DefCapSize" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_DefCapSizeC = { "DefCapSizeC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_CoverSystemV2, DefCapSizeC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_DefCapSizeC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_DefCapSizeC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_StartCoverC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "Comment", "//System Variables\n" },
		{ "DisplayName", "StartCover" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "ToolTip", "System Variables" },
	};
#endif
	void Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_StartCoverC_SetBit(void* Obj)
	{
		((UCpp_CoverSystemV2*)Obj)->StartCoverC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_StartCoverC = { "StartCoverC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCpp_CoverSystemV2), &Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_StartCoverC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_StartCoverC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_StartCoverC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CanMoveLeftRightC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "CanMoveLeftRight" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	void Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CanMoveLeftRightC_SetBit(void* Obj)
	{
		((UCpp_CoverSystemV2*)Obj)->CanMoveLeftRightC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CanMoveLeftRightC = { "CanMoveLeftRightC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCpp_CoverSystemV2), &Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CanMoveLeftRightC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CanMoveLeftRightC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CanMoveLeftRightC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AlphaPerDirectionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "AlphaPerDirection" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AlphaPerDirectionC = { "AlphaPerDirectionC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_CoverSystemV2, AlphaPerDirectionC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AlphaPerDirectionC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AlphaPerDirectionC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionSmoothC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "MoveDirectionSmooth" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionSmoothC = { "MoveDirectionSmoothC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_CoverSystemV2, MoveDirectionSmoothC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionSmoothC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionSmoothC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionAxisC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "MoveDirectionAxis" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionAxisC = { "MoveDirectionAxisC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_CoverSystemV2, MoveDirectionAxisC), METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionAxisC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionAxisC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AxisSmoothC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "DirectionAxisSmooth" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AxisSmoothC = { "AxisSmoothC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_CoverSystemV2, AxisSmoothC), METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AxisSmoothC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AxisSmoothC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CachedWallNormalC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "CachedWallNormal" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CachedWallNormalC = { "CachedWallNormalC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_CoverSystemV2, CachedWallNormalC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CachedWallNormalC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CachedWallNormalC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_SmoothOffsetToWallC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "CoverSystem" },
		{ "DisplayName", "SmoothOffsetToWall" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_SmoothOffsetToWallC = { "SmoothOffsetToWallC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_CoverSystemV2, SmoothOffsetToWallC), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_SmoothOffsetToWallC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_SmoothOffsetToWallC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TConfigS_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "Comment", "//Config Variables\n" },
		{ "DisplayName", "TraceConfigWhenNotCover" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
		{ "ToolTip", "Config Variables" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TConfigS = { "TConfigS", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_CoverSystemV2, TConfigS), Z_Construct_UScriptStruct_FCoverTraceStartConfig, METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TConfigS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TConfigS_MetaData)) }; // 4024281908
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_WallPullingStrengthC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "WallPullingStrength" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_WallPullingStrengthC = { "WallPullingStrengthC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_CoverSystemV2, WallPullingStrengthC), METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_WallPullingStrengthC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_WallPullingStrengthC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CapRadiusDurningCoverC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "CapRadiusDurningCover" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CapRadiusDurningCoverC = { "CapRadiusDurningCoverC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_CoverSystemV2, CapRadiusDurningCoverC), METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CapRadiusDurningCoverC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CapRadiusDurningCoverC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_UseSmoothingNormalsC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "UseSmoothingNormals" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	void Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_UseSmoothingNormalsC_SetBit(void* Obj)
	{
		((UCpp_CoverSystemV2*)Obj)->UseSmoothingNormalsC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_UseSmoothingNormalsC = { "UseSmoothingNormalsC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCpp_CoverSystemV2), &Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_UseSmoothingNormalsC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_UseSmoothingNormalsC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_UseSmoothingNormalsC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TraceDebugIndexC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "TraceDebugIndex" },
		{ "ModuleRelativePath", "Public/Cpp_CoverSystemV2.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TraceDebugIndexC = { "TraceDebugIndexC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCpp_CoverSystemV2, TraceDebugIndexC), METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TraceDebugIndexC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TraceDebugIndexC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCpp_CoverSystemV2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CharC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_DefCapSizeC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_StartCoverC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CanMoveLeftRightC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AlphaPerDirectionC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionSmoothC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_MoveDirectionAxisC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_AxisSmoothC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CachedWallNormalC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_SmoothOffsetToWallC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TConfigS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_WallPullingStrengthC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_CapRadiusDurningCoverC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_UseSmoothingNormalsC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_CoverSystemV2_Statics::NewProp_TraceDebugIndexC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCpp_CoverSystemV2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCpp_CoverSystemV2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCpp_CoverSystemV2_Statics::ClassParams = {
		&UCpp_CoverSystemV2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCpp_CoverSystemV2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_CoverSystemV2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCpp_CoverSystemV2()
	{
		if (!Z_Registration_Info_UClass_UCpp_CoverSystemV2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCpp_CoverSystemV2.OuterSingleton, Z_Construct_UClass_UCpp_CoverSystemV2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCpp_CoverSystemV2.OuterSingleton;
	}
	template<> HELPFULFUNCTIONS_API UClass* StaticClass<UCpp_CoverSystemV2>()
	{
		return UCpp_CoverSystemV2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCpp_CoverSystemV2);
	UCpp_CoverSystemV2::~UCpp_CoverSystemV2() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_Statics::ScriptStructInfo[] = {
		{ FCoverTraceStartConfig::StaticStruct, Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics::NewStructOps, TEXT("CoverTraceStartConfig"), &Z_Registration_Info_UScriptStruct_CoverTraceStartConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoverTraceStartConfig), 4024281908U) },
		{ FCoverSystemMoveConfig::StaticStruct, Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics::NewStructOps, TEXT("CoverSystemMoveConfig"), &Z_Registration_Info_UScriptStruct_CoverSystemMoveConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoverSystemMoveConfig), 3876971222U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCpp_CoverSystemV2, UCpp_CoverSystemV2::StaticClass, TEXT("UCpp_CoverSystemV2"), &Z_Registration_Info_UClass_UCpp_CoverSystemV2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCpp_CoverSystemV2), 2455339243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_1113875537(TEXT("/Script/HelpfulFunctions"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
