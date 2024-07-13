// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "AttributeSets/EmotionsAttributeSet.h"

#include "LumaTypes.h"
#include "Net/UnrealNetwork.h"

TMap<EEmotion, FGameplayAttribute> UEmotionsAttributeSet::Map{};

UEmotionsAttributeSet::UEmotionsAttributeSet()
{
	if(Map.IsEmpty())
	{
		// Emplacing attributes into map for convenient access
		Map.Emplace(EEmotion::Aggressiveness, GetAggressivenessAttribute());
		Map.Emplace(EEmotion::Reticence, GetReticenceAttribute());
		Map.Emplace(EEmotion::SelfPreservation, GetSelfPreservationAttribute());
		Map.Emplace(EEmotion::Curiosity,  GetCuriosityAttribute());
	}
}

void UEmotionsAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, Aggressiveness,		COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, Reticence,			COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, SelfPreservation,		COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, Curiosity,			COND_None, REPNOTIFY_Always);
}

void UEmotionsAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
}

FGameplayAttribute UEmotionsAttributeSet::GetAttributeByEmotion(const EEmotion& Emotion)
{
	if(auto Attr = Map.Find(Emotion))
		return *Attr;
	return {};
}

EEmotion UEmotionsAttributeSet::GetEmotionByAttribute(const FGameplayAttribute& GameplayAttribute)
{
	if(auto Attr = Map.FindKey(GameplayAttribute))
		return *Attr;
	return EEmotion::None;
}

void UEmotionsAttributeSet::OnRep_Aggressiveness(const FGameplayAttributeData& OldAggressiveness)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, Aggressiveness, OldAggressiveness);
}

void UEmotionsAttributeSet::OnRep_Reticence(const FGameplayAttributeData& OldReticence)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, Reticence, OldReticence);
}

void UEmotionsAttributeSet::OnRep_SelfPreservation(const FGameplayAttributeData& OldSelfPreservation)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, SelfPreservation, OldSelfPreservation);
}

void UEmotionsAttributeSet::OnRep_Curiosity(const FGameplayAttributeData& OldCuriosity)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, Curiosity, OldCuriosity);
}
