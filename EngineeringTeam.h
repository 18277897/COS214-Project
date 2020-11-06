//
// Created by 27728 on 2020/11/02.
//

#ifndef ENGINEERINGTEAM_H
#define ENGINEERINGTEAM_H
#include "Tyre.h"
#include "RaceStrategy.h"
#include "Component.h"
#include "newComponents.h"
#include "SoftCompound.h"
#include "MediumCompound.h"
#include "HardCompound.h"
#include "Soft.h"
#include "Medium.h"
#include "Hard.h"
#include "TestMediator.h"
#include "trackFamiliarize.h"
#include "RaceCar.h"

#include <iostream>

using namespace std;

///EngineeringTeam is the Context participant of the Strategy pattern aswell as the Creator participant for the Factory method
///
///
class RaceCar;
class EngineeringTeam {
private:
    ///Chosen compounds for each set of tyres
    int tyres[5];
    Component* component; //!> Component member
    RaceCar* car;

public:
	///This is the constructor
    EngineeringTeam();
	///Orders the compounds for the five sets of tyres
    Tyre* produce();
	///Chooses the compounds for the five sets of tyres
    void chooseStrategy();
	///This is an abstract member function that will be implemented in the concrete creator (SoftCreator, MediumCreator, HardCreator)
    virtual Tyre* produceProduct();

    /// Destructor to deallocate component member
    ~EngineeringTeam();

    /**
     * Function provides component for the simulation
     * @param component the component to simulate
     */
    void simulateComponent(Component* component);

    /// Accessor method for private component member
    Component* getComponent();

    ///This member function initiates the simulator.
    void algorithm();

    ///Virtual / abstract function used to call the improvePart() function of all the departments
    void beginWork(RaceCar* car){};

    ///Accesor method for private Racecar member
    //RaceCar* getCar();
};

///SoftCreator is the ConcreteCreator for the Factory method
///
///Creates the soft compound tyre

class SoftCreator: public EngineeringTeam{
public:
	///This is the constructor
    SoftCreator();
	///Creates a new soft compound
    Tyre* produceProduct();
};

///MediumCreator is the ConcreteCreator for the Factory method
///
///Creates the soft compound tyre

class MediumCreator: public EngineeringTeam {
public:
	///This is the constructor
    MediumCreator();
	///Creates a new medium compound
    Tyre* produceProduct();
};

///HardCreator is the ConcreteCreator for the Factory method
///
///Creates the soft compound tyre

class HardCreator: public EngineeringTeam {
public:
	///This is the constructor
    HardCreator();
	///Creates a new hard compound
    Tyre* produceProduct();
};




#endif 
