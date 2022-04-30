#include "Passenger.h"

Passenger::Passenger()
{
	srand(time(NULL));
	mAge = rand() % 100 + 1;
	mGender = static_cast<GENDER>(rand() % 2 + 1);
	mTried = false;
}

Passenger::GENDER Passenger::GetGender()
{
	return mGender;
}
int Passenger::GetAge()
{
	return mAge;
}
void Passenger::SetTried(bool tTried)
{
	mTried = tTried;
}
bool Passenger::HadTried()
{
	return mTried;
}