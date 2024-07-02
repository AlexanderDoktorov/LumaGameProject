// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "LumaSourceBase.generated.h"

UCLASS()
class INTERACTION_WITH_ALS_API ALumaSourceBase : public AActor
{
	GENERATED_BODY()
public:
	ALumaSourceBase();

	UFUNCTION(BlueprintImplementableEvent)
	void OnLumaGather(const float& GatheredLuma);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = LumaSource)
	FORCEINLINE bool IsEmpty() const { return LumaSourcesArray.IsEmpty(); };

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = LumaSource)
	FORCEINLINE float GetLumaToGather() const { return IsEmpty() ? 0.f : LumaSourcesArray.Top(); };
	
	float GatherLuma();
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = LumaSource)
	TArray<float> LumaSourcesArray = { 20, 10, 5 };
};