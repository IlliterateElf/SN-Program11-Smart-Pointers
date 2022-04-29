#pragma once

#include <memory>
#include <list>

class Lifeboat;

class Captain
{
private:
	std::list<std::weak_ptr<Lifeboat>> mSightedBoats;

public:
	bool BoatsHere();
};
