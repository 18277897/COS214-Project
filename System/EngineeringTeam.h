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


#include "Department.h"
#include "Engine.h"
#include "Electronics.h"
#include "Chassis.h"
#include "Aerodynamics.h"
#include "Brakes.h"
#include "Suspension.h"



#include <vector>
#include <iostream>

using namespace std;


///
///
class HardCreator;
class MediumCreator;
class SoftCreator;
///EngineeringTeam [Forms part of many patterns] is the Context participant of the Strategy pattern aswell as the Creator participant for the Factory method
class EngineeringTeam {
private:
    ///Chosen compounds for each set of tyres
    int tyres[5];
    Component* component; //!> Component member
    RaceCar* car;

    vector<Department*> Departments;
    vector<RaceStrategy*> RaceStrategies;
    

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
    virtual void beginWork();

    virtual void improveParts();

    ///Accesor method for private Racecar member
    RaceCar* getCar();

    ///Mutator method for private Racecar member
    void setCar(RaceCar* c);

    ///accesssor for the department private variable
    ///@param i is the selector for which department to get
    ///@return returns a pointer to a department
    Department* getDepartment(int i);

    ///method to swap a normal department with a decorated department
    ///@param i selects which department to swap out
    ///@param swapDecorator is the decorated department to swap with
    void swapDeparment(int i, Department* swapDecorator);
};









#endif 
