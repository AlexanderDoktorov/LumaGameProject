#pragma once

#include "concepts"

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

