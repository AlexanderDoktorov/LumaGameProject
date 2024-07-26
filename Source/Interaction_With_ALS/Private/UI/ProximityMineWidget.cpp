// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "UI/ProximityMineWidget.h"
#include "AbilitySystemComponent.h"
#include "Components/Button.h"

UProximityMineWidget::UProximityMineWidget()
{
}

void UProximityMineWidget::NativeConstruct()
{
	CastSelectorButton->OnHovered.AddDynamic(this, &ThisClass::OnButtonHovered);
	CastSelectorButton->OnUnhovered.AddDynamic(this, &ThisClass::OnButtonUnHovered);

	Super::NativeConstruct();
}

void UProximityMineWidget::OnButtonPressed()
{
	auto OwnerAsc = GetAbilitySytemComponentFromPawn();
	if(!OwnerAsc)
		return;

	// Confirm targeting
	OwnerAsc->LocalInputConfirm();

	// Activate ability again if still hovered
	// @TODO: probably needs to be delayed for some time because ability can be running at the moment
	if(CastSelectorButton->IsHovered())
	{
		TryActivateCastAbility();
	}
}

void UProximityMineWidget::OnButtonHovered()
{
	// Activate ability as normal
	TryActivateCastAbility();
}

void UProximityMineWidget::OnButtonUnHovered()
{
	auto OwnerAsc = GetAbilitySytemComponentFromPawn();
	if(!OwnerAsc)
		return;

	// Cancel targeting
	OwnerAsc->LocalInputCancel();
}
