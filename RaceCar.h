#ifndef RACECAR_H
#define RACECAR_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
//#include "PrototypeCar.h"

//#include "RaceCarState.h"
#include "MementoState.h"
#include "RaceCarMemento.h"

using namespace std;
class RaceCarState; // added to solve linking error
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

	RaceCar(int tP,double fL,double wL,string n); // for memento
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

    /// Prints out the attribute values of the car
    void printDetails();

    /// Adjusts the attribute values of the car. Values of 0 indicate that the car needs to be serviced and restored.
    bool check();

    /**
     * This function creates the memento
     * @return the newly created memento is returned
     */
    RaceCarMemento* createMemento();

    /**
     * This function is used when the original memento needs to be retrieved.
     * @param mem This parameter is used to reinstate the attribute values of the car.
     */
    void restore(RaceCarMemento* mem);

	
};

#endif
