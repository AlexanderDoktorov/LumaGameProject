// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#include "LumaSourceBase.h"

ALumaSourceBase::ALumaSourceBase()
{

}

void ALumaSourceBase::GatherCapsule()
{
	if(NumCapsules > 0)
	{
		NumCapsules = FMath::Max(NumCapsules - 1, 0);
		OnGatherCapsule();
	}
}
