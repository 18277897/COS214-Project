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

class F1Race {

//should i make a private cars vector here?
public:

	F1Race();

	virtual void startRace() = 0;

	virtual void setUpEquipment() = 0;

	virtual void addRaceCar(RaceCar* car) =0;
};

#endif
