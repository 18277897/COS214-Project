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
     * The car's aerodynamics gets serviced in this function
     * @return this function doesn't return anything
     *
     * */
    void serviceCarAerodynamics();
    /**
     * The car's electronics gets serviced in this function
     * @return this function doesn't return anything
     *
     * */
    void serviceCarElectronics();
    /**
     * The car's chassis gets serviced in this function
     * @return this function doesn't return anything
     *
     * */
    void serviceCarChassis();
    /**
     * The car's engine gets serviced in this function
     * @return this function doesn't return anything
     *
     * */
    void serviceCarEngine();

	void createMemento();



	

	
};

#endif
