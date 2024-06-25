// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cpp_CoverSystemV2.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCoverSystemMoveConfig;
struct FHitResult;
#ifdef HELPFULFUNCTIONS_Cpp_CoverSystemV2_generated_h
#error "Cpp_CoverSystemV2.generated.h already included, missing '#pragma once' in Cpp_CoverSystemV2.h"
#endif
#define HELPFULFUNCTIONS_Cpp_CoverSystemV2_generated_h

#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoverTraceStartConfig_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCoverTraceStartConfig>();

#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoverSystemMoveConfig_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCoverSystemMoveConfig>();

#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_SPARSE_DATA
#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_RPC_WRAPPERS \
	virtual FVector2D SetAxisValuesForCpp_Implementation(); \
	virtual void FinishCoverModeC_Implementation(); \
	virtual void StartCoverModeC_Implementation(bool& StartedCover); \
 \
	DECLARE_FUNCTION(execSetAxisValuesForCpp); \
	DECLARE_FUNCTION(execFinishCoverModeC); \
	DECLARE_FUNCTION(execStartCoverModeC); \
	DECLARE_FUNCTION(execUpdateDirectionValuesC); \
	DECLARE_FUNCTION(execConvertWallToCapPositionC); \
	DECLARE_FUNCTION(execCheckCanStartMoveC); \
	DECLARE_FUNCTION(execSmoothWallNormalC); \
	DECLARE_FUNCTION(execMoveCharToWallC); \
	DECLARE_FUNCTION(execTryStartCoverSystemC);


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector2D SetAxisValuesForCpp_Implementation(); \
	virtual void FinishCoverModeC_Implementation(); \
	virtual void StartCoverModeC_Implementation(bool& StartedCover); \
 \
	DECLARE_FUNCTION(execSetAxisValuesForCpp); \
	DECLARE_FUNCTION(execFinishCoverModeC); \
	DECLARE_FUNCTION(execStartCoverModeC); \
	DECLARE_FUNCTION(execUpdateDirectionValuesC); \
	DECLARE_FUNCTION(execConvertWallToCapPositionC); \
	DECLARE_FUNCTION(execCheckCanStartMoveC); \
	DECLARE_FUNCTION(execSmoothWallNormalC); \
	DECLARE_FUNCTION(execMoveCharToWallC); \
	DECLARE_FUNCTION(execTryStartCoverSystemC);


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_ACCESSORS
#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCpp_CoverSystemV2(); \
	friend struct Z_Construct_UClass_UCpp_CoverSystemV2_Statics; \
public: \
	DECLARE_CLASS(UCpp_CoverSystemV2, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UCpp_CoverSystemV2)


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUCpp_CoverSystemV2(); \
	friend struct Z_Construct_UClass_UCpp_CoverSystemV2_Statics; \
public: \
	DECLARE_CLASS(UCpp_CoverSystemV2, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UCpp_CoverSystemV2)


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCpp_CoverSystemV2(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCpp_CoverSystemV2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCpp_CoverSystemV2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCpp_CoverSystemV2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCpp_CoverSystemV2(UCpp_CoverSystemV2&&); \
	NO_API UCpp_CoverSystemV2(const UCpp_CoverSystemV2&); \
public: \
	NO_API virtual ~UCpp_CoverSystemV2();


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCpp_CoverSystemV2(UCpp_CoverSystemV2&&); \
	NO_API UCpp_CoverSystemV2(const UCpp_CoverSystemV2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCpp_CoverSystemV2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCpp_CoverSystemV2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCpp_CoverSystemV2) \
	NO_API virtual ~UCpp_CoverSystemV2();


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_52_PROLOG
#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_SPARSE_DATA \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_RPC_WRAPPERS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_ACCESSORS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_INCLASS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_SPARSE_DATA \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_ACCESSORS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UCpp_CoverSystemV2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_LumaGame_LumaGameProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_CoverSystemV2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
