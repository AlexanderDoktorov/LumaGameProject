// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include <concepts>
#include "ArrayHelpersFunctionLibrary.generated.h"


template<class F, class T1, class T2>
concept Predicate = requires(F func, const T1&& a, const T2&& b)
{
	{ func(a, b) } -> std::convertible_to<bool>;
};

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API UArrayHelpersFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	template<class T, class T1, class T2, Predicate<T1, T2> Pred>
	requires
		std::is_pointer_v<decltype(std::declval<Pred>()(std::declval<T1>(), std::declval<T2>()))> &&
		std::is_convertible_v<decltype(std::declval<Pred>()(std::declval<T1>(), std::declval<T2>())), const T*>
	static TArray<const T*> IntersectByPredicate(const TArray<T1>& Arr0, const TArray<T2>& Arr1, Pred PredicateFunction)
	{
		TArray<const T*> ResultArray;
		for (const auto& Val0 : Arr0)
		{ 
			for (const auto& Val1 : Arr1)
			{
				if(auto PredicateResult = PredicateFunction(Val0, Val1))
					ResultArray.Emplace(PredicateResult);
			}
		}
		return ResultArray;
	}
};

