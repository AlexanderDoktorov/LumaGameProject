// Fill out your copyright notice in the Description page of Project Settings.


#include "FunctionalCharacterBase.h"

#include "AbilitySystemComponent.h"
#include "GameplayAbilitySpec.h"

// Sets default values
AFunctionalCharacterBase::AFunctionalCharacterBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

// Called every frame
void AFunctionalCharacterBase::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);
}

UAbilitySystemComponent* AFunctionalCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AFunctionalCharacterBase::GiveDefaultAbilities() const
{
	check(AbilitySystemComponent);

	if(!HasAuthority())
		return;
	for (const auto& AbilityClass : DefaultAbilites)
	{
		const FGameplayAbilitySpec AbilitySpec(AbilityClass, 1);
		AbilitySystemComponent->GiveAbility(AbilitySpec);
	}
}

void AFunctionalCharacterBase::ApplyInitAttributeEffect() const
{
	if(!AbilitySystemComponent || !InitAttributesEffect)
		return;

	// Make effect context and set source object (that created this effect) to this class
	auto EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	// Make outgoin specification handle that uses Effect class, level and context
	const auto SpecificationHandle = AbilitySystemComponent->MakeOutgoingSpec(InitAttributesEffect, 1, EffectContext);

	// Finally apply default effect
	if(SpecificationHandle.IsValid())
	{
		AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecificationHandle.Data.Get());
	}
}
