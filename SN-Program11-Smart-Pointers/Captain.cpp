#include "Captain.h"

bool Captain::BoatsHere() {
	bool result;
	std::list<std::weak_ptr<Lifeboat>>::iterator it;
	for (it = mSightedBoats.begin(); it != mSightedBoats.end(); it++)
	{
		if (it != mSightedBoats.end()) //If a boat exists
		{
			return true;
		}
	}
	return false;
}
