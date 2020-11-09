#ifndef MEDIUMCREATOR_H
#define MEDIUMCREATOR_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "EngineeringTeam.h"
#include "Tyre.h"

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

#endif