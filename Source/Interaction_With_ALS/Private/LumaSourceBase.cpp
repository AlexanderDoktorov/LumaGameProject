// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#include "LumaSourceBase.h"

ALumaSourceBase::ALumaSourceBase()
{

}

float ALumaSourceBase::GatherLuma()
{
	if(!IsEmpty())
	{
		const auto Luma = LumaSourcesArray.Pop(); // pop_back
		OnLumaGather(Luma);
		return Luma;
	}
	return 0.f;
}
