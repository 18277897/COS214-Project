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



	//perhaps have a run qualifiers which would happen before the race function
	virtual void startRace();//not gonna impliment this as it is the essential of the main

	virtual void setUpEquipment();

	virtual void addRaceCar(RaceCar* car);

	

	EuropeanRace();
};

#endif
