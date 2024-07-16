// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "UI/LumaCastSelectorWidget.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "AttributeSets/EmotionsAttributeSet.h"
#include "UI/CastWidget.h"

void ULumaCastSelectorWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if(auto OwnerASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetOwningPlayerPawn()))
	{
		for(EEmotion EmotionType : TEnumRange<EEmotion>() )
		{
			OwnerASC->GetGameplayAttributeValueChangeDelegate(UEmotionsAttributeSet::GetAttributeByEmotion(EmotionType)).AddUObject(this, &ThisClass::OnEmotionalAttributeChangeInternal);
		}
	}
}

void ULumaCastSelectorWidget::OnEmotionalAttributeChangeInternal(const FOnAttributeChangeData& AttributeChangeData)
{
	OnEmotionalAttributeChange();
}

/*
void ULumaCastSelectorWidget::UpdateSelector()
{
	if(!CastWidgetClass || !CanvasPanel)
		return;

	for(int32 i = 0; i < NumSlots; ++i)
	{
		float Degrees = (360.f / NumSlots) * i;
		FVector2d CenterOffset = Radius * FVector2d(FMath::Cos(Degrees), FMath::Sin(Degrees));

		UCastWidget* NewCastWidget = Cast<UCastWidget>(CreateWidget(GetOwningPlayer(), CastWidgetClass, FName(FString("Cast Widget#").Append(FString::FromInt(i)))));
		CastWidgets.Add(NewCastWidget);

		// Set Position of the widget relative to panel center
		if(auto PanelSlot = CanvasPanel->AddChildToCanvas(NewCastWidget))
		{
			PanelSlot->SetAutoSize(true);
			PanelSlot->SetAnchors({ 0.5f, 0.5f, 0.5f, 0.5f});
			PanelSlot->SetPosition(CenterOffset);
		}
	}
}
*/
