// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodesTool/Public/JWAN_PoseSnapShotLogic.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJWAN_PoseSnapShotLogic() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic();
	UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool();
// End Cross Module References

static_assert(std::is_polymorphic<FJWAN_PoseSnapShotLogic>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FJWAN_PoseSnapShotLogic cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic;
class UScriptStruct* FJWAN_PoseSnapShotLogic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("JWAN_PoseSnapShotLogic"));
	}
	return Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<FJWAN_PoseSnapShotLogic>()
{
	return FJWAN_PoseSnapShotLogic::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveBonesNameToPose_MetaData[];
#endif
		static void NewProp_SaveBonesNameToPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveBonesNameToPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotLogic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJWAN_PoseSnapShotLogic>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "// Input pose link\n" },
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotLogic.h" },
		{ "ToolTip", "Input pose link" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJWAN_PoseSnapShotLogic, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SourcePose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SnapshotName_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "Comment", "/* This information is currently not using */" },
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotLogic.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "This information is currently not using" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJWAN_PoseSnapShotLogic, SnapshotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SnapshotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SaveBonesNameToPose_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "Comment", "/* Chech this if you want to node save in PoseSnapshot bones name. Without this Eveluate saving only bone transforms */" },
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotLogic.h" },
		{ "ToolTip", "Chech this if you want to node save in PoseSnapshot bones name. Without this Eveluate saving only bone transforms" },
	};
#endif
	void Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SaveBonesNameToPose_SetBit(void* Obj)
	{
		((FJWAN_PoseSnapShotLogic*)Obj)->SaveBonesNameToPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SaveBonesNameToPose = { "SaveBonesNameToPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJWAN_PoseSnapShotLogic), &Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SaveBonesNameToPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SaveBonesNameToPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SaveBonesNameToPose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SourcePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SnapshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SaveBonesNameToPose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"JWAN_PoseSnapShotLogic",
		sizeof(FJWAN_PoseSnapShotLogic),
		alignof(FJWAN_PoseSnapShotLogic),
		Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic()
	{
		if (!Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic.InnerSingleton, Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_PoseSnapShotLogic_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_PoseSnapShotLogic_h_Statics::ScriptStructInfo[] = {
		{ FJWAN_PoseSnapShotLogic::StaticStruct, Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewStructOps, TEXT("JWAN_PoseSnapShotLogic"), &Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJWAN_PoseSnapShotLogic), 3381589646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_PoseSnapShotLogic_h_2791173378(TEXT("/Script/JakubAnimNodesTool"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_PoseSnapShotLogic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_PoseSnapShotLogic_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
