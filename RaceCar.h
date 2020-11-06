#ifndef RACECAR_H
#define RACECAR_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
//#include "PrototypeCar.h"
#include "RaceCarState.h"
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
	
	///This is the default constructor for a racecar
	RaceCar();
	///This is a constructor which also sets the name of a race car
	RaceCar(string n);
	///This is a constructor which sets all the variables
	RaceCar(bool iS,int tP,double fL,double wL,string n);
    ///Constructor for memento
    RaceCar(int tP,double fL,double wL,string n);
	///This is the prototypical cloning of a car
    ///@param n is the name of the new & cloned car
    ///@return a RaceCar
	RaceCar* clone(string n);

	~RaceCar();


	/**
     * Accessor of the name member
    * @return the name of the driver
    */
	string getName();
    /**
     * Mutator of the name member
    * @param n is to set the name member
    */
	void setName(string n);

	/**
     * Accessor of the bool of if the car is serviced
    * @return true/false if the car has been serviced
    */
	bool getServiced();
	/**
     * Mutator of the name member
    * @param s is to set if the car has been serviced
    */
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
    
    string getDriver();*/

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
