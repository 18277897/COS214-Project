#ifndef RACECAR_H
#define RACECAR_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
//#include "PrototypeCar.h"
#include "RaceCarState.h"

using namespace std;

class RaceCar  {

private:
	bool isServiced;
	int tyrePressure;
	double fuelLevel;
	double waterLevel;
	string name;
    RaceCarState* current_state; //!< state member

public:
	
	RaceCar();
	RaceCar(string n);
	RaceCar(bool iS,int tP,double fL,double wL,string n);
	//Prototype
	RaceCar* clone(string n);

	~RaceCar();


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



    /**
     * Accessor of the name member
    * @return the name of the driver
    */
    string getDriver();

    /**
     * Mutator for the state of the car
     * @param newState the state to change to
     */
    void setState(RaceCarState* newState);

    /**
     * Accessor to the current state of the car
     * @return the current state of the car
     */
    RaceCarState* getState();

	
};

#endif
