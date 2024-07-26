// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Abilities/LumaCastAbility_ProximityMine.h"

float ULumaCastAbility_ProximityMine::GetSpawnHeightOffset() const
{
	FTransform OutTransform{};
	PlaceAnimation->GetBoneTransform(OutTransform, FSkeletonPoseBoneIndex(0), PlaceAnimation->GetPlayLength(), false);
	return -OutTransform.GetLocation().Z;
}
