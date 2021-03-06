#ifndef NONEUROPEANRACE_H
#define NONEUROPEANRACE_H
#include "F1Race.h"
#include "Ship.h"
#include "F1Team.h"
#include "RaceCar.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
using namespace std;


///NonEuropeanRace is the ConcreteClass in the template method
class NonEuropeanRace :public F1Race {

public:
	Ship* ship;
	vector<RaceCar*> cars; 

	vector<F1Team*> teams; //wont need

	///perhaps have a run qualifiers which would happen before the race function
	virtual void startRace();
	///Sets up all the Equipment in the Truck by calling the Equipments assembleEquipment fucntion
	virtual void setUpEquipment();
	///Adds a racecar to the car vector for the race
	virtual void addRaceCar(RaceCar* car);

	NonEuropeanRace();
	~NonEuropeanRace();
};

#endif
