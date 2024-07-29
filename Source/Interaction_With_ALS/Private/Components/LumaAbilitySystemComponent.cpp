// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Components/LumaAbilitySystemComponent.h"
#include "UI/LumaCastSelectorWidget.h"
#include "UI/LumaHUD.h"

ULumaAbilitySystemComponent::ULumaAbilitySystemComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void ULumaAbilitySystemComponent::OnGiveAbility(FGameplayAbilitySpec& AbilitySpec)
{
	Super::OnGiveAbility(AbilitySpec);

	/*
	// Update selector widget if character owner has it (particullary it's HUD) //
	APawn* PawnAvatar = Cast<APawn>(GetAvatarActor());
	if(!PawnAvatar)
		return;

	APlayerController* PlayerController = Cast<APlayerController>(PawnAvatar->GetController());
	if(!PlayerController)
		return;
	
	ALumaHUD* LumaHUD = Cast<ALumaHUD>(PlayerController->GetHUD());
	if(!LumaHUD)
		return;
	
	if(LumaHUD->GetLumaSelectorWidget())
		LumaHUD->GetLumaSelectorWidget()->UpdateAbilities();
	*/
}

void ULumaAbilitySystemComponent::BeginPlay()
{
	Super::BeginPlay();
}
