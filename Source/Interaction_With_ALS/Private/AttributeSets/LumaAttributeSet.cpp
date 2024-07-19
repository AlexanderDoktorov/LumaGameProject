// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "AttributeSets/LumaAttributeSet.h"
#include "Net/UnrealNetwork.h"

void ULumaAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, Luma, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(ThisClass, MaxLuma, COND_None, REPNOTIFY_Always);
}

void ULumaAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if(Attribute == GetLumaAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxLuma());
	}
}

void ULumaAttributeSet::OnRep_Luma(const FGameplayAttributeData& OldLuma)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, Luma, OldLuma);
}

void ULumaAttributeSet::OnRep_MaxLuma(const FGameplayAttributeData& OldMaxLuma)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(ThisClass, MaxLuma, OldMaxLuma);
}
