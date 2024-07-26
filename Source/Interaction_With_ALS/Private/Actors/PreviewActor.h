// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PreviewActor.generated.h"

UCLASS()
class INTERACTION_WITH_ALS_API APreviewActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APreviewActor();
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Preview)
	TSubclassOf<AActor> PreviewActorClass;
private:
	void CopyPrimitivesFromActor();
};
