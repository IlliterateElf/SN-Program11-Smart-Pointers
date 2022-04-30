#pragma once
#include <stdlib.h>
#include <time.h>

class Passenger
{
public:
	const enum GENDER {
		male,
		female
	};
	const int CHILD_AGE = 10;

private:
	int mAge;
	GENDER mGender;
	bool mTried;

public:
	Passenger();

	GENDER GetGender();
	int GetAge();
	void SetTried(bool tTried);
	bool HadTried();
};