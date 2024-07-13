#pragma once

#include "CoreMinimal.h"
#include "LumaTypes.generated.h"

template<class T, int N>
struct NVectorStatic
{
	static_assert(N >= 0);
	
	NVectorStatic() = default;
	NVectorStatic(T&& InitValue) : X0(InitValue), NextDimension(InitValue)
	{ }

	T& GetNthDimension(int NumDimension)
	{
		check(NumDimension < N && NumDimension >= 0);
		if(N == NumDimension)
			return X0;
		else
			return NextDimension.GetNthDimension(NumDimension);
	}
	
	T X0 = T();
	NVectorStatic<T, N - 1> NextDimension = {};
};

template<class T>
struct NVectorStatic<T, 0>
{
	NVectorStatic() = default;
	T X0 = T();

	T& GetNthDimension(int NumDimension)
	{
		return X0;
	}
};

UENUM(BlueprintType)
enum class EEmotion : uint8
{
	None,
	Aggressiveness,
	Reticence,
	SelfPreservation,
	Curiosity
};

ENUM_RANGE_BY_FIRST_AND_LAST(EEmotion, EEmotion::Aggressiveness, EEmotion::Curiosity)

static FColor GetCastColor(const EEmotion& CastType)
{
	switch (CastType) {
	case EEmotion::Aggressiveness:
		return FColor::Red;
		break;
	case EEmotion::Curiosity:
		return FColor::Cyan;
		break;
	case EEmotion::SelfPreservation:
		return FColor::Green;
		break;
	case EEmotion::Reticence:
		return FColor::Blue;
	case EEmotion::None:
		break;
	}
	return FColor::White;
}

USTRUCT(Blueprintable, BlueprintType)
struct FCastableAbilityDesc : public FTableRowBase
{
	GENERATED_BODY()

	// Handy function to get primary emotion if it is not set in this struct
	// Determined by max emotion requirement
	FORCEINLINE EEmotion GetPrimaryEmotion() const
	{
		if(PrimaryEmotion != EEmotion::None)
			return PrimaryEmotion;

		if(EmotionRequirements.IsEmpty())
			return PrimaryEmotion;

		EEmotion MostValuableEmotion = EEmotion::None;
		float MaxValue = 0.f;
		
		for (const auto& Pair : EmotionRequirements)
		{
			if(Pair.Value > MaxValue)
			{
				MaxValue = Pair.Value;
				MostValuableEmotion = Pair.Key;
			}
		}
		
		return MostValuableEmotion;
	}

	// Object preview
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CastableAbilityDesc)
	TSoftObjectPtr<UTexture2D> CastableObjectPreview = nullptr;

	// Object preview
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CastableAbilityDesc)
	TSubclassOf<AActor> CastableObjectClass = nullptr;

	// Primary Emotion Type
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CastableAbilityDesc)
	EEmotion PrimaryEmotion = EEmotion::None;

	// Emotion Requirements
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CastableAbilityDesc)
	TMap<EEmotion, float> EmotionRequirements{};
};