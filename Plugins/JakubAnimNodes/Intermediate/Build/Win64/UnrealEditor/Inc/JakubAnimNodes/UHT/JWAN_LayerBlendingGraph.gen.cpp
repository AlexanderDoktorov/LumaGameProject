// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodes/Public/JWAN_LayerBlendingGraph.h"
#include "JakubAnimNodesTool/Public/JWAN_LayerBlendingLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJWAN_LayerBlendingGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_LayerBlendingGraph();
	JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_LayerBlendingGraph_NoRegister();
	JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic();
	UPackage* Z_Construct_UPackage__Script_JakubAnimNodes();
// End Cross Module References
	void UJWAN_LayerBlendingGraph::StaticRegisterNativesUJWAN_LayerBlendingGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJWAN_LayerBlendingGraph);
	UClass* Z_Construct_UClass_UJWAN_LayerBlendingGraph_NoRegister()
	{
		return UJWAN_LayerBlendingGraph::StaticClass();
	}
	struct Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics
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
	UObject* (*const Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "JWAN_LayerBlendingGraph.h" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJWAN_LayerBlendingGraph, Node), Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic, METADATA_PARAMS(Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::NewProp_Node_MetaData)) }; // 704551340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJWAN_LayerBlendingGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::ClassParams = {
		&UJWAN_LayerBlendingGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJWAN_LayerBlendingGraph()
	{
		if (!Z_Registration_Info_UClass_UJWAN_LayerBlendingGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJWAN_LayerBlendingGraph.OuterSingleton, Z_Construct_UClass_UJWAN_LayerBlendingGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJWAN_LayerBlendingGraph.OuterSingleton;
	}
	template<> JAKUBANIMNODES_API UClass* StaticClass<UJWAN_LayerBlendingGraph>()
	{
		return UJWAN_LayerBlendingGraph::StaticClass();
	}
	UJWAN_LayerBlendingGraph::UJWAN_LayerBlendingGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJWAN_LayerBlendingGraph);
	UJWAN_LayerBlendingGraph::~UJWAN_LayerBlendingGraph() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJWAN_LayerBlendingGraph, UJWAN_LayerBlendingGraph::StaticClass, TEXT("UJWAN_LayerBlendingGraph"), &Z_Registration_Info_UClass_UJWAN_LayerBlendingGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJWAN_LayerBlendingGraph), 3067406630U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_1856290199(TEXT("/Script/JakubAnimNodes"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_LayerBlendingGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
