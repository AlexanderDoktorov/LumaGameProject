// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS_MainCharacterCpp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef IWALS_ABILITYSYSTEM_GAS_MainCharacterCpp_generated_h
#error "GAS_MainCharacterCpp.generated.h already included, missing '#pragma once' in GAS_MainCharacterCpp.h"
#endif
#define IWALS_ABILITYSYSTEM_GAS_MainCharacterCpp_generated_h

#define FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTryCreateInputsGAS); \
	DECLARE_FUNCTION(execSwitchOnOwnedTagsWithIgnore); \
	DECLARE_FUNCTION(execSwitchOnOwnedTags); \
	DECLARE_FUNCTION(execIsTagLeaf); \
	DECLARE_FUNCTION(execGetSubTag); \
	DECLARE_FUNCTION(execConvertLiteralNameToTag);


#define FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGAS_MainCharacterCpp(); \
	friend struct Z_Construct_UClass_AGAS_MainCharacterCpp_Statics; \
public: \
	DECLARE_CLASS(AGAS_MainCharacterCpp, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(AGAS_MainCharacterCpp) \
	virtual UObject* _getUObject() const override { return const_cast<AGAS_MainCharacterCpp*>(this); }


#define FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGAS_MainCharacterCpp(AGAS_MainCharacterCpp&&); \
	AGAS_MainCharacterCpp(const AGAS_MainCharacterCpp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGAS_MainCharacterCpp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGAS_MainCharacterCpp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGAS_MainCharacterCpp) \
	NO_API virtual ~AGAS_MainCharacterCpp();


#define FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_16_PROLOG
#define FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<class AGAS_MainCharacterCpp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_GAS_MainCharacterCpp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
