// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#include "Components/EmotionSourceComponent.h"
#include "AbilitySystemInterface.h"
#include "AttributeSets/EmotionsAttributeSet.h"

UEmotionSourceComponent::UEmotionSourceComponent()
{

}

bool UEmotionSourceComponent::ApplyEmotionalAffect(const AActor* EmotionReciever, bool bInverse) const
{
	if (!EmotionReciever)
		return false;

	UAbilitySystemComponent* ASC = nullptr;
	if(const auto AbilitySystemInterface = Cast<IAbilitySystemInterface>(EmotionReciever))
		ASC = AbilitySystemInterface->GetAbilitySystemComponent();

	if(!ASC)
		return false;
	
	FGameplayEffectContextHandle EffectContext = ASC->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	// Apply emotional effect and return if it was successfully applied
	return ASC->ApplyGameplayEffectToSelf(CreateNewEmotionalEffect(bInverse), 1, EffectContext).WasSuccessfullyApplied();
}

UGameplayEffect* UEmotionSourceComponent::CreateNewEmotionalEffect(const bool& bInverse) const
{
	UGameplayEffect* GE_AffectEmmotionalState = NewObject<UGameplayEffect>(GetTransientPackage(),"Affect Emotional State Effect");
	GE_AffectEmmotionalState->DurationPolicy = EGameplayEffectDurationType::Instant;

	for (auto& Pair : EmotionalAffects)
	{
		if(FGameplayAttribute Attribute = UEmotionsAttributeSet::GetAttributeByEmotion(Pair.Key); Attribute.IsValid())
		{
			FGameplayModifierInfo ModifierInfo = bInverse ? Pair.Value.InverseEffectModifier : Pair.Value.DirectEffectModifier;
			ModifierInfo.Attribute = Attribute;
			GE_AffectEmmotionalState->Modifiers.Emplace(ModifierInfo);
		}
	}

	return GE_AffectEmmotionalState;
}
