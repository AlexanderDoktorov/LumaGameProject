// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Components/LumaAbilitySystemComponent.h"

#include "EnhancedInputComponent.h"
#include "Abilities/GameplayAbilityBase.h"
#include "GameFramework/PlayerState.h"

ULumaAbilitySystemComponent::ULumaAbilitySystemComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void ULumaAbilitySystemComponent::OnGiveAbility(FGameplayAbilitySpec& AbilitySpec)
{
	Super::OnGiveAbility(AbilitySpec);

	// If avatar actor is a pawn, we can bind input to it's input component
	APlayerState* PS = Cast<APlayerState>(GetOwnerActor());
	if(!PS || !PS->GetPlayerController())
		return;

	const UGameplayAbilityBase* BaseAbility = Cast<UGameplayAbilityBase>(AbilitySpec.Ability);
	if(!BaseAbility)
		return;

	// Bind input action for ability if it has one
	if(UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PS->GetPlayerController()->InputComponent))
	{
		FGameplayAbilitySpecHandle AbilityHandle = AbilitySpec.Handle;
		EnhancedInputComponent->BindActionValueLambda(BaseAbility->IA_ActivateAbility, ETriggerEvent::Triggered, [this, AbilityHandle](const FInputActionValue& Value)
		{
			// Activate ability from it's handle
			TryActivateAbility(AbilityHandle);
		});
	}
}

void ULumaAbilitySystemComponent::BeginPlay()
{
	Super::BeginPlay();
}
