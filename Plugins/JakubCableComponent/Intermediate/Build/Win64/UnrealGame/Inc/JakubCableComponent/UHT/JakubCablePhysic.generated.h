// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JakubCablePhysic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
struct FCableAttachPoint;
struct FExposedCableParticle;
#ifdef JAKUBCABLECOMPONENT_JakubCablePhysic_generated_h
#error "JakubCablePhysic.generated.h already included, missing '#pragma once' in JakubCablePhysic.h"
#endif
#define JAKUBCABLECOMPONENT_JakubCablePhysic_generated_h

#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCableAttachPoint_Statics; \
	JAKUBCABLECOMPONENT_API static class UScriptStruct* StaticStruct();


template<> JAKUBCABLECOMPONENT_API UScriptStruct* StaticStruct<struct FCableAttachPoint>();

#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExposedCableParticle_Statics; \
	JAKUBCABLECOMPONENT_API static class UScriptStruct* StaticStruct();


template<> JAKUBCABLECOMPONENT_API UScriptStruct* StaticStruct<struct FExposedCableParticle>();

#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_SPARSE_DATA
#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReduceForceForParticles); \
	DECLARE_FUNCTION(execUseForceToTightenTheRope); \
	DECLARE_FUNCTION(execGetAnyPointIsColliding); \
	DECLARE_FUNCTION(execBreakAttachIfSegmentIsStretched); \
	DECLARE_FUNCTION(execGetStretchTolleranceValuePerSegment); \
	DECLARE_FUNCTION(execUpdateCableLength); \
	DECLARE_FUNCTION(execSetParticleLocation); \
	DECLARE_FUNCTION(execGetCableSpaceLenghtForSwinging); \
	DECLARE_FUNCTION(execApplyConstForceToParticle); \
	DECLARE_FUNCTION(execAddImpulseToParticle); \
	DECLARE_FUNCTION(execUpdateSubstepTime); \
	DECLARE_FUNCTION(execGetIndicesOfAttachedPoints); \
	DECLARE_FUNCTION(execGetCableCurrentSegmentsLength); \
	DECLARE_FUNCTION(execGetCableInitSegmentsLength); \
	DECLARE_FUNCTION(execGetCableParticlesStructure); \
	DECLARE_FUNCTION(execGetCableParticleLocations); \
	DECLARE_FUNCTION(execDetachParticleFrom); \
	DECLARE_FUNCTION(execGetAttachStructure); \
	DECLARE_FUNCTION(execGetAttachedActors); \
	DECLARE_FUNCTION(execSetAttachIndexToActor); \
	DECLARE_FUNCTION(execSetAttachIndexToComponent);


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReduceForceForParticles); \
	DECLARE_FUNCTION(execUseForceToTightenTheRope); \
	DECLARE_FUNCTION(execGetAnyPointIsColliding); \
	DECLARE_FUNCTION(execBreakAttachIfSegmentIsStretched); \
	DECLARE_FUNCTION(execGetStretchTolleranceValuePerSegment); \
	DECLARE_FUNCTION(execUpdateCableLength); \
	DECLARE_FUNCTION(execSetParticleLocation); \
	DECLARE_FUNCTION(execGetCableSpaceLenghtForSwinging); \
	DECLARE_FUNCTION(execApplyConstForceToParticle); \
	DECLARE_FUNCTION(execAddImpulseToParticle); \
	DECLARE_FUNCTION(execUpdateSubstepTime); \
	DECLARE_FUNCTION(execGetIndicesOfAttachedPoints); \
	DECLARE_FUNCTION(execGetCableCurrentSegmentsLength); \
	DECLARE_FUNCTION(execGetCableInitSegmentsLength); \
	DECLARE_FUNCTION(execGetCableParticlesStructure); \
	DECLARE_FUNCTION(execGetCableParticleLocations); \
	DECLARE_FUNCTION(execDetachParticleFrom); \
	DECLARE_FUNCTION(execGetAttachStructure); \
	DECLARE_FUNCTION(execGetAttachedActors); \
	DECLARE_FUNCTION(execSetAttachIndexToActor); \
	DECLARE_FUNCTION(execSetAttachIndexToComponent);


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_ACCESSORS
#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJakubCablePhysic(); \
	friend struct Z_Construct_UClass_UJakubCablePhysic_Statics; \
public: \
	DECLARE_CLASS(UJakubCablePhysic, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JakubCableComponent"), NO_API) \
	DECLARE_SERIALIZER(UJakubCablePhysic)


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUJakubCablePhysic(); \
	friend struct Z_Construct_UClass_UJakubCablePhysic_Statics; \
public: \
	DECLARE_CLASS(UJakubCablePhysic, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JakubCableComponent"), NO_API) \
	DECLARE_SERIALIZER(UJakubCablePhysic)


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJakubCablePhysic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJakubCablePhysic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJakubCablePhysic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJakubCablePhysic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJakubCablePhysic(UJakubCablePhysic&&); \
	NO_API UJakubCablePhysic(const UJakubCablePhysic&); \
public: \
	NO_API virtual ~UJakubCablePhysic();


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJakubCablePhysic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJakubCablePhysic(UJakubCablePhysic&&); \
	NO_API UJakubCablePhysic(const UJakubCablePhysic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJakubCablePhysic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJakubCablePhysic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJakubCablePhysic) \
	NO_API virtual ~UJakubCablePhysic();


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_62_PROLOG
#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_SPARSE_DATA \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_RPC_WRAPPERS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_ACCESSORS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_INCLASS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_SPARSE_DATA \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_ACCESSORS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h_65_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class JakubCablePhysic."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JAKUBCABLECOMPONENT_API UClass* StaticClass<class UJakubCablePhysic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCablePhysic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
