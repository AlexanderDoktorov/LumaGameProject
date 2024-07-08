// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "UI/AttributeDisplayWidget.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GameplayCueInterface.h"
#include "LumaAttributeSet.h"
#include "Components/TextBlock.h"

void UAttributeDisplayWidget::NativeConstruct()
{
	Super::NativeConstruct();
	AttributeText->TextDelegate.BindUFunction(this, "GetAttributeText");
	AttributeText->SynchronizeProperties();
}

FText UAttributeDisplayWidget::GetAttributeText() const
{
	if(auto PC = GetOwningPlayer())
	{
		if(auto AbilitySystemInterfaceOwner = Cast<IAbilitySystemInterface>(PC->GetPawn()))
		{
			if(auto GAS = AbilitySystemInterfaceOwner->GetAbilitySystemComponent())
			{
				if(GameplayAttribute.IsValid())
					return FText::AsNumber(FMath::RoundToInt(GAS->GetNumericAttribute(GameplayAttribute)));
			}
		}
	}
	return FText::AsNumber(0);
}
