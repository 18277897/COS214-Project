#ifndef CHARTEREDPLANE_H
#define CHARTEREDPLANE_H
#include "RaceCar.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;


class CharteredPlane {

private:
	RaceCar* car;

public:

	CharteredPlane();
	CharteredPlane(RaceCar* c);

	void flyToRace(RaceCar* vroom);

	void flyToFactory(RaceCar* vroom);//need to figure out how the service factory works to properly implement
};

#endif
