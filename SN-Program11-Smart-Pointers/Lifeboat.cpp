#include "Lifeboat.h"

Lifeboat::~Lifeboat()
{
	std::cout << "Passengers on boat: " << mPassengers.size() << std::endl;
}

void Lifeboat::AddPassenger(std::shared_ptr<Passenger> tPerson)
{
	mPassengers.push_back(tPerson);
}