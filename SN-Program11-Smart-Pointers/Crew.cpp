#include "Crew.h"

void Crew::Drop() {
	int chance;
	srand(time(NULL));
	chance = rand() % 100 + 1;
	if (chance < DROP_CHANCE)
	{
		mBoat = nullptr;
	}
}
