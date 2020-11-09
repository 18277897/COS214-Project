#ifndef HARDCREATOR_H
#define HARDCREATOR_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "EngineeringTeam.h"
#include "Tyre.h"

///HardCreator is the ConcreteCreator for the Factory method
///
///Creates the soft compound tyre
//class EngineeringTeam;
class HardCreator: public EngineeringTeam {
public:
	///This is the constructor
    HardCreator();
	///Creates a new hard compound
    Tyre* produceProduct();
};

#endif