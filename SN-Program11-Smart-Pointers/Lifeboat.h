#pragma once

#include <memory>
#include <list>
#include <iostream>

class Passenger;

class Lifeboat
{
private:
	static const int CAP;
	std::list<std::shared_ptr<Passenger>> mPassengers;

	~Lifeboat();

public:
	void AddPassenger(std::shared_ptr<Passenger> tPerson);
};

const int Lifeboat::CAP = 20;