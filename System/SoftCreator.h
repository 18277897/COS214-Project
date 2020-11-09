#ifndef SOFTCREATOR_H
#define SOFTCREATOR_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "EngineeringTeam.h"
#include "Tyre.h"

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


#endif