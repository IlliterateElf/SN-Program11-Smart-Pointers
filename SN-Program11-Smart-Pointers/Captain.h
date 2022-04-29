#pragma once

#include <memory>
#include <list>

class Lifeboat;

class Captain
{
private:
	std::list<std::weak_ptr<Lifeboat>> mSightedBoats;

public:
	Captain(std::weak_ptr<Lifeboat> t1, std::weak_ptr<Lifeboat> t2);

	bool BoatsHere();
};
