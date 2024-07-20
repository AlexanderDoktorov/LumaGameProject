// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "LumaTypes.h"
#include "LocallyCastedActor.generated.h"

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
class INTERACTION_WITH_ALS_API ALocallyCastedActor : public AActor
{
	GENERATED_BODY()
	static constexpr auto MaterialParamName_OpacityMask = "Opacity Mask";
public:
	ALocallyCastedActor();

	// Hides all meshes on begin play so only their overlay material is shown
	// Parent class might want to override this
	virtual void SetMateialsOpacityMask(float OpacityMask);
	virtual void OnLumaSelectorWidgetOpen();
	virtual void OnLumaSelectorWidgetClosed();
	virtual void ResetToInitialState();

	template<ComponentConcept C, FunctionConcept<C*> F>
	void ForEachComponent(F Function)
	{
		TArray<C*> Components{};
		GetComponents(C::StaticClass(), Components);
		for(auto& Component : Components)
		{
			if(!Component)
				continue;

			Function(Component);
		}
	}
	
	void SetPrimitiveCollisionEnabled(bool bEnabled);
	FORCEINLINE bool IsCastPrimitive(const UPrimitiveComponent* const PrimitiveComponent) const { return CastPrimitives.Contains(PrimitiveComponent); }
	FORCEINLINE bool HasBeenReseted() const { return bHasBeenReseted; }

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> LocalCastPreview = nullptr;
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = LocallyCastedActor)
	TArray<TObjectPtr<UPrimitiveComponent>> CastPrimitives;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = LocallyCastedActor)
	TObjectPtr<UMaterialInterface> OverlayMaterial;
public:
#if WITH_EDITOR
	UFUNCTION(CallInEditor, Category = InteractionCollision)
	void AddPrimitive();
#endif

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = InteractionCollision)
	uint8 bSelectNewlyCreatedComponent : 1 = 1;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = InteractionCollision)
	TSubclassOf<UPrimitiveComponent> PrimitiveClass;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = InteractionCollision)
	FColor CastPrimitiveColor = FColor::Cyan;
#endif
private:
	TArray<TWeakObjectPtr<const UPrimitiveComponent>> DefaultPrimtivies;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess), Category = LocallyCastedActor)
	uint8 bInitilizeAsCastable : 1 = 1;
	uint8 bHasBeenReseted : 1 = 0;
};