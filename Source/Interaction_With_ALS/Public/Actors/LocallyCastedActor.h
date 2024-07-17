// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "LumaTypes.h"
#include "Selection.h"
#include "LocallyCastedActor.generated.h"

class UBoxComponent;

UCLASS(PrioritizeCategories=("LocallyCastedActor"))
class INTERACTION_WITH_ALS_API ALocallyCastedActor : public AActor
{
	GENERATED_BODY()

	static constexpr auto MaterialParamName_OpacityMask = "Opacity Mask";
public:
	ALocallyCastedActor();
	virtual void BeginPlay() override;

	UFUNCTION(CallInEditor, Category = LocallyCastedActor)
	void AddBoxCollision();

	UFUNCTION(CallInEditor, Category = LocallyCastedActor)
	void AddSphereCollision();

	void SetPrimitiveCollisionEnabled(bool bEnabled);

	// Hides all meshes on begin play so only their overlay material is shown
	// Parent class might want to override this
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void MakeMaterialsTransparent();

	FORCEINLINE FCastableObjectDesc GetCastableObjectDesc() const { return CastableObjectDesc; }

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = LocallyCastedActor)
	uint8 bSelectNewlyCreatedComponent : 1 = 1;
#endif
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = LocallyCastedActor)
	TArray<TObjectPtr<UPrimitiveComponent>> CastPrimitives;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = LocallyCastedActor)
	FCastableObjectDesc CastableObjectDesc{};
	
	template<class T = UBoxComponent>
	requires std::is_base_of_v<UPrimitiveComponent, T>
	T* AddNewPrimitive()
	{
		T* Primitive = NewObject<T>(this);
		if(Primitive)
		{
			Primitive->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			Primitive->RegisterComponent();
			AddInstanceComponent(Primitive);
			CastPrimitives.Add(Primitive);
		}
#if WITH_EDITOR
		USelection* Selection = GEditor->GetSelectedActors();
		Selection->Deselect(this);
		FViewportClient* ViewportClient = GEditor->GetActiveViewport()->GetClient();
		ViewportClient->RedrawRequested(GEditor->GetActiveViewport());
		GEditor->SelectComponent(Primitive, true, false);
#endif
		return Primitive;
	}
};