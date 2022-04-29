#include <iostream>
#include <queue>

#include "Captain.h"
#include "Crew.h"
#include "Lifeboat.h"
#include "Passenger.h"

int main()
{
    std::queue<std::shared_ptr<Passenger>> passengerQueue;

    Captain captain;
    Crew crew1;
    Crew crew2;
    Lifeboat boat1;
    Lifeboat boat2;

    for (int i = 0; i < 50; i++) //Init queue
    {
        std::shared_ptr<Passenger> tPass(new Passenger);
        passengerQueue.push(tPass);
    }

    while(!passengerQueue.empty() && captain.BoatsHere())
}
