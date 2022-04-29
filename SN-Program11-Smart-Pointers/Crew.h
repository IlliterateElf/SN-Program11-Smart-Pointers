#pragma once
#include <memory>

class Lifeboat;

class Crew
{
private:
	static const float DROP_CHANCE;
	std::shared_ptr<Lifeboat> mBoat;

public:
	void Drop();
};

const float Crew::DROP_CHANCE = 0.5;