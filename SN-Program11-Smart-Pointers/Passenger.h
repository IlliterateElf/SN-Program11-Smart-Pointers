#pragma once

class Passenger
{
public:
	static enum gender {
		male,
		female
	};

private:
	static const int CHILD_AGE;
	int mAge;
	gender mGender;
	bool mTried;

public:
	gender GetGender();
	int GetAge();
	bool HadTried();
};

