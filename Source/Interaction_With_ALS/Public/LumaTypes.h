#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "LumaTypes.generated.h"

class ULumaCastAbility;
class UGameplayAbility;

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

UENUM(BlueprintType)
enum class ECastType : uint8
{
	None,
	Local,
	Context
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

USTRUCT(BlueprintType)
struct FEmotionDesc
{
	GENERATED_BODY()

	FEmotionDesc() = default;
	FEmotionDesc(EEmotion EmotionType, float Value) : EmotionType(EmotionType), Value(Value)
	{}

	// Emotion Type
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = EmotionDesc, meta = (InvalidEnumValues="None"))
	EEmotion EmotionType = EEmotion::None;

	// Amount of an emotion
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = EmotionDesc, meta = (ClampMin=0))
	float Value = 0.f;

	bool operator==(const FEmotionDesc& Other) const = default;
};

// Used to store emotions for any object
// Example:
// Aggressiveness : 10
// Reticence : 15
// SelfPreservation : 2
// Curiosity : 7
USTRUCT(BlueprintType)
struct FEmotionDescContainer
{
	GENERATED_BODY()

	template<class T>
	requires std::is_same_v<std::decay_t<T>, FEmotionDesc>
	void EmplaceEmotion(T&& NewEmotionDesc)
	{
		if(!HasEmotion(NewEmotionDesc.EmotionType) && NewEmotionDesc.EmotionType != EEmotion::None)
		{
			EmotionDescs.Emplace(Forward<T>(NewEmotionDesc));
		}
	}
	
	FORCEINLINE bool HasEmotion(const EEmotion& Emotion) const
	{
		return GetEmotionDescPtr(Emotion) != nullptr;
	}
	FORCEINLINE const FEmotionDesc* GetEmotionDescPtr(const EEmotion& Emotion) const
	{
		return EmotionDescs.FindByPredicate([&Emotion](const FEmotionDesc& Other)
		{
			return Emotion == Other.EmotionType;
		});
	}
	FORCEINLINE float GetDistanceTo(const FEmotionDescContainer& Other) const
	{
		double DistanceSquare = 0.f;
		for (EEmotion EmotionType : TEnumRange<EEmotion>())
		{
			const FEmotionDesc* Desc1 = GetEmotionDescPtr(EmotionType);
			const FEmotionDesc* Desc2 = Other.GetEmotionDescPtr(EmotionType);

			if(Desc1 && Desc2)
			{
				DistanceSquare += FMath::Square(Desc1->Value - Desc2->Value);
			}
			else
			{
				DistanceSquare += Desc1 ? FMath::Square(Desc1->Value) : 0.f;
				DistanceSquare += Desc2 ? FMath::Square(Desc2->Value) : 0.f;
			}
		}
		return FMath::Sqrt(DistanceSquare);
	}
	FORCEINLINE bool IsEmpty() const
	{
		return EmotionDescs.IsEmpty();
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = EmotionDescContainer, meta = (NoElementDuplicate))
	TArray<FEmotionDesc> EmotionDescs{};
};