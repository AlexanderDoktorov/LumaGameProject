// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Components/LumaSystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/LumaCastAbility.h"
#include "AttributeSets/EmotionsAttributeSet.h"
#include "Components/EmotionSourceComponent.h"
#include "LumaTypes.h"
#include "GameplayEffect.h"
#include "Abilities/LumaAbilitySystemComponent.h"
#include "UI/LumaCastSelectorWidget.h"
#include "UI/LumaHUD.h"

ULumaSystemComponent::ULumaSystemComponent()
{
	
}

void ULumaSystemComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// Add new attribute set so owner's ability system can manage emotional state of the owner
	if(auto AbilitySystemInterface = Cast<IAbilitySystemInterface>(GetOwner()))
	{
		OwnerAsc = Cast<ULumaAbilitySystemComponent>(AbilitySystemInterface->GetAbilitySystemComponent());
	}

	if(OwnerAsc.IsValid())
	{
		EmotionAttributes = NewObject<UEmotionsAttributeSet>(this, UEmotionsAttributeSet::StaticClass());
		OwnerAsc->AddAttributeSetSubobject(EmotionAttributes);
	}

	// Initilize Emotions Attributes
	if (OwnerAsc.IsValid() && GE_InitilizeAttributes)
	{
		FGameplayEffectContextHandle EffectContext = OwnerAsc->MakeEffectContext();
		EffectContext.AddSourceObject(this);

		FGameplayEffectSpecHandle SpecHandle = OwnerAsc->MakeOutgoingSpec(GE_InitilizeAttributes, 1, EffectContext);

		if (SpecHandle.IsValid())
		{
			FActiveGameplayEffectHandle GHandle = OwnerAsc->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		}
	}

	// Initilize ability desc with data table if present or use array if not specified
	InitilizeCastableAbilityDescs();

	// Give Luma Ability to an owner, but only on server
	if (GetOwnerRole() == ROLE_Authority && OwnerAsc.IsValid() && LumaCastAbility)
	{
		FGameplayAbilitySpec GameplayAbilitySpec{};
		GameplayAbilitySpec.Ability = LumaCastAbility.GetDefaultObject();
		GameplayAbilitySpec.Level = LumaCastAbility.GetDefaultObject()->GetAbilityLevel();
		GameplayAbilitySpec.SourceObject = this;
	
		LumaCastSpecHandle = OwnerAsc->GiveAbility(GameplayAbilitySpec);
	}
}

TArray<FCastableAbilityDesc> ULumaSystemComponent::GetMostPrioritizedCasts() const
{
	if(!OwnerAsc.IsValid())
		return {};

	// Get owner emotions to compare with when adding to the queue
	FEmotionDescContainer OwnerEmotions{};
	for(EEmotion Emotion : TEnumRange<EEmotion>())
	{
		FEmotionDesc EmotionDesc{};
		EmotionDesc.Value = OwnerAsc->GetNumericAttribute(UEmotionsAttributeSet::GetAttributeByEmotion(Emotion));
		EmotionDesc.EmotionType = Emotion;
		OwnerEmotions.EmplaceEmotion(EmotionDesc);
	}

	// Build predicate to pass to heap push for buidling a prioritized queue
	auto SortPredicate = [&OwnerEmotions](const FCastableAbilityDesc& Lhs, const FCastableAbilityDesc& Rhs) -> bool
	{
		return Lhs.EmotionRequirements.GetDistanceTo(OwnerEmotions) < Rhs.EmotionRequirements.GetDistanceTo(OwnerEmotions);
	};

	// Sort abilities by distance
	auto SortedAbilities = CastableAbilityDescs;
	SortedAbilities.Sort(SortPredicate);

	// Make sure MaxCasts doesn't exceed all luma cast abilities number
	const int32 MaxIndx = FMath::Max(0, FMath::Min(SortedAbilities.Num(), MaxCasts));

	TArray<FCastableAbilityDesc> ReturnArray{};
	// As abilities descs has been added using heap and predicate everything is already sorted, so just return MaxCasts casts
	for (int32 i = 0; i < MaxIndx; ++i)
	{
		ReturnArray.Emplace(SortedAbilities[i]);
	}
	
	return ReturnArray;
}

void ULumaSystemComponent::HandleEmotionalSourcePresense(UEmotionSourceComponent* EmotionSourceComponent)
{
	if(EmotionSourceComponent)
	{
		if(EmotionSourceComponent->ApplyEmotionalAffect(OwnerAsc.Get()).WasSuccessfullyApplied())
		{
			AffectingEmotionalSources.AddUnique(EmotionSourceComponent);
		}
	}
}

void ULumaSystemComponent::HandleEmotionalSourceAbsence(UEmotionSourceComponent* EmotionSourceComponent)
{
	if(EmotionSourceComponent)
	{
		EmotionSourceComponent->RemoveAllAffectsFrom(OwnerAsc.Get());
	}
	//ApplyEmotionAffectToOwner(EmoitonSourceActor);
}

void ULumaSystemComponent::InitilizeCastableAbilityDescs()
{
	if(!AbilityDescDataTable || !AbilityDescDataTable->IsValidLowLevel())
		return;
	
	// Add castable ability descs using predicate
	for(auto& DataRow : AbilityDescDataTable->GetRowMap())
	{
		if(FCastableAbilityDesc* Data = reinterpret_cast<FCastableAbilityDesc*>(DataRow.Value))
			CastableAbilityDescs.Emplace(*Data);
	}
}
