#ifndef F1RACE_H
#define F1RACE_H
#include "F1Team.h"
#include "RaceCar.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
using namespace std;

///F1Race is the AbstractClass in the template method
class F1Race {


public:
	///This is a constructor for an F1 race
	F1Race();
	///This gets the race started
	virtual void startRace() = 0;
	///Sets up all the Equipment in the Truck by calling the Equipments assembleEquipment fucntion
	virtual void setUpEquipment() = 0;
	///Adds a racecar to the car vector for the race
	virtual void addRaceCar(RaceCar* car) =0;
};

#endif
