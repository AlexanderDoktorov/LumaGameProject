// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "LumaTypes.h"
#include "LocalCastActor.generated.h"

class UBoxComponent;

template<class T>
concept ComponentConcept = std::is_base_of_v<UActorComponent, T> && requires
{
	{ T::StaticClass() } -> std::convertible_to<TSubclassOf<UActorComponent>>;
};

template<class FType, class InType>
concept FunctionConcept = requires(FType F, InType InParam)
{
	{ F(InParam) };
};


UCLASS()
class INTERACTION_WITH_ALS_API ALocalCastActor : public AActor
{
	GENERATED_BODY()
	static constexpr auto MaterialParamName_OpacityMask = "Opacity Mask";
public:
	ALocalCastActor();

	AActor* PerformCast(APawn* InInstigator, bool bDestroyIfSuccess = true);
	virtual void OnLumaSelectorWidgetOpen();
	virtual void OnLumaSelectorWidgetClosed();
	
	void SetPrimitiveCollisionEnabled(bool bEnabled);
	FORCEINLINE bool IsCastPrimitive(const UPrimitiveComponent* const PrimitiveComponent) const { return CastPrimitives.Contains(PrimitiveComponent); }
	FORCEINLINE bool HasBeenCasted() const { return bHasBeenCasted; }

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> LocalCastPreview = nullptr;
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "LocalCastActor")
	TArray<TObjectPtr<UPrimitiveComponent>> CastPrimitives;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "LocalCastActor")
	TSubclassOf<AActor> CastActorClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "LocalCastActor")
	float VisibilityRadius;
public:
#if WITH_EDITOR
	UFUNCTION(CallInEditor, Category = "LocalCastActor|Interaction")
	void AddPrimitive();
#endif

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "LocalCastActor|Interaction")
	uint8 bSelectNewlyCreatedComponent : 1 = 1;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "LocalCastActor|Interaction")
	TSubclassOf<UPrimitiveComponent> PrimitiveClass;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "LocalCastActor|Interaction")
	FColor CastPrimitiveColor = FColor::Cyan;
#endif
private:
	uint8 bHasBeenCasted : 1 = 0;
};