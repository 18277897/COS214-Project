#ifndef RACECAR_H
#define RACECAR_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
//#include "PrototypeCar.h"

using namespace std;

class RaceCar  {

private:
	bool isServiced;
	int tyrePressure;
	double fuelLevel;
	double waterLevel;
	string name;

public:
	//This is the default constructor for a racecar
	RaceCar();
	//This is a constructor which also sets the name of a race car
	RaceCar(string n);
	//This is a constructor which sets all the variables
	RaceCar(bool iS,int tP,double fL,double wL,string n);
	//This is the prototypical cloning of a car
	RaceCar* clone(string n);


	//This gets the name of the car
	string getName();
	//This sets the name of the car
	void setName(string n);
	//This gets if the car has been serviced or not
	bool getServiced();
	//This sets whether the car has been serviced or not
	void setServiced(bool s);

	//not yet done
	void raceAction();

	void serviceCar();

	void createMement();



	

	
};

#endif
