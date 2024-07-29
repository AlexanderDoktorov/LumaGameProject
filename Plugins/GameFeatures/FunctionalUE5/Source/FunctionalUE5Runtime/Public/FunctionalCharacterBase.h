// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "FunctionalCharacterBase.generated.h"

class UGameplayAbility;
class UGameplayEffect;

UCLASS()
class FUNCTIONALUE5RUNTIME_API AFunctionalCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	AFunctionalCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void Tick(float DeltaTime) override;
	
	// IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
protected:
	// Override this to assiing AbilitySystemComponent and attribute sets
	virtual void InitializeAbilitySystem() PURE_VIRTUAL(AFunctionalCharacterBase::InitilizeAbilitySystem);
	virtual void GiveDefaultAbilities() const;
	void ApplyInitAttributeEffect() const;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components | Ability System")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components | Ability System")
	TSubclassOf<UGameplayEffect> InitAttributesEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components | Ability System")
	TArray<TSubclassOf<UGameplayAbility>> DefaultAbilites{};
};

