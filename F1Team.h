#ifndef F1TEAM_H
#define F1TEAM_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "RaceCar.h"
#include "EngineeringTeam.h"
#include "CurrentF1SeasonTeam.h"
#include "NextF1SeasonTeam.h"


using namespace std;

class F1Team {

private:
	RaceCar* car1;
	RaceCar* car2;
	EngineeringTeam* EngineeringDept;
	

public:
	F1Team();
	F1Team(RaceCar* firstCar, RaceCar* secondCar);

	//car setters and getters
	void setCar(int carNum, RaceCar* car);
	void setCars(RaceCar* firstCar, RaceCar* secondCar);
	RaceCar* getCar(int carNum);

	//engineering team setters and getters
	void setETeam(EngineeringTeam* ET);
	EngineeringTeam* getETeam();

};

#endif
