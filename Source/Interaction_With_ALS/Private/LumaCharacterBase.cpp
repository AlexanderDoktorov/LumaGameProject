// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#include "LumaCharacterBase.h"
#include "LumaAttributeSet.h"
#include "LumaGameplayTags.h"
#include "LumaSourceBase.h"

ALumaCharacterBase::ALumaCharacterBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer.SetDefaultSubobjectClass("Attributes", ULumaAttributeSet::StaticClass()))
{
	PrimaryActorTick.bCanEverTick = true;

}

void ALumaCharacterBase::GatherLuma(ALumaSourceBase* LumaSource) const
{
	if(!LumaSource)
		return;
	
	// Apply Gather Effect To Character
	if (AbilitySystemComponent && LumaGatherGameplayEffect)
	{
		FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
		EffectContext.AddSourceObject(this);
		
		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(LumaGatherGameplayEffect, 1, EffectContext);

		if (FGameplayEffectSpec* Spec = SpecHandle.Data.Get())
		{
			// PROBABLY ISSUE WITH TAG -> "Data.LumaToGather" REDO WITH NATIVE GAMEPLAY TAGS
			Spec->SetSetByCallerMagnitude(TAG_Data_LumaToGather, LumaSource->GatherLuma());

			// Apply Effect
			AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		}
	}

}
