// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALS_StructuresAndEnumsCpp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HELPFULFUNCTIONS_ALS_StructuresAndEnumsCpp_generated_h
#error "ALS_StructuresAndEnumsCpp.generated.h already included, missing '#pragma once' in ALS_StructuresAndEnumsCpp.h"
#endif
#define HELPFULFUNCTIONS_ALS_StructuresAndEnumsCpp_generated_h

#define FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCALS_ComponentAndTransform_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCALS_ComponentAndTransform>();

#define FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCMC_SingleClimbPointC_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCMC_SingleClimbPointC>();

#define FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCMC_LedgeC_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCMC_LedgeC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_StructuresAndEnumsCpp_h


#define FOREACH_ENUM_CMC_ACTIONTYPEC(op) \
	op(CMC_ActionTypeC::None) \
	op(CMC_ActionTypeC::ShortMove) \
	op(CMC_ActionTypeC::CornerOuter) \
	op(CMC_ActionTypeC::CornerInner) \
	op(CMC_ActionTypeC::Turn180) \
	op(CMC_ActionTypeC::JumpNextLedge) \
	op(CMC_ActionTypeC::JumpBackToNextLedge) \
	op(CMC_ActionTypeC::ForwardMove) \
	op(CMC_ActionTypeC::PullUpToNarrowFloor) \
	op(CMC_ActionTypeC::DropToNarrowFloor) \
	op(CMC_ActionTypeC::DropFromNarrowFloor) \
	op(CMC_ActionTypeC::JumpToBeamSwinging) \
	op(CMC_ActionTypeC::JumpForwardToBeam) \
	op(CMC_ActionTypeC::StartHoldingLedge) 

enum class CMC_ActionTypeC : uint8;
template<> struct TIsUEnumClass<CMC_ActionTypeC> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CMC_ActionTypeC>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
