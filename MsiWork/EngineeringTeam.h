//
// Created by 27728 on 2020/11/02.
//

#ifndef UNTITLED13_ENGINEERINGTEAM_H
#define UNTITLED13_ENGINEERINGTEAM_H
#include "Tyre.h"
#include "RaceStrategy.h"

///EngineeringTeam is the Context participant of the Strategy pattern aswell as the Creator participant for the Factory method
///
///

class EngineeringTeam {
private:
    ///Chosen compounds for each set of tyres
    int tyres[5];
public:
	///This is the constructor
    EngineeringTeam();
	///Orders the compounds for the five sets of tyres
    Tyre* produce();
	///Chooses the compounds for the five sets of tyres
    void chooseStrategy();
	///This is an abstract member function that will be implemented in the concrete creator (SoftCreator, MediumCreator, HardCreator)
    virtual Tyre* produceProduct();
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




#endif //UNTITLED13_ENGINEERINGTEAM_H
