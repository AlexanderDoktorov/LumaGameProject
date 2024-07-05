// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "UI/CastWidget.h"

#include "LumaPlayerController.h"
#include "Components/Button.h"

void UCastWidget::NativeConstruct()
{
	Super::NativeConstruct();

	CastSelectorButton->OnHovered.AddDynamic(this, &ThisClass::OnButtonHovered);
	CastSelectorButton->OnPressed.AddDynamic(this, &ThisClass::OnButtonPressed);
	CastSelectorButton->OnClicked.AddDynamic(this, &ThisClass::OnButtonClicked);
	CastSelectorButton->OnUnhovered.AddDynamic(this, &ThisClass::OnButtonUnHovered);
	CastSelectorButton->SynchronizeProperties();
}

void UCastWidget::MatchButtonColorToCastType()
{
	FButtonStyle ButtonStyle = CastSelectorButton->GetStyle();
	ButtonStyle.Normal.TintColor = GetCastColor(CastType);
	ButtonStyle.Hovered.TintColor = GetCastColor(CastType).ReinterpretAsLinear() * 0.55f;
	ButtonStyle.Pressed.TintColor = GetCastColor(CastType).ReinterpretAsLinear() * 0.15f;
	CastSelectorButton->SetStyle(ButtonStyle);
}

void UCastWidget::SyncShapeBetweenStyles()
{
	FButtonStyle ButtonStyle = CastSelectorButton->GetStyle();
	ButtonStyle.Hovered.DrawAs = ButtonStyle.Normal.DrawAs;
	ButtonStyle.Pressed.DrawAs = ButtonStyle.Normal.DrawAs;
	ButtonStyle.Disabled.DrawAs = ButtonStyle.Normal.DrawAs;

	ButtonStyle.Hovered.OutlineSettings = ButtonStyle.Normal.OutlineSettings;
	ButtonStyle.Pressed.OutlineSettings = ButtonStyle.Normal.OutlineSettings;
	ButtonStyle.Disabled.OutlineSettings = ButtonStyle.Normal.OutlineSettings;
}

void UCastWidget::OnButtonHovered()
{

}

void UCastWidget::OnButtonClicked()
{
	if(auto PlayerController = Cast<ALumaPlayerController>(GetOwningPlayer()))
	{
		PlayerController->Call_TryPerformLumaCast(CastType);
	}
}

void UCastWidget::OnButtonPressed()
{
	if(auto PlayerController = Cast<ALumaPlayerController>(GetOwningPlayer()))
	{
		PlayerController->Call_TryPerformLumaCast(CastType);
	}
}

void UCastWidget::OnButtonUnHovered()
{
}
