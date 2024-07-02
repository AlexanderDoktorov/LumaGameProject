// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/ALS_BaseAI_CharacterCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALS_BaseAI_CharacterCpp() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AALS_BaseAI_CharacterCpp();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_AALS_BaseAI_CharacterCpp_NoRegister();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Gait();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Stance();
HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALSMovementSettings();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Enum CALS_Gait
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_Gait;
static UEnum* CALS_Gait_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_Gait.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_Gait.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_Gait"));
	}
	return Z_Registration_Info_UEnum_CALS_Gait.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_Gait>()
{
	return CALS_Gait_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "Running.DisplayName", "Running" },
		{ "Running.Name", "CALS_Gait::Running" },
		{ "Sprinting.DisplayName", "Sprinting" },
		{ "Sprinting.Name", "CALS_Gait::Sprinting" },
		{ "Walking.DisplayName", "Walking" },
		{ "Walking.Name", "CALS_Gait::Walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_Gait::Walking", (int64)CALS_Gait::Walking },
		{ "CALS_Gait::Running", (int64)CALS_Gait::Running },
		{ "CALS_Gait::Sprinting", (int64)CALS_Gait::Sprinting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_Gait",
	"CALS_Gait",
	Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Gait()
{
	if (!Z_Registration_Info_UEnum_CALS_Gait.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_Gait.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_Gait_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_Gait.InnerSingleton;
}
// End Enum CALS_Gait

// Begin Enum CALS_MovementState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_MovementState;
static UEnum* CALS_MovementState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_MovementState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_MovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_MovementState"));
	}
	return Z_Registration_Info_UEnum_CALS_MovementState.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_MovementState>()
{
	return CALS_MovementState_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crawl.DisplayName", "Crawl" },
		{ "Crawl.Name", "CALS_MovementState::Crawl" },
		{ "Grounded.DisplayName", "Grounded" },
		{ "Grounded.Name", "CALS_MovementState::Grounded" },
		{ "InAir.DisplayName", "In Air" },
		{ "InAir.Name", "CALS_MovementState::InAir" },
		{ "Mantling.DisplayName", "Mantling" },
		{ "Mantling.Name", "CALS_MovementState::Mantling" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "CALS_MovementState::None" },
		{ "Prone.DisplayName", "Prone" },
		{ "Prone.Name", "CALS_MovementState::Prone" },
		{ "Ragdoll.DisplayName", "Ragdoll" },
		{ "Ragdoll.Name", "CALS_MovementState::Ragdoll" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_MovementState::None", (int64)CALS_MovementState::None },
		{ "CALS_MovementState::Grounded", (int64)CALS_MovementState::Grounded },
		{ "CALS_MovementState::InAir", (int64)CALS_MovementState::InAir },
		{ "CALS_MovementState::Mantling", (int64)CALS_MovementState::Mantling },
		{ "CALS_MovementState::Ragdoll", (int64)CALS_MovementState::Ragdoll },
		{ "CALS_MovementState::Crawl", (int64)CALS_MovementState::Crawl },
		{ "CALS_MovementState::Prone", (int64)CALS_MovementState::Prone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_MovementState",
	"CALS_MovementState",
	Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState()
{
	if (!Z_Registration_Info_UEnum_CALS_MovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_MovementState.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_MovementState.InnerSingleton;
}
// End Enum CALS_MovementState

// Begin Enum CALS_OverlayState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_OverlayState;
static UEnum* CALS_OverlayState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_OverlayState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_OverlayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_OverlayState"));
	}
	return Z_Registration_Info_UEnum_CALS_OverlayState.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_OverlayState>()
{
	return CALS_OverlayState_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Axe.Name", "CALS_OverlayState::Axe" },
		{ "Barrel.Name", "CALS_OverlayState::Barrel" },
		{ "Binoculars.Name", "CALS_OverlayState::Binoculars" },
		{ "BlueprintType", "true" },
		{ "Bow.Name", "CALS_OverlayState::Bow" },
		{ "Box.Name", "CALS_OverlayState::Box" },
		{ "Default.Name", "CALS_OverlayState::Default" },
		{ "Feminine.Name", "CALS_OverlayState::Feminine" },
		{ "HandsTied.Name", "CALS_OverlayState::HandsTied" },
		{ "Injured.Name", "CALS_OverlayState::Injured" },
		{ "Knife.Name", "CALS_OverlayState::Knife" },
		{ "Masculine.Name", "CALS_OverlayState::Masculine" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "Pistol1H.Name", "CALS_OverlayState::Pistol1H" },
		{ "Pistol2H.Name", "CALS_OverlayState::Pistol2H" },
		{ "Rifle.Name", "CALS_OverlayState::Rifle" },
		{ "Rope.Name", "CALS_OverlayState::Rope" },
		{ "Torch.Name", "CALS_OverlayState::Torch" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_OverlayState::Default", (int64)CALS_OverlayState::Default },
		{ "CALS_OverlayState::Masculine", (int64)CALS_OverlayState::Masculine },
		{ "CALS_OverlayState::Feminine", (int64)CALS_OverlayState::Feminine },
		{ "CALS_OverlayState::Injured", (int64)CALS_OverlayState::Injured },
		{ "CALS_OverlayState::HandsTied", (int64)CALS_OverlayState::HandsTied },
		{ "CALS_OverlayState::Rifle", (int64)CALS_OverlayState::Rifle },
		{ "CALS_OverlayState::Pistol1H", (int64)CALS_OverlayState::Pistol1H },
		{ "CALS_OverlayState::Pistol2H", (int64)CALS_OverlayState::Pistol2H },
		{ "CALS_OverlayState::Bow", (int64)CALS_OverlayState::Bow },
		{ "CALS_OverlayState::Torch", (int64)CALS_OverlayState::Torch },
		{ "CALS_OverlayState::Binoculars", (int64)CALS_OverlayState::Binoculars },
		{ "CALS_OverlayState::Box", (int64)CALS_OverlayState::Box },
		{ "CALS_OverlayState::Barrel", (int64)CALS_OverlayState::Barrel },
		{ "CALS_OverlayState::Rope", (int64)CALS_OverlayState::Rope },
		{ "CALS_OverlayState::Axe", (int64)CALS_OverlayState::Axe },
		{ "CALS_OverlayState::Knife", (int64)CALS_OverlayState::Knife },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_OverlayState",
	"CALS_OverlayState",
	Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState()
{
	if (!Z_Registration_Info_UEnum_CALS_OverlayState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_OverlayState.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_OverlayState.InnerSingleton;
}
// End Enum CALS_OverlayState

// Begin Enum CALS_RotationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_RotationMode;
static UEnum* CALS_RotationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_RotationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_RotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_RotationMode"));
	}
	return Z_Registration_Info_UEnum_CALS_RotationMode.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_RotationMode>()
{
	return CALS_RotationMode_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aiming.Name", "CALS_RotationMode::Aiming" },
		{ "BlueprintType", "true" },
		{ "LookingDirection.Name", "CALS_RotationMode::LookingDirection" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "VelocityDirection.Name", "CALS_RotationMode::VelocityDirection" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_RotationMode::VelocityDirection", (int64)CALS_RotationMode::VelocityDirection },
		{ "CALS_RotationMode::LookingDirection", (int64)CALS_RotationMode::LookingDirection },
		{ "CALS_RotationMode::Aiming", (int64)CALS_RotationMode::Aiming },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_RotationMode",
	"CALS_RotationMode",
	Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode()
{
	if (!Z_Registration_Info_UEnum_CALS_RotationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_RotationMode.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_RotationMode.InnerSingleton;
}
// End Enum CALS_RotationMode

// Begin Enum CALS_Stance
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_Stance;
static UEnum* CALS_Stance_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_Stance.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_Stance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_Stance, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_Stance"));
	}
	return Z_Registration_Info_UEnum_CALS_Stance.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_Stance>()
{
	return CALS_Stance_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crouching.Name", "CALS_Stance::Crouching" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "Standing.Name", "CALS_Stance::Standing" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_Stance::Standing", (int64)CALS_Stance::Standing },
		{ "CALS_Stance::Crouching", (int64)CALS_Stance::Crouching },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_Stance",
	"CALS_Stance",
	Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Stance()
{
	if (!Z_Registration_Info_UEnum_CALS_Stance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_Stance.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_Stance_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_Stance.InnerSingleton;
}
// End Enum CALS_Stance

// Begin Enum CALS_MovementAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_CALS_MovementAction;
static UEnum* CALS_MovementAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_CALS_MovementAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_CALS_MovementAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALS_MovementAction"));
	}
	return Z_Registration_Info_UEnum_CALS_MovementAction.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_MovementAction>()
{
	return CALS_MovementAction_StaticEnum();
}
struct Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GettingUp.Name", "CALS_MovementAction::GettingUp" },
		{ "HighMantle.Name", "CALS_MovementAction::HighMantle" },
		{ "LowMantle.Name", "CALS_MovementAction::LowMantle" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "None.Name", "CALS_MovementAction::None" },
		{ "Rolling.Name", "CALS_MovementAction::Rolling" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CALS_MovementAction::None", (int64)CALS_MovementAction::None },
		{ "CALS_MovementAction::LowMantle", (int64)CALS_MovementAction::LowMantle },
		{ "CALS_MovementAction::HighMantle", (int64)CALS_MovementAction::HighMantle },
		{ "CALS_MovementAction::Rolling", (int64)CALS_MovementAction::Rolling },
		{ "CALS_MovementAction::GettingUp", (int64)CALS_MovementAction::GettingUp },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	"CALS_MovementAction",
	"CALS_MovementAction",
	Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction()
{
	if (!Z_Registration_Info_UEnum_CALS_MovementAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CALS_MovementAction.InnerSingleton, Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_CALS_MovementAction.InnerSingleton;
}
// End Enum CALS_MovementAction

// Begin ScriptStruct FCALSMovementSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CALSMovementSettings;
class UScriptStruct* FCALSMovementSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CALSMovementSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CALSMovementSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCALSMovementSettings, (UObject*)Z_Construct_UPackage__Script_HelpfulFunctions(), TEXT("CALSMovementSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CALSMovementSettings.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<FCALSMovementSettings>()
{
	return FCALSMovementSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCALSMovementSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementCurve_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateCurve_MetaData[] = {
		{ "Category", "Movement Settings" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationRateCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCALSMovementSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALSMovementSettings, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALSMovementSettings, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALSMovementSettings, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::NewProp_MovementCurve = { "MovementCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALSMovementSettings, MovementCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementCurve_MetaData), NewProp_MovementCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::NewProp_RotationRateCurve = { "RotationRateCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCALSMovementSettings, RotationRateCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRateCurve_MetaData), NewProp_RotationRateCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::NewProp_MovementCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::NewProp_RotationRateCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	nullptr,
	&NewStructOps,
	"CALSMovementSettings",
	Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::PropPointers),
	sizeof(FCALSMovementSettings),
	alignof(FCALSMovementSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCALSMovementSettings()
{
	if (!Z_Registration_Info_UScriptStruct_CALSMovementSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CALSMovementSettings.InnerSingleton, Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CALSMovementSettings.InnerSingleton;
}
// End ScriptStruct FCALSMovementSettings

// Begin Class AALS_BaseAI_CharacterCpp Function CalcCanSprint
struct Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics
{
	struct ALS_BaseAI_CharacterCpp_eventCalcCanSprint_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ALS Character" },
		{ "DisplayName", "Can Sprint Fast" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ALS_BaseAI_CharacterCpp_eventCalcCanSprint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseAI_CharacterCpp_eventCalcCanSprint_Parms), &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp, nullptr, "CalcCanSprint", nullptr, nullptr, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::ALS_BaseAI_CharacterCpp_eventCalcCanSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::ALS_BaseAI_CharacterCpp_eventCalcCanSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AALS_BaseAI_CharacterCpp::execCalcCanSprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CalcCanSprint();
	P_NATIVE_END;
}
// End Class AALS_BaseAI_CharacterCpp Function CalcCanSprint

// Begin Class AALS_BaseAI_CharacterCpp Function CalcGroundedRotationRate
struct Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate_Statics
{
	struct ALS_BaseAI_CharacterCpp_eventCalcGroundedRotationRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ALS Character" },
		{ "DisplayName", "Calculate Grounded Rotation Rate Fast" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventCalcGroundedRotationRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp, nullptr, "CalcGroundedRotationRate", nullptr, nullptr, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate_Statics::ALS_BaseAI_CharacterCpp_eventCalcGroundedRotationRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate_Statics::ALS_BaseAI_CharacterCpp_eventCalcGroundedRotationRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AALS_BaseAI_CharacterCpp::execCalcGroundedRotationRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalcGroundedRotationRate();
	P_NATIVE_END;
}
// End Class AALS_BaseAI_CharacterCpp Function CalcGroundedRotationRate

// Begin Class AALS_BaseAI_CharacterCpp Function CalculateAimingRotatation
struct Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation_Statics
{
	struct ALS_BaseAI_CharacterCpp_eventCalculateAimingRotatation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ALS Character" },
		{ "DisplayName", "Calc Aiming Rotation Fast" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventCalculateAimingRotatation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp, nullptr, "CalculateAimingRotatation", nullptr, nullptr, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation_Statics::ALS_BaseAI_CharacterCpp_eventCalculateAimingRotatation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14882401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation_Statics::ALS_BaseAI_CharacterCpp_eventCalculateAimingRotatation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AALS_BaseAI_CharacterCpp::execCalculateAimingRotatation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=AALS_BaseAI_CharacterCpp::CalculateAimingRotatation();
	P_NATIVE_END;
}
// End Class AALS_BaseAI_CharacterCpp Function CalculateAimingRotatation

// Begin Class AALS_BaseAI_CharacterCpp Function CalculateGroundedRotation
struct Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateGroundedRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ALS Character" },
		{ "DisplayName", "Update Grounded Rotation Fast" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateGroundedRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp, nullptr, "CalculateGroundedRotation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateGroundedRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateGroundedRotation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateGroundedRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateGroundedRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AALS_BaseAI_CharacterCpp::execCalculateGroundedRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateGroundedRotation();
	P_NATIVE_END;
}
// End Class AALS_BaseAI_CharacterCpp Function CalculateGroundedRotation

// Begin Class AALS_BaseAI_CharacterCpp Function CanUpdateRotation
struct Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics
{
	struct ALS_BaseAI_CharacterCpp_eventCanUpdateRotation_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ALS Character" },
		{ "DisplayName", "Can Update Moving Rotation Fast" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ALS_BaseAI_CharacterCpp_eventCanUpdateRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseAI_CharacterCpp_eventCanUpdateRotation_Parms), &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp, nullptr, "CanUpdateRotation", nullptr, nullptr, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::ALS_BaseAI_CharacterCpp_eventCanUpdateRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::ALS_BaseAI_CharacterCpp_eventCanUpdateRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AALS_BaseAI_CharacterCpp::execCanUpdateRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanUpdateRotation();
	P_NATIVE_END;
}
// End Class AALS_BaseAI_CharacterCpp Function CanUpdateRotation

// Begin Class AALS_BaseAI_CharacterCpp Function FindCoverFast
struct Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics
{
	struct ALS_BaseAI_CharacterCpp_eventFindCoverFast_Parms
	{
		FVector StartLocation;
		FVector StartDirection;
		int32 DebugIndex;
		bool CanCover;
		float WallHeigh;
		FVector Impact;
		FVector Normal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ALS Character" },
		{ "DisplayName", "Find Cover Fast" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartDirection;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugIndex;
	static void NewProp_CanCover_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanCover;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallHeigh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impact;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventFindCoverFast_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_StartDirection = { "StartDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventFindCoverFast_Parms, StartDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_DebugIndex = { "DebugIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventFindCoverFast_Parms, DebugIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_CanCover_SetBit(void* Obj)
{
	((ALS_BaseAI_CharacterCpp_eventFindCoverFast_Parms*)Obj)->CanCover = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_CanCover = { "CanCover", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseAI_CharacterCpp_eventFindCoverFast_Parms), &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_CanCover_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_WallHeigh = { "WallHeigh", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventFindCoverFast_Parms, WallHeigh), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_Impact = { "Impact", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventFindCoverFast_Parms, Impact), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventFindCoverFast_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_StartDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_DebugIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_CanCover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_WallHeigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_Impact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::NewProp_Normal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp, nullptr, "FindCoverFast", nullptr, nullptr, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::ALS_BaseAI_CharacterCpp_eventFindCoverFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::ALS_BaseAI_CharacterCpp_eventFindCoverFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AALS_BaseAI_CharacterCpp::execFindCoverFast)
{
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_StartDirection);
	P_GET_PROPERTY(FIntProperty,Z_Param_DebugIndex);
	P_GET_UBOOL_REF(Z_Param_Out_CanCover);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_WallHeigh);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Impact);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindCoverFast(Z_Param_StartLocation,Z_Param_StartDirection,Z_Param_DebugIndex,Z_Param_Out_CanCover,Z_Param_Out_WallHeigh,Z_Param_Out_Impact,Z_Param_Out_Normal);
	P_NATIVE_END;
}
// End Class AALS_BaseAI_CharacterCpp Function FindCoverFast

// Begin Class AALS_BaseAI_CharacterCpp Function GetActualGaitFast
struct Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics
{
	struct ALS_BaseAI_CharacterCpp_eventGetActualGaitFast_Parms
	{
		CALS_Gait AllowedGait;
		CALS_Gait ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ALS Character" },
		{ "DisplayName", "Get Actual Gait Fast" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedGait;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::NewProp_AllowedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::NewProp_AllowedGait = { "AllowedGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventGetActualGaitFast_Parms, AllowedGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 1409142495
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventGetActualGaitFast_Parms, ReturnValue), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 1409142495
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::NewProp_AllowedGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::NewProp_AllowedGait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp, nullptr, "GetActualGaitFast", nullptr, nullptr, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::ALS_BaseAI_CharacterCpp_eventGetActualGaitFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::ALS_BaseAI_CharacterCpp_eventGetActualGaitFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AALS_BaseAI_CharacterCpp::execGetActualGaitFast)
{
	P_GET_ENUM(CALS_Gait,Z_Param_AllowedGait);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(CALS_Gait*)Z_Param__Result=P_THIS->GetActualGaitFast(CALS_Gait(Z_Param_AllowedGait));
	P_NATIVE_END;
}
// End Class AALS_BaseAI_CharacterCpp Function GetActualGaitFast

// Begin Class AALS_BaseAI_CharacterCpp Function GetAllowedGaitFast
struct Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics
{
	struct ALS_BaseAI_CharacterCpp_eventGetAllowedGaitFast_Parms
	{
		CALS_Gait ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ALS Character" },
		{ "DisplayName", "Get Allowed Gait Fast" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventGetAllowedGaitFast_Parms, ReturnValue), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 1409142495
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp, nullptr, "GetAllowedGaitFast", nullptr, nullptr, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::ALS_BaseAI_CharacterCpp_eventGetAllowedGaitFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::ALS_BaseAI_CharacterCpp_eventGetAllowedGaitFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AALS_BaseAI_CharacterCpp::execGetAllowedGaitFast)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(CALS_Gait*)Z_Param__Result=P_THIS->GetAllowedGaitFast();
	P_NATIVE_END;
}
// End Class AALS_BaseAI_CharacterCpp Function GetAllowedGaitFast

// Begin Class AALS_BaseAI_CharacterCpp Function GetMappedSpeedFast
struct Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast_Statics
{
	struct ALS_BaseAI_CharacterCpp_eventGetMappedSpeedFast_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ALS Character" },
		{ "DisplayName", "Get Mapped Speed Fast" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventGetMappedSpeedFast_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp, nullptr, "GetMappedSpeedFast", nullptr, nullptr, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast_Statics::ALS_BaseAI_CharacterCpp_eventGetMappedSpeedFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast_Statics::ALS_BaseAI_CharacterCpp_eventGetMappedSpeedFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AALS_BaseAI_CharacterCpp::execGetMappedSpeedFast)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMappedSpeedFast();
	P_NATIVE_END;
}
// End Class AALS_BaseAI_CharacterCpp Function GetMappedSpeedFast

// Begin Class AALS_BaseAI_CharacterCpp Function IsCharacter
struct Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics
{
	struct ALS_BaseAI_CharacterCpp_eventIsCharacter_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ALS Character" },
		{ "DisplayName", "Is Character" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ALS_BaseAI_CharacterCpp_eventIsCharacter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseAI_CharacterCpp_eventIsCharacter_Parms), &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp, nullptr, "IsCharacter", nullptr, nullptr, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::ALS_BaseAI_CharacterCpp_eventIsCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::ALS_BaseAI_CharacterCpp_eventIsCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AALS_BaseAI_CharacterCpp::execIsCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCharacter();
	P_NATIVE_END;
}
// End Class AALS_BaseAI_CharacterCpp Function IsCharacter

// Begin Class AALS_BaseAI_CharacterCpp Function LimitRotationFast
struct Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics
{
	struct ALS_BaseAI_CharacterCpp_eventLimitRotationFast_Parms
	{
		float AimYawMin;
		float AimYawMax;
		float InterpSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ALS Character" },
		{ "DisplayName", "Limit Rotation Fast" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::NewProp_AimYawMin = { "AimYawMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventLimitRotationFast_Parms, AimYawMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::NewProp_AimYawMax = { "AimYawMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventLimitRotationFast_Parms, AimYawMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventLimitRotationFast_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::NewProp_AimYawMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::NewProp_AimYawMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::NewProp_InterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp, nullptr, "LimitRotationFast", nullptr, nullptr, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::ALS_BaseAI_CharacterCpp_eventLimitRotationFast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::ALS_BaseAI_CharacterCpp_eventLimitRotationFast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AALS_BaseAI_CharacterCpp::execLimitRotationFast)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AimYawMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AimYawMax);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LimitRotationFast(Z_Param_AimYawMin,Z_Param_AimYawMax,Z_Param_InterpSpeed);
	P_NATIVE_END;
}
// End Class AALS_BaseAI_CharacterCpp Function LimitRotationFast

// Begin Class AALS_BaseAI_CharacterCpp Function SmoothedCharRotation
struct Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics
{
	struct ALS_BaseAI_CharacterCpp_eventSmoothedCharRotation_Parms
	{
		FRotator Target;
		float TargetInterpSpeedConst;
		float ActorInterpSpeedSmooth;
		bool UpdateControl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ALS Character" },
		{ "DisplayName", "Smoothed Character Rotation Fast" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetInterpSpeedConst;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorInterpSpeedSmooth;
	static void NewProp_UpdateControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateControl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventSmoothedCharRotation_Parms, Target), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::NewProp_TargetInterpSpeedConst = { "TargetInterpSpeedConst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventSmoothedCharRotation_Parms, TargetInterpSpeedConst), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::NewProp_ActorInterpSpeedSmooth = { "ActorInterpSpeedSmooth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventSmoothedCharRotation_Parms, ActorInterpSpeedSmooth), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::NewProp_UpdateControl_SetBit(void* Obj)
{
	((ALS_BaseAI_CharacterCpp_eventSmoothedCharRotation_Parms*)Obj)->UpdateControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::NewProp_UpdateControl = { "UpdateControl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseAI_CharacterCpp_eventSmoothedCharRotation_Parms), &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::NewProp_UpdateControl_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::NewProp_TargetInterpSpeedConst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::NewProp_ActorInterpSpeedSmooth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::NewProp_UpdateControl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp, nullptr, "SmoothedCharRotation", nullptr, nullptr, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::ALS_BaseAI_CharacterCpp_eventSmoothedCharRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::ALS_BaseAI_CharacterCpp_eventSmoothedCharRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AALS_BaseAI_CharacterCpp::execSmoothedCharRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_Target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TargetInterpSpeedConst);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActorInterpSpeedSmooth);
	P_GET_UBOOL(Z_Param_UpdateControl);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SmoothedCharRotation(Z_Param_Target,Z_Param_TargetInterpSpeedConst,Z_Param_ActorInterpSpeedSmooth,Z_Param_UpdateControl);
	P_NATIVE_END;
}
// End Class AALS_BaseAI_CharacterCpp Function SmoothedCharRotation

// Begin Class AALS_BaseAI_CharacterCpp Function UpdateMovementSettings
struct Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics
{
	struct ALS_BaseAI_CharacterCpp_eventUpdateMovementSettings_Parms
	{
		CALS_Gait AllowedGait;
		FCALSMovementSettings CurrentMovement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ALS Character" },
		{ "DisplayName", "Update Dynamic Movement Settings Fast" },
		{ "Keywords", "ALS Character" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedGait;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::NewProp_AllowedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::NewProp_AllowedGait = { "AllowedGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventUpdateMovementSettings_Parms, AllowedGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 1409142495
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::NewProp_CurrentMovement = { "CurrentMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALS_BaseAI_CharacterCpp_eventUpdateMovementSettings_Parms, CurrentMovement), Z_Construct_UScriptStruct_FCALSMovementSettings, METADATA_PARAMS(0, nullptr) }; // 3277164154
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::NewProp_AllowedGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::NewProp_AllowedGait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::NewProp_CurrentMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AALS_BaseAI_CharacterCpp, nullptr, "UpdateMovementSettings", nullptr, nullptr, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::ALS_BaseAI_CharacterCpp_eventUpdateMovementSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::ALS_BaseAI_CharacterCpp_eventUpdateMovementSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AALS_BaseAI_CharacterCpp::execUpdateMovementSettings)
{
	P_GET_ENUM(CALS_Gait,Z_Param_AllowedGait);
	P_GET_STRUCT(FCALSMovementSettings,Z_Param_CurrentMovement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMovementSettings(CALS_Gait(Z_Param_AllowedGait),Z_Param_CurrentMovement);
	P_NATIVE_END;
}
// End Class AALS_BaseAI_CharacterCpp Function UpdateMovementSettings

// Begin Class AALS_BaseAI_CharacterCpp
void AALS_BaseAI_CharacterCpp::StaticRegisterNativesAALS_BaseAI_CharacterCpp()
{
	UClass* Class = AALS_BaseAI_CharacterCpp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalcCanSprint", &AALS_BaseAI_CharacterCpp::execCalcCanSprint },
		{ "CalcGroundedRotationRate", &AALS_BaseAI_CharacterCpp::execCalcGroundedRotationRate },
		{ "CalculateAimingRotatation", &AALS_BaseAI_CharacterCpp::execCalculateAimingRotatation },
		{ "CalculateGroundedRotation", &AALS_BaseAI_CharacterCpp::execCalculateGroundedRotation },
		{ "CanUpdateRotation", &AALS_BaseAI_CharacterCpp::execCanUpdateRotation },
		{ "FindCoverFast", &AALS_BaseAI_CharacterCpp::execFindCoverFast },
		{ "GetActualGaitFast", &AALS_BaseAI_CharacterCpp::execGetActualGaitFast },
		{ "GetAllowedGaitFast", &AALS_BaseAI_CharacterCpp::execGetAllowedGaitFast },
		{ "GetMappedSpeedFast", &AALS_BaseAI_CharacterCpp::execGetMappedSpeedFast },
		{ "IsCharacter", &AALS_BaseAI_CharacterCpp::execIsCharacter },
		{ "LimitRotationFast", &AALS_BaseAI_CharacterCpp::execLimitRotationFast },
		{ "SmoothedCharRotation", &AALS_BaseAI_CharacterCpp::execSmoothedCharRotation },
		{ "UpdateMovementSettings", &AALS_BaseAI_CharacterCpp::execUpdateMovementSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AALS_BaseAI_CharacterCpp);
UClass* Z_Construct_UClass_AALS_BaseAI_CharacterCpp_NoRegister()
{
	return AALS_BaseAI_CharacterCpp::StaticClass();
}
struct Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ALS_BaseAI_CharacterCpp.h" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevAimYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageDataClass_MetaData[] = {
		{ "AllowedClasses", "ALS_DamageConfigData" },
		{ "Category", "AI Config" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic Variables\n" },
#endif
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMovingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastVelocityRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMovementInputRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimYawRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementInputAmountC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasMovementInputC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothTargetAimingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAirRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEnemyActorC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectedEnemyTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GaitC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// States\n//Zmieniono np. TEnumAsByte<CALS_Gait> na CALS_Gait !!!\n" },
#endif
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "States\nZmieniono np. TEnumAsByte<CALS_Gait> na CALS_Gait !!!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredGaitC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayStateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StanceC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationModeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementActionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementStateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementSettingsC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "ALS_BaseAI_CharacterCpp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Structures\n" },
#endif
		{ "ModuleRelativePath", "Public/ALS_BaseAI_CharacterCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structures" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevVelocityC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PrevAimYawC;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageDataClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedC;
	static void NewProp_IsMovingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMovingC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastVelocityRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastMovementInputRotationC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRateC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementInputAmountC;
	static void NewProp_HasMovementInputC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasMovementInputC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothTargetAimingC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAirRotationC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEnemyActorC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DetectedEnemyTimeC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GaitC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GaitC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredGaitC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredGaitC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverlayStateC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlayStateC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StanceC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StanceC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationModeC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationModeC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementActionC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementActionC;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementStateC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementStateC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMovementSettingsC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcCanSprint, "CalcCanSprint" }, // 2255424386
		{ &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalcGroundedRotationRate, "CalcGroundedRotationRate" }, // 1952407327
		{ &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateAimingRotatation, "CalculateAimingRotatation" }, // 1968255383
		{ &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CalculateGroundedRotation, "CalculateGroundedRotation" }, // 1423004753
		{ &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_CanUpdateRotation, "CanUpdateRotation" }, // 2925084940
		{ &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_FindCoverFast, "FindCoverFast" }, // 3975605700
		{ &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetActualGaitFast, "GetActualGaitFast" }, // 2347449858
		{ &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetAllowedGaitFast, "GetAllowedGaitFast" }, // 137185140
		{ &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_GetMappedSpeedFast, "GetMappedSpeedFast" }, // 3551173167
		{ &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_IsCharacter, "IsCharacter" }, // 3515980804
		{ &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_LimitRotationFast, "LimitRotationFast" }, // 1416651909
		{ &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_SmoothedCharRotation, "SmoothedCharRotation" }, // 3907257258
		{ &Z_Construct_UFunction_AALS_BaseAI_CharacterCpp_UpdateMovementSettings, "UpdateMovementSettings" }, // 364851849
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AALS_BaseAI_CharacterCpp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_PrevVelocityC = { "PrevVelocityC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, PrevVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevVelocityC_MetaData), NewProp_PrevVelocityC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_PrevAimYawC = { "PrevAimYawC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, PrevAimYawC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevAimYawC_MetaData), NewProp_PrevAimYawC_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_DamageDataClass = { "DamageDataClass", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, DamageDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageDataClass_MetaData), NewProp_DamageDataClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_AccelerationC = { "AccelerationC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, AccelerationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationC_MetaData), NewProp_AccelerationC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_SpeedC = { "SpeedC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, SpeedC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedC_MetaData), NewProp_SpeedC_MetaData) };
void Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_IsMovingC_SetBit(void* Obj)
{
	((AALS_BaseAI_CharacterCpp*)Obj)->IsMovingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_IsMovingC = { "IsMovingC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AALS_BaseAI_CharacterCpp), &Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_IsMovingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMovingC_MetaData), NewProp_IsMovingC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_LastVelocityRotationC = { "LastVelocityRotationC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, LastVelocityRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastVelocityRotationC_MetaData), NewProp_LastVelocityRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_LastMovementInputRotationC = { "LastMovementInputRotationC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, LastMovementInputRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMovementInputRotationC_MetaData), NewProp_LastMovementInputRotationC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_AimYawRateC = { "AimYawRateC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, AimYawRateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimYawRateC_MetaData), NewProp_AimYawRateC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_MovementInputAmountC = { "MovementInputAmountC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, MovementInputAmountC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementInputAmountC_MetaData), NewProp_MovementInputAmountC_MetaData) };
void Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_HasMovementInputC_SetBit(void* Obj)
{
	((AALS_BaseAI_CharacterCpp*)Obj)->HasMovementInputC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_HasMovementInputC = { "HasMovementInputC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AALS_BaseAI_CharacterCpp), &Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_HasMovementInputC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasMovementInputC_MetaData), NewProp_HasMovementInputC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_SmoothTargetAimingC = { "SmoothTargetAimingC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, SmoothTargetAimingC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothTargetAimingC_MetaData), NewProp_SmoothTargetAimingC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_TargetRotationC = { "TargetRotationC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, TargetRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotationC_MetaData), NewProp_TargetRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_InAirRotationC = { "InAirRotationC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, InAirRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAirRotationC_MetaData), NewProp_InAirRotationC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_TargetEnemyActorC = { "TargetEnemyActorC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, TargetEnemyActorC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEnemyActorC_MetaData), NewProp_TargetEnemyActorC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_DetectedEnemyTimeC = { "DetectedEnemyTimeC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, DetectedEnemyTimeC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectedEnemyTimeC_MetaData), NewProp_DetectedEnemyTimeC_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_GaitC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_GaitC = { "GaitC", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, GaitC), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GaitC_MetaData), NewProp_GaitC_MetaData) }; // 1409142495
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_DesiredGaitC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_DesiredGaitC = { "DesiredGaitC", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, DesiredGaitC), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredGaitC_MetaData), NewProp_DesiredGaitC_MetaData) }; // 1409142495
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_OverlayStateC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_OverlayStateC = { "OverlayStateC", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, OverlayStateC), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayStateC_MetaData), NewProp_OverlayStateC_MetaData) }; // 754085083
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_StanceC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_StanceC = { "StanceC", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, StanceC), Z_Construct_UEnum_HelpfulFunctions_CALS_Stance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StanceC_MetaData), NewProp_StanceC_MetaData) }; // 1491972663
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_RotationModeC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_RotationModeC = { "RotationModeC", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, RotationModeC), Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationModeC_MetaData), NewProp_RotationModeC_MetaData) }; // 1392729703
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_MovementActionC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_MovementActionC = { "MovementActionC", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, MovementActionC), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementActionC_MetaData), NewProp_MovementActionC_MetaData) }; // 2432138653
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_MovementStateC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_MovementStateC = { "MovementStateC", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, MovementStateC), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementStateC_MetaData), NewProp_MovementStateC_MetaData) }; // 3476666773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_CurrentMovementSettingsC = { "CurrentMovementSettingsC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALS_BaseAI_CharacterCpp, CurrentMovementSettingsC), Z_Construct_UScriptStruct_FCALSMovementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMovementSettingsC_MetaData), NewProp_CurrentMovementSettingsC_MetaData) }; // 3277164154
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_PrevVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_PrevAimYawC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_DamageDataClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_AccelerationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_SpeedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_IsMovingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_LastVelocityRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_LastMovementInputRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_AimYawRateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_MovementInputAmountC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_HasMovementInputC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_SmoothTargetAimingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_TargetRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_InAirRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_TargetEnemyActorC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_DetectedEnemyTimeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_GaitC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_GaitC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_DesiredGaitC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_DesiredGaitC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_OverlayStateC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_OverlayStateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_StanceC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_StanceC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_RotationModeC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_RotationModeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_MovementActionC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_MovementActionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_MovementStateC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_MovementStateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::NewProp_CurrentMovementSettingsC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UALS_HumanAI_InterfaceCpp_NoRegister, (int32)VTABLE_OFFSET(AALS_BaseAI_CharacterCpp, IALS_HumanAI_InterfaceCpp), false },  // 3667336072
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::ClassParams = {
	&AALS_BaseAI_CharacterCpp::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::Class_MetaDataParams), Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AALS_BaseAI_CharacterCpp()
{
	if (!Z_Registration_Info_UClass_AALS_BaseAI_CharacterCpp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AALS_BaseAI_CharacterCpp.OuterSingleton, Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AALS_BaseAI_CharacterCpp.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<AALS_BaseAI_CharacterCpp>()
{
	return AALS_BaseAI_CharacterCpp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AALS_BaseAI_CharacterCpp);
AALS_BaseAI_CharacterCpp::~AALS_BaseAI_CharacterCpp() {}
// End Class AALS_BaseAI_CharacterCpp

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ CALS_Gait_StaticEnum, TEXT("CALS_Gait"), &Z_Registration_Info_UEnum_CALS_Gait, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1409142495U) },
		{ CALS_MovementState_StaticEnum, TEXT("CALS_MovementState"), &Z_Registration_Info_UEnum_CALS_MovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3476666773U) },
		{ CALS_OverlayState_StaticEnum, TEXT("CALS_OverlayState"), &Z_Registration_Info_UEnum_CALS_OverlayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 754085083U) },
		{ CALS_RotationMode_StaticEnum, TEXT("CALS_RotationMode"), &Z_Registration_Info_UEnum_CALS_RotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1392729703U) },
		{ CALS_Stance_StaticEnum, TEXT("CALS_Stance"), &Z_Registration_Info_UEnum_CALS_Stance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1491972663U) },
		{ CALS_MovementAction_StaticEnum, TEXT("CALS_MovementAction"), &Z_Registration_Info_UEnum_CALS_MovementAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2432138653U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCALSMovementSettings::StaticStruct, Z_Construct_UScriptStruct_FCALSMovementSettings_Statics::NewStructOps, TEXT("CALSMovementSettings"), &Z_Registration_Info_UScriptStruct_CALSMovementSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCALSMovementSettings), 3277164154U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AALS_BaseAI_CharacterCpp, AALS_BaseAI_CharacterCpp::StaticClass, TEXT("AALS_BaseAI_CharacterCpp"), &Z_Registration_Info_UClass_AALS_BaseAI_CharacterCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AALS_BaseAI_CharacterCpp), 1096464977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_1704055430(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
