// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "FunctionalPlayerState.generated.h"


static const FName PlayerAbilitySystemComponentName = FName("PlayerAbilitySystem");
/**
 * 
 */
UCLASS()
class FUNCTIONALUE5RUNTIME_API AFunctionalPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	AFunctionalPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	FORCEINLINE virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent; }
private:
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
};
