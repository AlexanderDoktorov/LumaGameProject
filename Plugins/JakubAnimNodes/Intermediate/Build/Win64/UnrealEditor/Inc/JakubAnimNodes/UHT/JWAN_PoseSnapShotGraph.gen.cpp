// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodes/Public/JWAN_PoseSnapShotGraph.h"
#include "JakubAnimNodesTool/Public/JWAN_PoseSnapShotLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJWAN_PoseSnapShotGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_PoseSnapShotGraph();
	JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_PoseSnapShotGraph_NoRegister();
	JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic();
	UPackage* Z_Construct_UPackage__Script_JakubAnimNodes();
// End Cross Module References
	void UJWAN_PoseSnapShotGraph::StaticRegisterNativesUJWAN_PoseSnapShotGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJWAN_PoseSnapShotGraph);
	UClass* Z_Construct_UClass_UJWAN_PoseSnapShotGraph_NoRegister()
	{
		return UJWAN_PoseSnapShotGraph::StaticClass();
	}
	struct Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This will be displayed in the AnimGraph\n" },
		{ "IncludePath", "JWAN_PoseSnapShotGraph.h" },
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotGraph.h" },
		{ "ToolTip", "This will be displayed in the AnimGraph" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJWAN_PoseSnapShotGraph, Node), Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic, METADATA_PARAMS(Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::NewProp_Node_MetaData)) }; // 3381589646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJWAN_PoseSnapShotGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::ClassParams = {
		&UJWAN_PoseSnapShotGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJWAN_PoseSnapShotGraph()
	{
		if (!Z_Registration_Info_UClass_UJWAN_PoseSnapShotGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJWAN_PoseSnapShotGraph.OuterSingleton, Z_Construct_UClass_UJWAN_PoseSnapShotGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJWAN_PoseSnapShotGraph.OuterSingleton;
	}
	template<> JAKUBANIMNODES_API UClass* StaticClass<UJWAN_PoseSnapShotGraph>()
	{
		return UJWAN_PoseSnapShotGraph::StaticClass();
	}
	UJWAN_PoseSnapShotGraph::UJWAN_PoseSnapShotGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJWAN_PoseSnapShotGraph);
	UJWAN_PoseSnapShotGraph::~UJWAN_PoseSnapShotGraph() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_PoseSnapShotGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_PoseSnapShotGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJWAN_PoseSnapShotGraph, UJWAN_PoseSnapShotGraph::StaticClass, TEXT("UJWAN_PoseSnapShotGraph"), &Z_Registration_Info_UClass_UJWAN_PoseSnapShotGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJWAN_PoseSnapShotGraph), 1852966160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_PoseSnapShotGraph_h_100972820(TEXT("/Script/JakubAnimNodes"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_PoseSnapShotGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_PoseSnapShotGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
