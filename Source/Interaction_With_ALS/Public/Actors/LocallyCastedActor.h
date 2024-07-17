// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/CastableObjectInterface.h"

#include "LocallyCastedActor.generated.h"

UCLASS()
class INTERACTION_WITH_ALS_API ALocallyCastedActor : public AActor, public ICastableObjectInterface
{
	GENERATED_BODY()

public:
	ALocallyCastedActor();
	virtual void BeginPlay() override;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = LocallyCastedActor)
	TArray<TObjectPtr<UPrimitiveComponent>> CastPrimitives;
};
