// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodes/Public/MyAnimGraphNode.h"
#include "JakubAnimNodesTool/Public/MyAnimNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAnimGraphNode() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendListBase();
	JAKUBANIMNODES_API UClass* Z_Construct_UClass_UAnimGraphNode_LayeredBone();
	JAKUBANIMNODES_API UClass* Z_Construct_UClass_UAnimGraphNode_LayeredBone_NoRegister();
	JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LayeredBone();
	UPackage* Z_Construct_UPackage__Script_JakubAnimNodes();
// End Cross Module References
	void UAnimGraphNode_LayeredBone::StaticRegisterNativesUAnimGraphNode_LayeredBone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_LayeredBone);
	UClass* Z_Construct_UClass_UAnimGraphNode_LayeredBone_NoRegister()
	{
		return UAnimGraphNode_LayeredBone::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_BlendListBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyAnimGraphNode.h" },
		{ "ModuleRelativePath", "Public/MyAnimGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/MyAnimGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_LayeredBone, Node), Z_Construct_UScriptStruct_FAnimNode_LayeredBone, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::NewProp_Node_MetaData)) }; // 1511550512
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_LayeredBone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::ClassParams = {
		&UAnimGraphNode_LayeredBone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_LayeredBone()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_LayeredBone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_LayeredBone.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_LayeredBone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_LayeredBone.OuterSingleton;
	}
	template<> JAKUBANIMNODES_API UClass* StaticClass<UAnimGraphNode_LayeredBone>()
	{
		return UAnimGraphNode_LayeredBone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_LayeredBone);
	UAnimGraphNode_LayeredBone::~UAnimGraphNode_LayeredBone() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_LayeredBone, UAnimGraphNode_LayeredBone::StaticClass, TEXT("UAnimGraphNode_LayeredBone"), &Z_Registration_Info_UClass_UAnimGraphNode_LayeredBone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_LayeredBone), 708769452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_2925305635(TEXT("/Script/JakubAnimNodes"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_MyAnimGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
