#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "IWALS_BaseAttributeSet.h"
#include "IWALS_GameplayAbilitySet.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Character.h"
#include "GAS_MainCharacterCpp.generated.h"

UCLASS()
class IWALS_ABILITYSYSTEM_API AGAS_MainCharacterCpp : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	AGAS_MainCharacterCpp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//Define Base Variables For ALS Character
	UPROPERTY(BlueprintReadWrite, Category = "Essential Information", meta = (AllowPrivateAccess = "True"))
	bool IsMovingC = false;

	UPROPERTY(BlueprintReadWrite, Category = "Essential Information", meta = (AllowPrivateAccess = "True"))
	bool HasMovementInputC = false;

	UPROPERTY(BlueprintReadWrite, Category = "Essential Information", meta = (AllowPrivateAccess = "True"))
	bool IsStartedMovementOnTargetC = false;

	UPROPERTY(BlueprintReadWrite, Category = "Essential Information", meta = (AllowPrivateAccess = "True", DisplayName = "Start Interaction With Dynamic Prop C"))
	bool InteractionWithPropC = false;

	UPROPERTY(BlueprintReadWrite, Category = "Essential Information", meta = (AllowPrivateAccess = "True"))
	bool IsLayBackC = false;

	UPROPERTY(BlueprintReadWrite, Category = "Ragdoll System", meta = (AllowPrivateAccess = "True"))
	bool RagdollOnGroundC = false;

	UPROPERTY(BlueprintReadWrite, Category = "Ragdoll System", meta = (AllowPrivateAccess = "True"))
	bool RagdollFaceUpC = false;

	UPROPERTY(BlueprintReadWrite, Category = "Essential Information", meta = (AllowPrivateAccess = "True"))
	FVector AccelerationC = FVector(0, 0, 0);

	UPROPERTY(BlueprintReadWrite, Category = "Essential Information", meta = (AllowPrivateAccess = "True"))
	FVector RelativeAcceleractionC = FVector(0, 0, 0);

	UPROPERTY(BlueprintReadWrite, Category = "Cached Variables", meta = (AllowPrivateAccess = "True"))
	FVector PreviousVelocityC = FVector(0, 0, 0);

	UPROPERTY(BlueprintReadWrite, Category = "Ragdoll System", meta = (AllowPrivateAccess = "True"))
	FVector LastRagdollVelocityC = FVector(0, 0, 0);

	UPROPERTY(BlueprintReadWrite, Category = "Essential Information", meta = (AllowPrivateAccess = "True"))
	float SpeedC = 0.0;

	UPROPERTY(BlueprintReadWrite, Category = "Essential Information", meta = (AllowPrivateAccess = "True"))
	float MovementInputAmountC = 0.0;

	UPROPERTY(BlueprintReadWrite, Category = "Essential Information", meta = (AllowPrivateAccess = "True"))
	float MovementSpeedDifferenceC = 0.0;

	UPROPERTY(BlueprintReadWrite, Category = "Essential Information", meta = (AllowPrivateAccess = "True"))
	float AimYawRateC = 0.0;

	UPROPERTY(BlueprintReadWrite, Category = "Cached Variables", meta = (AllowPrivateAccess = "True"))
	float PreviousAimYawC = 0.0;

	UPROPERTY(BlueprintReadWrite, Category = "Cached Variables", meta = (AllowPrivateAccess = "True"))
	FGameplayAbilitySpecHandle AbilityHandle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Abilities")
	UIWALS_GameplayAbilitySet* AbilitiesData;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Abilities")
	TSubclassOf<class UGameplayEffect> DefaultAttributeEffect;

	UPROPERTY()
	class UIWALS_BaseAttributeSet* Attributes;

	UFUNCTION(BlueprintPure, Category = "Abilities", meta = (DisplayName = "Convert Literal Name To Tag", Keywords = "Gameplay Tag"))
	virtual FGameplayTag ConvertLiteralNameToTag(FName TagName);

	UFUNCTION(BlueprintPure, Category = "Abilities", meta = (DisplayName = "Get Sub Tag", Keywords = "Gameplay Tag"))
	virtual FString GetSubTag(const FGameplayTag& Tag, int32 DesiredDepth);

	UFUNCTION(BlueprintPure, Category = "Abilities", meta = (DisplayName = "Is Tag Leaf", Keywords = "Gameplay Tag"))
	virtual bool IsTagLeaf(const FGameplayTag& Tag);

	UFUNCTION(BlueprintCallable, Category = "Abilities", meta = (DisplayName = "Switch On Owned Tags", Keywords = "Gameplay Tag"))
	virtual bool SwitchOnOwnedTags(const FGameplayTag& NewState);

	UFUNCTION(BlueprintCallable, Category = "Abilities", meta = (DisplayName = "Switch On Owned Tags With Ignore", Keywords = "Gameplay Tag"))
	virtual bool SwitchOnOwnedTagsWithIgnore(const FGameplayTag& NewState, const FGameplayTagContainer& DoNotEdit);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void InitializeAttributes();
	virtual void GiveAbilities();

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	UFUNCTION(BlueprintCallable, Category = "Pawn|Input", meta = (DisplayName = "Try Create Inputs Binds For GAS", Keywords = "Inputs Player"))
	virtual void TryCreateInputsGAS();
};
