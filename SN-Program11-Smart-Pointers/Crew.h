#pragma once
#include <memory>
#include <stdlib.h>
#include <time.h>

class Lifeboat;

class Crew
{
private:
	static const int DROP_CHANCE;
	std::shared_ptr<Lifeboat> mBoat;

public:
	void Drop();
};

const int Crew::DROP_CHANCE = 5;