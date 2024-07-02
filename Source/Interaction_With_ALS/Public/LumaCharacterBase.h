// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GAS_MainCharacterCpp.h"

#include "LumaCharacterBase.generated.h"

class ALumaSourceBase;
/**
 * @author Doktorov Alexander
 */
UCLASS()
class INTERACTION_WITH_ALS_API ALumaCharacterBase : public AGAS_MainCharacterCpp
{
	GENERATED_BODY()
public:
	ALumaCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
protected:
	UFUNCTION(BlueprintCallable)
	void GatherLuma(ALumaSourceBase* LumaSource) const;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = GameplayEffects)
	TSubclassOf<class UGameplayEffect> LumaGatherGameplayEffect = nullptr;
};
