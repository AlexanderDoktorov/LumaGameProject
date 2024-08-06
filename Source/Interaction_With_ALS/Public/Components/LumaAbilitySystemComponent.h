// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "LumaAbilitySystemComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class INTERACTION_WITH_ALS_API ULumaAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
public:
	ULumaAbilitySystemComponent();
	virtual void OnGiveAbility(FGameplayAbilitySpec& AbilitySpec) override;
protected:
	virtual void BeginPlay() override;
};
