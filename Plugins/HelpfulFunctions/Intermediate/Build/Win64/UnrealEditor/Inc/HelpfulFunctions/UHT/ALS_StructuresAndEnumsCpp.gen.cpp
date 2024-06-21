// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALS_StructuresAndEnumsCpp() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC();
	HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform();
	HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCMC_LedgeC();
	HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCMC_SingleClimbPointC();
	UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_CMC_ActionTypeC;
	static UEnum* CMC_ActionTypeC_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_CMC_ActionTypeC.OuterSingleton)
		{
			Z_Registration_Info_UEnum_CMC_ActionTypeC.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CMC_ActionTypeC"));
		}
		return Z_Registration_Info_UEnum_CMC_ActionTypeC.OuterSingleton;
	}
	template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CMC_ActionTypeC>()
	{
		return CMC_ActionTypeC_StaticEnum();
	}
	struct Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enumerators[] = {
		{ "CMC_ActionTypeC::None", (int64)CMC_ActionTypeC::None },
		{ "CMC_ActionTypeC::ShortMove", (int64)CMC_ActionTypeC::ShortMove },
		{ "CMC_ActionTypeC::CornerOuter", (int64)CMC_ActionTypeC::CornerOuter },
		{ "CMC_ActionTypeC::CornerInner", (int64)CMC_ActionTypeC::CornerInner },
		{ "CMC_ActionTypeC::Turn180", (int64)CMC_ActionTypeC::Turn180 },
		{ "CMC_ActionTypeC::JumpNextLedge", (int64)CMC_ActionTypeC::JumpNextLedge },
		{ "CMC_ActionTypeC::JumpBackToNextLedge", (int64)CMC_ActionTypeC::JumpBackToNextLedge },
		{ "CMC_ActionTypeC::ForwardMove", (int64)CMC_ActionTypeC::ForwardMove },
		{ "CMC_ActionTypeC::PullUpToNarrowFloor", (int64)CMC_ActionTypeC::PullUpToNarrowFloor },
		{ "CMC_ActionTypeC::DropToNarrowFloor", (int64)CMC_ActionTypeC::DropToNarrowFloor },
		{ "CMC_ActionTypeC::DropFromNarrowFloor", (int64)CMC_ActionTypeC::DropFromNarrowFloor },
		{ "CMC_ActionTypeC::JumpToBeamSwinging", (int64)CMC_ActionTypeC::JumpToBeamSwinging },
		{ "CMC_ActionTypeC::JumpForwardToBeam", (int64)CMC_ActionTypeC::JumpForwardToBeam },
		{ "CMC_ActionTypeC::StartHoldingLedge", (int64)CMC_ActionTypeC::StartHoldingLedge },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "CornerInner.Comment", "/**\n * \n */" },
		{ "CornerInner.Name", "CMC_ActionTypeC::CornerInner" },
		{ "CornerOuter.Comment", "/**\n * \n */" },
		{ "CornerOuter.Name", "CMC_ActionTypeC::CornerOuter" },
		{ "DropFromNarrowFloor.Comment", "/**\n * \n */" },
		{ "DropFromNarrowFloor.Name", "CMC_ActionTypeC::DropFromNarrowFloor" },
		{ "DropToNarrowFloor.Comment", "/**\n * \n */" },
		{ "DropToNarrowFloor.Name", "CMC_ActionTypeC::DropToNarrowFloor" },
		{ "ForwardMove.Comment", "/**\n * \n */" },
		{ "ForwardMove.Name", "CMC_ActionTypeC::ForwardMove" },
		{ "JumpBackToNextLedge.Comment", "/**\n * \n */" },
		{ "JumpBackToNextLedge.Name", "CMC_ActionTypeC::JumpBackToNextLedge" },
		{ "JumpForwardToBeam.Comment", "/**\n * \n */" },
		{ "JumpForwardToBeam.Name", "CMC_ActionTypeC::JumpForwardToBeam" },
		{ "JumpNextLedge.Comment", "/**\n * \n */" },
		{ "JumpNextLedge.Name", "CMC_ActionTypeC::JumpNextLedge" },
		{ "JumpToBeamSwinging.Comment", "/**\n * \n */" },
		{ "JumpToBeamSwinging.Name", "CMC_ActionTypeC::JumpToBeamSwinging" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
		{ "None.Comment", "/**\n * \n */" },
		{ "None.Name", "CMC_ActionTypeC::None" },
		{ "PullUpToNarrowFloor.Comment", "/**\n * \n */" },
		{ "PullUpToNarrowFloor.Name", "CMC_ActionTypeC::PullUpToNarrowFloor" },
		{ "ShortMove.Comment", "/**\n * \n */" },
		{ "ShortMove.Name", "CMC_ActionTypeC::ShortMove" },
		{ "StartHoldingLedge.Comment", "/**\n * \n */" },
		{ "StartHoldingLedge.Name", "CMC_ActionTypeC::StartHoldingLedge" },
		{ "Turn180.Comment", "/**\n * \n */" },
		{ "Turn180.Name", "CMC_ActionTypeC::Turn180" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
		nullptr,
		"CMC_ActionTypeC",
		"CMC_ActionTypeC",
		Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC()
	{
		if (!Z_Registration_Info_UEnum_CMC_ActionTypeC.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CMC_ActionTypeC.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_CMC_ActionTypeC.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCALS_ComponentAndTransform>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCALS_ComponentAndTransform cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform;
class UScriptStruct* FCALS_ComponentAndTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_ComponentAndTransform"));
	}
	return Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCALS_ComponentAndTransform>()
{
	return FCALS_ComponentAndTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCALS_ComponentAndTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCALS_ComponentAndTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "Transformation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCALS_ComponentAndTransform, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Component,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CALS_ComponentAndTransform",
		sizeof(FCALS_ComponentAndTransform),
		alignof(FCALS_ComponentAndTransform),
		Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.InnerSingleton, Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCMC_SingleClimbPointC>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCMC_SingleClimbPointC cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC;
class UScriptStruct* FCMC_SingleClimbPointC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CMC_SingleClimbPointC"));
	}
	return Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCMC_SingleClimbPointC>()
{
	return FCMC_SingleClimbPointC::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidPoint_MetaData[];
#endif
		static void NewProp_ValidPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ValidPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCMC_SingleClimbPointC>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint_SetBit(void* Obj)
	{
		((FCMC_SingleClimbPointC*)Obj)->ValidPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint = { "ValidPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCMC_SingleClimbPointC), &Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCMC_SingleClimbPointC, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCMC_SingleClimbPointC, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ActorTransform_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCMC_SingleClimbPointC, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ActorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ActorTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCMC_SingleClimbPointC, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ActorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Component,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CMC_SingleClimbPointC",
		sizeof(FCMC_SingleClimbPointC),
		alignof(FCMC_SingleClimbPointC),
		Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCMC_SingleClimbPointC()
	{
		if (!Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.InnerSingleton, Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCMC_LedgeC>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCMC_LedgeC cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CMC_LedgeC;
class UScriptStruct* FCMC_LedgeC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CMC_LedgeC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CMC_LedgeC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCMC_LedgeC, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CMC_LedgeC"));
	}
	return Z_Registration_Info_UScriptStruct_CMC_LedgeC.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCMC_LedgeC>()
{
	return FCMC_LedgeC::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCMC_LedgeC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCMC_LedgeC>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_LeftPoint_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_LeftPoint = { "LeftPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCMC_LedgeC, LeftPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_LeftPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_LeftPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_RightPoint_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_RightPoint = { "RightPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCMC_LedgeC, RightPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_RightPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_RightPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Origin_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCMC_LedgeC, Origin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCMC_LedgeC, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_LeftPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_RightPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Component,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CMC_LedgeC",
		sizeof(FCMC_LedgeC),
		alignof(FCMC_LedgeC),
		Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCMC_LedgeC()
	{
		if (!Z_Registration_Info_UScriptStruct_CMC_LedgeC.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CMC_LedgeC.InnerSingleton, Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CMC_LedgeC.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::EnumInfo[] = {
		{ CMC_ActionTypeC_StaticEnum, TEXT("CMC_ActionTypeC"), &Z_Registration_Info_UEnum_CMC_ActionTypeC, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 232939966U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::ScriptStructInfo[] = {
		{ FCALS_ComponentAndTransform::StaticStruct, Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewStructOps, TEXT("CALS_ComponentAndTransform"), &Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCALS_ComponentAndTransform), 3722672540U) },
		{ FCMC_SingleClimbPointC::StaticStruct, Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewStructOps, TEXT("CMC_SingleClimbPointC"), &Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCMC_SingleClimbPointC), 2223195746U) },
		{ FCMC_LedgeC::StaticStruct, Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewStructOps, TEXT("CMC_LedgeC"), &Z_Registration_Info_UScriptStruct_CMC_LedgeC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCMC_LedgeC), 3930872991U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_3654877197(TEXT("/Script/HelpfulFunctions"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
