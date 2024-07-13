// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Components/LumaSystemComponent.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/LumaCastAbility.h"
#include "AttributeSets/EmotionsAttributeSet.h"
#include "Components/EmotionSourceComponent.h"
#include "LumaTypes.h"
#include "GameplayEffect.h"

ULumaSystemComponent::ULumaSystemComponent()
{
}

void ULumaSystemComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// Add new attribute set so owner's ability system can manage emotional state of the owner
	if(auto AbilitySystemInterface = Cast<IAbilitySystemInterface>(GetOwner()))
	{
		OwnerAsc = AbilitySystemInterface->GetAbilitySystemComponent();
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

	TMap<EEmotion, float> CurrentEmotions{};
	for(EEmotion Emotion : TEnumRange<EEmotion>())
	{
		CurrentEmotions.Emplace(Emotion, OwnerAsc->GetNumericAttribute(UEmotionsAttributeSet::GetAttributeByEmotion(Emotion)));
	}

	// Get emotion attributes
	double MinDistance = MAX_dbl;
	TArray<FCastableAbilityDesc> PrioritizedCasts{};

	// Iterate through available luma abilities and find closest that fits characters emotions
	
	// NOTE : NOW IT CHECKS COSTS FOR AN ABILITY AND IT IS WRONG, COSTS AND EMOTIONAL REQUIREMENT ARE DIFFERENT THINGS
	// NEEDS FIX
	TArray<TPair<double, int32>> IndexDistances{};
	for(int32 i = 0; i < CastableAbilityDescs.Num(); ++i)
	{
		IndexDistances.Emplace( TPair<double, int32>{ GetDistance(CastableAbilityDescs[i].EmotionRequirements, CurrentEmotions), i });
	}
	IndexDistances.Sort([](const TPair<double, int32>& Lhs, const TPair<double, int32>& Rhs)
	{
		return Lhs.Key < Rhs.Key;
	});

	for(int32 i = 0; i < FMath::Min(MaxCasts, IndexDistances.Num()); ++i)
	{
		PrioritizedCasts.Add(CastableAbilityDescs[IndexDistances[i].Value]);
	}

	// Find intersection
	/*
	auto f = [](const FGameplayAttribute& Attribute, const FGameplayEffectModifiedAttribute& ModifiedAttribute) -> const FGameplayEffectModifiedAttribute* {
		if(Attribute == ModifiedAttribute.Attribute)
			return &ModifiedAttribute;
		return nullptr;
	};
	auto ModifiedAttributes = GetCostEffectSpec().ModifiedAttributes;
	auto Intersection = UArrayHelpersFunctionLibrary::IntersectByPredicate<FGameplayEffectModifiedAttribute>(, ModifiedAttributes, f);
	*/
	
	return PrioritizedCasts;
}

void ULumaSystemComponent::HandleEmotionalSourcePresense(AActor* EmoitonSourceActor)
{
	ApplyEmotionAffectToOwner(EmoitonSourceActor, false);
}

void ULumaSystemComponent::HandleEmotionalSourceAbsence(AActor* EmoitonSourceActor)
{
	ApplyEmotionAffectToOwner(EmoitonSourceActor, true);
}

void ULumaSystemComponent::ApplyEmotionAffectToOwner(const AActor* EmoitonSourceActor, const bool& bInverse)
{
	if(EmoitonSourceActor)
	{
		if(auto EmoitonSourceComponent = Cast<UEmotionSourceComponent>(EmoitonSourceActor->GetComponentByClass(UEmotionSourceComponent::StaticClass())))
		{
			if(EmoitonSourceComponent->ApplyEmotionalAffect(GetOwner(), bInverse))
			{
				if(bInverse)
					AffectingEmotionalSources.Remove(EmoitonSourceComponent);
				else
					AffectingEmotionalSources.AddUnique(EmoitonSourceComponent);
			}
		}
	}
}

double ULumaSystemComponent::GetDistance(const TMap<EEmotion, float>& Map1, const TMap<EEmotion, float>& Map2)
{
	const TMap<EEmotion, float>& LargerMap = Map1.Num() > Map2.Num() ? Map1 : Map2;
	const TMap<EEmotion, float>& SmallerMap = Map1.Num() > Map2.Num() ? Map2 : Map1;

	double Distance = 0.f;
	for (auto& Pair0 : LargerMap)
	{
		if(auto Value = SmallerMap.Find(Pair0.Key))
		{
			Distance += FMath::Square(*Value - Pair0.Value);
		}
		else
			Distance += FMath::Square(Pair0.Value);
	}
	return FMath::Sqrt(Distance);
}

void ULumaSystemComponent::InitilizeCastableAbilityDescs()
{
	if(!AbilityDescDataTable)
		return;

	for(auto& DataRow : AbilityDescDataTable->GetRowMap())
	{
		if(FCastableAbilityDesc* Data = reinterpret_cast<FCastableAbilityDesc*>(DataRow.Value))
			CastableAbilityDescs.Emplace(*Data);
	}
}
