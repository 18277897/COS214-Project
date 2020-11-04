#ifndef EUROPEANRACE_H
#define EUROPEANRACE_H
#include "F1Race.h"
#include "Truck.h"
#include "F1Team.h"
#include "RaceCar.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
using namespace std;


class EuropeanRace : public F1Race {

private:


//probably make the variables private
public:
	Truck* truck;
	vector<RaceCar*> cars; 

	vector<F1Team*> teams; //wont need



	//This begins the race
	virtual void startRace();//not gonna impliment this as it is the essential of the main
	//Sets up all the Equipment in the Truck by calling the Equipments assembleEquipment fucntion
	virtual void setUpEquipment();
	//Adds a racecar to the car vector for the race
	virtual void addRaceCar(RaceCar* car);
	//This is the constructor for the a european race
	EuropeanRace();
};

#endif
