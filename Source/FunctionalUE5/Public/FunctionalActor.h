// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FunctionalActor.generated.h"


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
class FUNCTIONALUE5_API AFunctionalActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFunctionalActor();

protected:
	template<ComponentConcept C = UActorComponent, FunctionConcept<C*> F>
	void ForEachComponent(F Function, bool bExcludeInvalidComponents = true)
	{
		TArray<C*> Components{};
		GetComponents(C::StaticClass(), Components);
		for(auto& Component : Components)
		{
			if(bExcludeInvalidComponents)
				if(!IsValid(Component))
					continue;

			Function(Component);
		}
	}	
};
