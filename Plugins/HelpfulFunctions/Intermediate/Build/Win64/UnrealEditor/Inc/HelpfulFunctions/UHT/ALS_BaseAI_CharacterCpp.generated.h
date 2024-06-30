// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ALS_BaseAI_CharacterCpp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class CALS_Gait : uint8;
struct FCALSMovementSettings;
#ifdef HELPFULFUNCTIONS_ALS_BaseAI_CharacterCpp_generated_h
#error "ALS_BaseAI_CharacterCpp.generated.h already included, missing '#pragma once' in ALS_BaseAI_CharacterCpp.h"
#endif
#define HELPFULFUNCTIONS_ALS_BaseAI_CharacterCpp_generated_h

#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCALSMovementSettings_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCALSMovementSettings>();

#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_SPARSE_DATA
#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindCoverFast); \
	DECLARE_FUNCTION(execGetActualGaitFast); \
	DECLARE_FUNCTION(execGetAllowedGaitFast); \
	DECLARE_FUNCTION(execUpdateMovementSettings); \
	DECLARE_FUNCTION(execCalcCanSprint); \
	DECLARE_FUNCTION(execGetMappedSpeedFast); \
	DECLARE_FUNCTION(execCalcGroundedRotationRate); \
	DECLARE_FUNCTION(execCanUpdateRotation); \
	DECLARE_FUNCTION(execLimitRotationFast); \
	DECLARE_FUNCTION(execSmoothedCharRotation); \
	DECLARE_FUNCTION(execCalculateGroundedRotation); \
	DECLARE_FUNCTION(execCalculateAimingRotatation); \
	DECLARE_FUNCTION(execIsCharacter);


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindCoverFast); \
	DECLARE_FUNCTION(execGetActualGaitFast); \
	DECLARE_FUNCTION(execGetAllowedGaitFast); \
	DECLARE_FUNCTION(execUpdateMovementSettings); \
	DECLARE_FUNCTION(execCalcCanSprint); \
	DECLARE_FUNCTION(execGetMappedSpeedFast); \
	DECLARE_FUNCTION(execCalcGroundedRotationRate); \
	DECLARE_FUNCTION(execCanUpdateRotation); \
	DECLARE_FUNCTION(execLimitRotationFast); \
	DECLARE_FUNCTION(execSmoothedCharRotation); \
	DECLARE_FUNCTION(execCalculateGroundedRotation); \
	DECLARE_FUNCTION(execCalculateAimingRotatation); \
	DECLARE_FUNCTION(execIsCharacter);


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_ACCESSORS
#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAALS_BaseAI_CharacterCpp(); \
	friend struct Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics; \
public: \
	DECLARE_CLASS(AALS_BaseAI_CharacterCpp, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(AALS_BaseAI_CharacterCpp) \
	virtual UObject* _getUObject() const override { return const_cast<AALS_BaseAI_CharacterCpp*>(this); }


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_INCLASS \
private: \
	static void StaticRegisterNativesAALS_BaseAI_CharacterCpp(); \
	friend struct Z_Construct_UClass_AALS_BaseAI_CharacterCpp_Statics; \
public: \
	DECLARE_CLASS(AALS_BaseAI_CharacterCpp, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(AALS_BaseAI_CharacterCpp) \
	virtual UObject* _getUObject() const override { return const_cast<AALS_BaseAI_CharacterCpp*>(this); }


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AALS_BaseAI_CharacterCpp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AALS_BaseAI_CharacterCpp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AALS_BaseAI_CharacterCpp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AALS_BaseAI_CharacterCpp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AALS_BaseAI_CharacterCpp(AALS_BaseAI_CharacterCpp&&); \
	NO_API AALS_BaseAI_CharacterCpp(const AALS_BaseAI_CharacterCpp&); \
public: \
	NO_API virtual ~AALS_BaseAI_CharacterCpp();


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AALS_BaseAI_CharacterCpp(AALS_BaseAI_CharacterCpp&&); \
	NO_API AALS_BaseAI_CharacterCpp(const AALS_BaseAI_CharacterCpp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AALS_BaseAI_CharacterCpp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AALS_BaseAI_CharacterCpp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AALS_BaseAI_CharacterCpp) \
	NO_API virtual ~AALS_BaseAI_CharacterCpp();


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_97_PROLOG
#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_SPARSE_DATA \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_RPC_WRAPPERS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_ACCESSORS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_INCLASS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_SPARSE_DATA \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_ACCESSORS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class AALS_BaseAI_CharacterCpp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseAI_CharacterCpp_h


#define FOREACH_ENUM_CALS_GAIT(op) \
	op(CALS_Gait::Walking) \
	op(CALS_Gait::Running) \
	op(CALS_Gait::Sprinting) 

enum class CALS_Gait : uint8;
template<> struct TIsUEnumClass<CALS_Gait> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_Gait>();

#define FOREACH_ENUM_CALS_MOVEMENTSTATE(op) \
	op(CALS_MovementState::None) \
	op(CALS_MovementState::Grounded) \
	op(CALS_MovementState::InAir) \
	op(CALS_MovementState::Mantling) \
	op(CALS_MovementState::Ragdoll) \
	op(CALS_MovementState::Crawl) \
	op(CALS_MovementState::Prone) 

enum class CALS_MovementState : uint8;
template<> struct TIsUEnumClass<CALS_MovementState> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_MovementState>();

#define FOREACH_ENUM_CALS_OVERLAYSTATE(op) \
	op(CALS_OverlayState::Default) \
	op(CALS_OverlayState::Masculine) \
	op(CALS_OverlayState::Feminine) \
	op(CALS_OverlayState::Injured) \
	op(CALS_OverlayState::HandsTied) \
	op(CALS_OverlayState::Rifle) \
	op(CALS_OverlayState::Pistol1H) \
	op(CALS_OverlayState::Pistol2H) \
	op(CALS_OverlayState::Bow) \
	op(CALS_OverlayState::Torch) \
	op(CALS_OverlayState::Binoculars) \
	op(CALS_OverlayState::Box) \
	op(CALS_OverlayState::Barrel) \
	op(CALS_OverlayState::Rope) \
	op(CALS_OverlayState::Axe) \
	op(CALS_OverlayState::Knife) 

enum class CALS_OverlayState : uint8;
template<> struct TIsUEnumClass<CALS_OverlayState> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_OverlayState>();

#define FOREACH_ENUM_CALS_ROTATIONMODE(op) \
	op(CALS_RotationMode::VelocityDirection) \
	op(CALS_RotationMode::LookingDirection) \
	op(CALS_RotationMode::Aiming) 

enum class CALS_RotationMode : uint8;
template<> struct TIsUEnumClass<CALS_RotationMode> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_RotationMode>();

#define FOREACH_ENUM_CALS_STANCE(op) \
	op(CALS_Stance::Standing) \
	op(CALS_Stance::Crouching) 

enum class CALS_Stance : uint8;
template<> struct TIsUEnumClass<CALS_Stance> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_Stance>();

#define FOREACH_ENUM_CALS_MOVEMENTACTION(op) \
	op(CALS_MovementAction::None) \
	op(CALS_MovementAction::LowMantle) \
	op(CALS_MovementAction::HighMantle) \
	op(CALS_MovementAction::Rolling) \
	op(CALS_MovementAction::GettingUp) 

enum class CALS_MovementAction : uint8;
template<> struct TIsUEnumClass<CALS_MovementAction> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_MovementAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
