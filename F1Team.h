#ifndef F1TEAM_H
#define F1TEAM_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "RaceCar.h"

using namespace std;

class F1Team {

private:
	RaceCar* car1;
	RaceCar* car2;

public:
	F1Team();
	F1Team(RaceCar* firstCar, RaceCar* secondCar);

	//setters and getters
	void setCar(int carNum, RaceCar* car);
	void setCars(RaceCar* firstCar, RaceCar* secondCar);

	RaceCar* getCar(int carNum);
};

#endif
