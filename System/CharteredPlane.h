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

	///Constructor for the chartered plane class
	CharteredPlane();
	///Constructor that sets the car that the chartered plane will be transpporting
	CharteredPlane(RaceCar* c);
	///Notifies that the plane&car are being transported to the next race
	void flyToRace(RaceCar* vroom);
	///Notifies that the plane&car are being transported to the servicing factory
	void flyToFactory(RaceCar* vroom);
};

#endif
