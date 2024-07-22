// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Components/LumaSystemComponent.h"
#include "AttributeSets/EmotionsAttributeSet.h"
#include "Components/EmotionSourceComponent.h"
#include "LumaTypes.h"
#include "GameplayEffect.h"
#include "LumaGameplayTags.h"
#include "Abilities/LumaCastAbility.h"
#include "Components/LumaAbilitySystemComponent.h"
#include "UI/LumaCastSelectorWidget.h"

ULumaSystemComponent::ULumaSystemComponent()
{
	
}

void ULumaSystemComponent::BeginPlay()
{
	Super::BeginPlay();
}

TArray<ULumaContextCastAbility*> ULumaSystemComponent::GetMostPrioritizedCasts() const
{
	auto OwnerAsc = GetAbilitySystemComponentFromOwner();
	if(!OwnerAsc)
		return {};

	// Get owner emotions to compare with when building sorted array
	FEmotionDescContainer OwnerEmotions{};
	for(EEmotion Emotion : TEnumRange<EEmotion>())
	{
		FEmotionDesc EmotionDesc{};
		EmotionDesc.Value = OwnerAsc->GetNumericAttribute(UEmotionsAttributeSet::GetAttributeByEmotion(Emotion));
		EmotionDesc.EmotionType = Emotion;
		OwnerEmotions.EmplaceEmotion(EmotionDesc);
	}

	// Gather all luma abilities specs from owner ASC and sort them by predicate
	// Sort abilities by distance
	TArray<FGameplayAbilitySpec*> Specs{};
	FGameplayTagContainer Tags { LumaGameplayTags::TAG_Ability_LumaCast_Context };
	OwnerAsc->GetActivatableGameplayAbilitySpecsByAllMatchingTags(Tags, Specs, false);

	// Find context cast abilities
	TArray<ULumaContextCastAbility*> InstancedAbilities{};
	for(auto& Spec : Specs)
	{
		// Get first instance of an ability and add it to an array
		if(ULumaContextCastAbility* ContextCastAbility = Cast<ULumaContextCastAbility>(Spec->GetAbilityInstances().IsEmpty() ? nullptr : Spec->GetAbilityInstances()[0]))
			InstancedAbilities.Add(ContextCastAbility);
	}

	// Build predicate for sorting
	auto SortPredicate = [&OwnerEmotions](const ULumaContextCastAbility* Lhs,const ULumaContextCastAbility* Rhs) -> bool
	{
		return Lhs->GetEmotionRequirements().GetDistanceTo(OwnerEmotions) < Rhs->GetEmotionRequirements().GetDistanceTo(OwnerEmotions);
	};
	Algo::Sort(InstancedAbilities, SortPredicate);
	
	// Make sure MaxCasts doesn't exceed all luma cast abilities number
	const int32 MaxIndx = FMath::Max(0, FMath::Min(InstancedAbilities.Num(), MaxCasts));

	TArray<ULumaContextCastAbility*> ReturnArray{};
	ReturnArray.Reserve(MaxIndx);
	// As abilities descs has been added using heap and predicate everything is already sorted, so just return MaxCasts casts
	for (int32 i = 0; i < MaxIndx; ++i)
	{
		ReturnArray.Emplace(InstancedAbilities[i]);
	}
	
	return ReturnArray;
}

void ULumaSystemComponent::HandleEmotionalSourcePresense(UEmotionSourceComponent* EmotionSourceComponent)
{
	// Cannot apply effects if it's not emmiting any emotions
	if(EmotionSourceComponent && EmotionSourceComponent->IsEmmiting())
	{
		UAbilitySystemComponent* OwnerAsc = GetAbilitySystemComponentFromOwner();
		if (!OwnerAsc || !GE_ApplyEmotionalAffect)
			return;
	
		FGameplayEffectContextHandle EffectContext = OwnerAsc->MakeEffectContext();
		EffectContext.AddSourceObject(this);

		FGameplayEffectSpecHandle SpecHandle = OwnerAsc->MakeOutgoingSpec(GE_ApplyEmotionalAffect, 1, EffectContext);
		EmotionSourceComponent->FillEmotionalAffects(*SpecHandle.Data.Get());

		// Apply emotional effect and add active handle to the source component
		FActiveGameplayEffectHandle ActiveHandle = OwnerAsc->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		if(ActiveHandle.WasSuccessfullyApplied())
		{
			AffectingEmotionalSources.AddUnique(EmotionSourceComponent);
			EmotionSourceComponent->AddActiveGameplayEffectHandle(ActiveHandle);
		}
	}
}

void ULumaSystemComponent::HandleEmotionalSourceAbsence(UEmotionSourceComponent* EmotionSourceComponent)
{
	if(EmotionSourceComponent)
		EmotionSourceComponent->RemoveEffectHandlesFrom(GetAbilitySystemComponentFromOwner());
}