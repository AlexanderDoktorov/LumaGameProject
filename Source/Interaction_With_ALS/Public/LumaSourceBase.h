// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "LumaSourceBase.generated.h"

UCLASS()
class INTERACTION_WITH_ALS_API ALumaSourceBase : public AActor
{
	GENERATED_BODY()
	using SourceType = int;
public:
	ALumaSourceBase();

	UFUNCTION(BlueprintImplementableEvent)
	void OnGatherCapsule();

	// Simply decreases NumCapsules
	UFUNCTION(BlueprintCallable)
	void GatherCapsule();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = LumaSource)
	FORCEINLINE bool IsEmpty() const { return NumCapsules <= 0; };

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = LumaSource)
	FORCEINLINE int GetNumCapsules() const { return NumCapsules; };
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = LumaSource)
	int NumCapsules = 2;
};