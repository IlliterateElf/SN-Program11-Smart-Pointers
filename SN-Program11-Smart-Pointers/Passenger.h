#pragma once
#include <stdlib.h>
#include <time.h>

class Passenger
{
public:
	static const enum GENDER {
		male,
		female
	};

private:
	static const int CHILD_AGE;
	int mAge;
	GENDER mGender;
	bool mTried;

	Passenger();

public:
	GENDER GetGender();
	int GetAge();
	bool HadTried();
};

const enum Passenger::GENDER;