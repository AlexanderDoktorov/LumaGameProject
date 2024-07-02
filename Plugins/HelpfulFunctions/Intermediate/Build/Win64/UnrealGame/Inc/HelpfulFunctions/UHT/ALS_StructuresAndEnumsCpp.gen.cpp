// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALS_StructuresAndEnumsCpp() {}

// Begin Cross Module References
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

// Begin Enum CMC_ActionTypeC
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
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
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
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
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CMC_ActionTypeC",
	"CMC_ActionTypeC",
	Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC()
{
	if (!Z_Registration_Info_UEnum_CMC_ActionTypeC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CMC_ActionTypeC.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CMC_ActionTypeC_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CMC_ActionTypeC.InnerSingleton;
}
// End Enum CMC_ActionTypeC

// Begin ScriptStruct FCALS_ComponentAndTransform
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Transformation" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "Transformation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCALS_ComponentAndTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALS_ComponentAndTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALS_ComponentAndTransform, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CALS_ComponentAndTransform",
	Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::PropPointers),
	sizeof(FCALS_ComponentAndTransform),
	alignof(FCALS_ComponentAndTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform()
{
	if (!Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.InnerSingleton, Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform.InnerSingleton;
}
// End ScriptStruct FCALS_ComponentAndTransform

// Begin ScriptStruct FCMC_SingleClimbPointC
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidPoint_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ValidPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ValidPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCMC_SingleClimbPointC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint_SetBit(void* Obj)
{
	((FCMC_SingleClimbPointC*)Obj)->ValidPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint = { "ValidPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCMC_SingleClimbPointC), &Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidPoint_MetaData), NewProp_ValidPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_SingleClimbPointC, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_SingleClimbPointC, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_SingleClimbPointC, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTransform_MetaData), NewProp_ActorTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_SingleClimbPointC, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ValidPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_ActorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CMC_SingleClimbPointC",
	Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::PropPointers),
	sizeof(FCMC_SingleClimbPointC),
	alignof(FCMC_SingleClimbPointC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCMC_SingleClimbPointC()
{
	if (!Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.InnerSingleton, Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC.InnerSingleton;
}
// End ScriptStruct FCMC_SingleClimbPointC

// Begin ScriptStruct FCMC_LedgeC
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftPoint_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightPoint_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "Category", "ClimbingPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALS_StructuresAndEnumsCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCMC_LedgeC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_LeftPoint = { "LeftPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_LedgeC, LeftPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftPoint_MetaData), NewProp_LeftPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_RightPoint = { "RightPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_LedgeC, RightPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightPoint_MetaData), NewProp_RightPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_LedgeC, Origin), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCMC_LedgeC, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_LeftPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_RightPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CMC_LedgeC",
	Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::PropPointers),
	sizeof(FCMC_LedgeC),
	alignof(FCMC_LedgeC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCMC_LedgeC()
{
	if (!Z_Registration_Info_UScriptStruct_CMC_LedgeC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CMC_LedgeC.InnerSingleton, Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CMC_LedgeC.InnerSingleton;
}
// End ScriptStruct FCMC_LedgeC

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ CMC_ActionTypeC_StaticEnum, TEXT("CMC_ActionTypeC"), &Z_Registration_Info_UEnum_CMC_ActionTypeC, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3552433085U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCALS_ComponentAndTransform::StaticStruct, Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics::NewStructOps, TEXT("CALS_ComponentAndTransform"), &Z_Registration_Info_UScriptStruct_CALS_ComponentAndTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCALS_ComponentAndTransform), 954340455U) },
		{ FCMC_SingleClimbPointC::StaticStruct, Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics::NewStructOps, TEXT("CMC_SingleClimbPointC"), &Z_Registration_Info_UScriptStruct_CMC_SingleClimbPointC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCMC_SingleClimbPointC), 1225395477U) },
		{ FCMC_LedgeC::StaticStruct, Z_Construct_UScriptStruct_FCMC_LedgeC_Statics::NewStructOps, TEXT("CMC_LedgeC"), &Z_Registration_Info_UScriptStruct_CMC_LedgeC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCMC_LedgeC), 38286648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_3829018803(TEXT("/Script/HelpfulFunctions"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
