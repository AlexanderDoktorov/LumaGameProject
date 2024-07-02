// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_AnimInstanceCpp.h"
#include "IWALS_AbilitySystem/Public/IWALS_EnumsAndStruct.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_AnimInstanceCpp() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AnimInstanceCpp();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AnimInstanceCpp_NoRegister();
IWALS_ABILITYSYSTEM_API UEnum* Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC();
IWALS_ABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FLeanAmoutC();
IWALS_ABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVelocityBlendC();
UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References

// Begin Class UIWALS_AnimInstanceCpp
void UIWALS_AnimInstanceCpp::StaticRegisterNativesUIWALS_AnimInstanceCpp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIWALS_AnimInstanceCpp);
UClass* Z_Construct_UClass_UIWALS_AnimInstanceCpp_NoRegister()
{
	return UIWALS_AnimInstanceCpp::StaticClass();
}
struct Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "IWALS_AnimInstanceCpp.h" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryMotionMaskC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Zdefiniuj podstawowe zmienne, kt\xef\xbf\xbdre b\xef\xbf\xbd""d\xef\xbf\xbd potrzebne dla systemu Overlay States. \xef\xbf\xbd""eby nie odwo\xef\xbf\xbdywa\xef\xbf\xbd si\xef\xbf\xbd do klasy ALS_AnimBP przy pomocy Property Access utworzony zosta\xef\xbf\xbd w\xef\xbf\xbd""a\xef\xbf\xbdnie\n\x09""Anim Instance. W nim zdefiniowane s\xef\xbf\xbd potrzebne zmienne, wi\xef\xbf\xbd""c dzi\xef\xbf\xbdki temu odwo\xef\xbf\xbdywa\xef\xbf\xbd si\xef\xbf\xbd b\xef\xbf\xbd""dziemy w\xef\xbf\xbd""a\xef\xbf\xbdnie do tej klasy a nie ca\xef\xbf\xbd""ego ALS_AnimBP */" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zdefiniuj podstawowe zmienne, kt\xef\xbf\xbdre b\xef\xbf\xbd""d\xef\xbf\xbd potrzebne dla systemu Overlay States. \xef\xbf\xbd""eby nie odwo\xef\xbf\xbdywa\xef\xbf\xbd si\xef\xbf\xbd do klasy ALS_AnimBP przy pomocy Property Access utworzony zosta\xef\xbf\xbd w\xef\xbf\xbd""a\xef\xbf\xbdnie\n      Anim Instance. W nim zdefiniowane s\xef\xbf\xbd potrzebne zmienne, wi\xef\xbf\xbd""c dzi\xef\xbf\xbdki temu odwo\xef\xbf\xbdywa\xef\xbf\xbd si\xef\xbf\xbd b\xef\xbf\xbd""dziemy w\xef\xbf\xbd""a\xef\xbf\xbdnie do tej klasy a nie ca\xef\xbf\xbd""ego ALS_AnimBP" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOverlayWithCoverModeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandPredictionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsHeldArrowC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddRecoilImpulseC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayOverrideStateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoverCrouchWithDirectionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeAccelerationAmoutC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_L_AlphaC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Foots IK Variables\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Foots IK Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_R_AlphaC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CMC_FootsIK_AlphaC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_L_LocationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_R_LocationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_L_RotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_R_RotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_L_LocationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_R_LocationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_L_RotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_R_RotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelvisOffsetC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlailRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ragdoll\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ragdoll" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpineRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Aiming\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aiming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedAimingRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingAngleC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedAimingAngleC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimSweepTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputYawOffsetTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardYawTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftYawTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightYawTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimPrepertiesCustomC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeckTransformFromSnapshot_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedHipsDirectionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Anim Graph - Grounded\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim Graph - Grounded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldMoveC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotPlayingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayStopMovementTransitionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishStopTransitionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationScaleC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiagonalScaleAmoutC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBlend_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeanAmountC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - In Air" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Anim Graph - In Air\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim Graph - In Air" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpPlayRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - In Air" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallSpeedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - In Air" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryMotionMaskC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOverlayWithCoverModeC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LandPredictionC;
	static void NewProp_IsHeldArrowC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHeldArrowC;
	static void NewProp_AddRecoilImpulseC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddRecoilImpulseC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverlayOverrideStateC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CoverCrouchWithDirectionC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeAccelerationAmoutC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLock_L_AlphaC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLock_R_AlphaC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CMC_FootsIK_AlphaC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_L_LocationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_R_LocationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_L_RotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_R_RotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_L_LocationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_R_LocationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_L_RotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_R_RotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisOffsetC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlailRateC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpineRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedAimingRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimingAngleC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedAimingAngleC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimSweepTimeC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputYawOffsetTimeC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardYawTimeC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftYawTimeC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightYawTimeC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimPrepertiesCustomC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NeckTransformFromSnapshot;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackedHipsDirectionC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackedHipsDirectionC;
	static void NewProp_ShouldMoveC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldMoveC;
	static void NewProp_PivotC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PivotC;
	static void NewProp_PivotPlayingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PivotPlayingC;
	static void NewProp_PlayStopMovementTransitionC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayStopMovementTransitionC;
	static void NewProp_FinishStopTransitionC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FinishStopTransitionC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateRateC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationScaleC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DiagonalScaleAmoutC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityBlend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeanAmountC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FYawC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BYawC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LYawC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RYawC;
	static void NewProp_JumpedC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_JumpedC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpPlayRateC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallSpeedC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIWALS_AnimInstanceCpp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SecondaryMotionMaskC = { "SecondaryMotionMaskC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, SecondaryMotionMaskC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryMotionMaskC_MetaData), NewProp_SecondaryMotionMaskC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BlendOverlayWithCoverModeC = { "BlendOverlayWithCoverModeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, BlendOverlayWithCoverModeC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOverlayWithCoverModeC_MetaData), NewProp_BlendOverlayWithCoverModeC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LandPredictionC = { "LandPredictionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, LandPredictionC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandPredictionC_MetaData), NewProp_LandPredictionC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->IsHeldArrowC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC = { "IsHeldArrowC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsHeldArrowC_MetaData), NewProp_IsHeldArrowC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->AddRecoilImpulseC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC = { "AddRecoilImpulseC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddRecoilImpulseC_MetaData), NewProp_AddRecoilImpulseC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OverlayOverrideStateC = { "OverlayOverrideStateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, OverlayOverrideStateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayOverrideStateC_MetaData), NewProp_OverlayOverrideStateC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CoverCrouchWithDirectionC = { "CoverCrouchWithDirectionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, CoverCrouchWithDirectionC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoverCrouchWithDirectionC_MetaData), NewProp_CoverCrouchWithDirectionC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RelativeAccelerationAmoutC = { "RelativeAccelerationAmoutC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RelativeAccelerationAmoutC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeAccelerationAmoutC_MetaData), NewProp_RelativeAccelerationAmoutC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_AlphaC = { "FootLock_L_AlphaC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootLock_L_AlphaC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootLock_L_AlphaC_MetaData), NewProp_FootLock_L_AlphaC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_AlphaC = { "FootLock_R_AlphaC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootLock_R_AlphaC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootLock_R_AlphaC_MetaData), NewProp_FootLock_R_AlphaC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CMC_FootsIK_AlphaC = { "CMC_FootsIK_AlphaC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, CMC_FootsIK_AlphaC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CMC_FootsIK_AlphaC_MetaData), NewProp_CMC_FootsIK_AlphaC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_LocationC = { "FootLock_L_LocationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootLock_L_LocationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootLock_L_LocationC_MetaData), NewProp_FootLock_L_LocationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_LocationC = { "FootLock_R_LocationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootLock_R_LocationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootLock_R_LocationC_MetaData), NewProp_FootLock_R_LocationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_RotationC = { "FootLock_L_RotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootLock_L_RotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootLock_L_RotationC_MetaData), NewProp_FootLock_L_RotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_RotationC = { "FootLock_R_RotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootLock_R_RotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootLock_R_RotationC_MetaData), NewProp_FootLock_R_RotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_LocationC = { "FootOffset_L_LocationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootOffset_L_LocationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootOffset_L_LocationC_MetaData), NewProp_FootOffset_L_LocationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_LocationC = { "FootOffset_R_LocationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootOffset_R_LocationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootOffset_R_LocationC_MetaData), NewProp_FootOffset_R_LocationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_RotationC = { "FootOffset_L_RotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootOffset_L_RotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootOffset_L_RotationC_MetaData), NewProp_FootOffset_L_RotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_RotationC = { "FootOffset_R_RotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootOffset_R_RotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootOffset_R_RotationC_MetaData), NewProp_FootOffset_R_RotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PelvisOffsetC = { "PelvisOffsetC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, PelvisOffsetC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelvisOffsetC_MetaData), NewProp_PelvisOffsetC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FlailRateC = { "FlailRateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FlailRateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlailRateC_MetaData), NewProp_FlailRateC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SpineRotationC = { "SpineRotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, SpineRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpineRotationC_MetaData), NewProp_SpineRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingRotationC = { "SmoothedAimingRotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, SmoothedAimingRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothedAimingRotationC_MetaData), NewProp_SmoothedAimingRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimingAngleC = { "AimingAngleC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, AimingAngleC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingAngleC_MetaData), NewProp_AimingAngleC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingAngleC = { "SmoothedAimingAngleC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, SmoothedAimingAngleC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothedAimingAngleC_MetaData), NewProp_SmoothedAimingAngleC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimSweepTimeC = { "AimSweepTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, AimSweepTimeC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimSweepTimeC_MetaData), NewProp_AimSweepTimeC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_InputYawOffsetTimeC = { "InputYawOffsetTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, InputYawOffsetTimeC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputYawOffsetTimeC_MetaData), NewProp_InputYawOffsetTimeC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ForwardYawTimeC = { "ForwardYawTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, ForwardYawTimeC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardYawTimeC_MetaData), NewProp_ForwardYawTimeC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeftYawTimeC = { "LeftYawTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, LeftYawTimeC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftYawTimeC_MetaData), NewProp_LeftYawTimeC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RightYawTimeC = { "RightYawTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RightYawTimeC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightYawTimeC_MetaData), NewProp_RightYawTimeC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AnimPrepertiesCustomC = { "AnimPrepertiesCustomC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, AnimPrepertiesCustomC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimPrepertiesCustomC_MetaData), NewProp_AnimPrepertiesCustomC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_NeckTransformFromSnapshot = { "NeckTransformFromSnapshot", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, NeckTransformFromSnapshot), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeckTransformFromSnapshot_MetaData), NewProp_NeckTransformFromSnapshot_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC = { "TrackedHipsDirectionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, TrackedHipsDirectionC), Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedHipsDirectionC_MetaData), NewProp_TrackedHipsDirectionC_MetaData) }; // 747335142
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->ShouldMoveC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC = { "ShouldMoveC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldMoveC_MetaData), NewProp_ShouldMoveC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->PivotC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotC = { "PivotC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotC_MetaData), NewProp_PivotC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotPlayingC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->PivotPlayingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotPlayingC = { "PivotPlayingC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotPlayingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotPlayingC_MetaData), NewProp_PivotPlayingC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PlayStopMovementTransitionC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->PlayStopMovementTransitionC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PlayStopMovementTransitionC = { "PlayStopMovementTransitionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PlayStopMovementTransitionC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayStopMovementTransitionC_MetaData), NewProp_PlayStopMovementTransitionC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FinishStopTransitionC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->FinishStopTransitionC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FinishStopTransitionC = { "FinishStopTransitionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FinishStopTransitionC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishStopTransitionC_MetaData), NewProp_FinishStopTransitionC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotateRateC = { "RotateRateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RotateRateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateRateC_MetaData), NewProp_RotateRateC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotationScaleC = { "RotationScaleC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RotationScaleC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationScaleC_MetaData), NewProp_RotationScaleC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_DiagonalScaleAmoutC = { "DiagonalScaleAmoutC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, DiagonalScaleAmoutC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiagonalScaleAmoutC_MetaData), NewProp_DiagonalScaleAmoutC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_VelocityBlend = { "VelocityBlend", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, VelocityBlend), Z_Construct_UScriptStruct_FVelocityBlendC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityBlend_MetaData), NewProp_VelocityBlend_MetaData) }; // 2729506802
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeanAmountC = { "LeanAmountC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, LeanAmountC), Z_Construct_UScriptStruct_FLeanAmoutC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeanAmountC_MetaData), NewProp_LeanAmountC_MetaData) }; // 397305209
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FYawC = { "FYawC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FYawC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FYawC_MetaData), NewProp_FYawC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BYawC = { "BYawC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, BYawC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BYawC_MetaData), NewProp_BYawC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LYawC = { "LYawC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, LYawC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LYawC_MetaData), NewProp_LYawC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RYawC = { "RYawC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RYawC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RYawC_MetaData), NewProp_RYawC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->JumpedC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC = { "JumpedC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpedC_MetaData), NewProp_JumpedC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpPlayRateC = { "JumpPlayRateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, JumpPlayRateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpPlayRateC_MetaData), NewProp_JumpPlayRateC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FallSpeedC = { "FallSpeedC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FallSpeedC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallSpeedC_MetaData), NewProp_FallSpeedC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SecondaryMotionMaskC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BlendOverlayWithCoverModeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LandPredictionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OverlayOverrideStateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CoverCrouchWithDirectionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RelativeAccelerationAmoutC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_AlphaC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_AlphaC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CMC_FootsIK_AlphaC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_LocationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_LocationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_RotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_RotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_LocationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_LocationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_RotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_RotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PelvisOffsetC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FlailRateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SpineRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimingAngleC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingAngleC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimSweepTimeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_InputYawOffsetTimeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ForwardYawTimeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeftYawTimeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RightYawTimeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AnimPrepertiesCustomC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_NeckTransformFromSnapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotPlayingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PlayStopMovementTransitionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FinishStopTransitionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotateRateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotationScaleC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_DiagonalScaleAmoutC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_VelocityBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeanAmountC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FYawC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BYawC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LYawC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RYawC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpPlayRateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FallSpeedC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::ClassParams = {
	&UIWALS_AnimInstanceCpp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::Class_MetaDataParams), Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIWALS_AnimInstanceCpp()
{
	if (!Z_Registration_Info_UClass_UIWALS_AnimInstanceCpp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIWALS_AnimInstanceCpp.OuterSingleton, Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIWALS_AnimInstanceCpp.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<UIWALS_AnimInstanceCpp>()
{
	return UIWALS_AnimInstanceCpp::StaticClass();
}
UIWALS_AnimInstanceCpp::UIWALS_AnimInstanceCpp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIWALS_AnimInstanceCpp);
UIWALS_AnimInstanceCpp::~UIWALS_AnimInstanceCpp() {}
// End Class UIWALS_AnimInstanceCpp

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimInstanceCpp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIWALS_AnimInstanceCpp, UIWALS_AnimInstanceCpp::StaticClass, TEXT("UIWALS_AnimInstanceCpp"), &Z_Registration_Info_UClass_UIWALS_AnimInstanceCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIWALS_AnimInstanceCpp), 317443138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimInstanceCpp_h_2403497067(TEXT("/Script/IWALS_AbilitySystem"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimInstanceCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_IWALS__Version_3_3__5_4_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimInstanceCpp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
