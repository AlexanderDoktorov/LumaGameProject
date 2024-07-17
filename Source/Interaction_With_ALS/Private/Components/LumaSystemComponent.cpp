// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Components/LumaSystemComponent.h"
#include "AttributeSets/EmotionsAttributeSet.h"
#include "Components/EmotionSourceComponent.h"
#include "LumaTypes.h"
#include "GameplayEffect.h"
#include "Abilities/LumaAbilitySystemComponent.h"
#include "UI/LumaCastSelectorWidget.h"

ULumaSystemComponent::ULumaSystemComponent()
{
	
}

void ULumaSystemComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// Initilize ability desc with data table if present or use array if not specified
	InitilizeCastableAbilityDescs();
}

TArray<FCastableObjectDesc> ULumaSystemComponent::GetMostPrioritizedCasts() const
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

	// Build predicate for sorting
	auto SortPredicate = [&OwnerEmotions](const FCastableObjectDesc& Lhs, const FCastableObjectDesc& Rhs) -> bool
	{
		return Lhs.EmotionRequirements.GetDistanceTo(OwnerEmotions) < Rhs.EmotionRequirements.GetDistanceTo(OwnerEmotions);
	};

	// Sort abilities by distance
	auto SortedAbilities = CastableObjectDescs;
	SortedAbilities.Sort(SortPredicate);

	// Make sure MaxCasts doesn't exceed all luma cast abilities number
	const int32 MaxIndx = FMath::Max(0, FMath::Min(SortedAbilities.Num(), MaxCasts));

	TArray<FCastableObjectDesc> ReturnArray{};
	// As abilities descs has been added using heap and predicate everything is already sorted, so just return MaxCasts casts
	for (int32 i = 0; i < MaxIndx; ++i)
	{
		ReturnArray.Emplace(SortedAbilities[i]);
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

void ULumaSystemComponent::InitilizeCastableAbilityDescs()
{
	if(!AbilityDescDataTable || !AbilityDescDataTable->IsValidLowLevel())
		return;
	
	// Add castable ability descs using predicate
	for(auto& DataRow : AbilityDescDataTable->GetRowMap())
	{
		if(FCastableObjectDesc* Data = reinterpret_cast<FCastableObjectDesc*>(DataRow.Value))
			CastableObjectDescs.Emplace(*Data);
	}
}
