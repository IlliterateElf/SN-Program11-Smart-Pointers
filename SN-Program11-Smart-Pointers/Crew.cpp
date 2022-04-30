#include "Crew.h"

Crew::Crew(Lifeboat tBoat)
{
	std::shared_ptr<Lifeboat> temp(&tBoat);
	mBoat = temp;
}

void Crew::Drop() {
	int chance;
	srand(time(NULL));
	chance = rand() % 100 + 1;
	if (chance < DROP_CHANCE)
	{
		mBoat = nullptr;
	}
}

std::shared_ptr<Lifeboat> Crew::GetBoat() {
	return mBoat;
}