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
	
	RaceCar();
	RaceCar(string n);
	RaceCar(bool iS,int tP,double fL,double wL,string n);
	//Prototype
	RaceCar* clone(string n);


	//Getters and setters [Just name for now -for the teams]
	string getName();
	void setName(string n);

	bool getServiced();
	void setServiced(bool s);

	//not yet done
	void raceAction();
    /**
     * This function shows that the car is getting serviced
     * @return this function doesn't return anything
     *
     * */
	void serviceCar();

	void createMement();



	

	
};

#endif
