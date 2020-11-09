#ifndef SOFTCOMPOUND_H
#define SOFTCOMPOUND_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "RaceStrategy.h"

using namespace std;

///SoftCompound is the ConcreteStrategy participant of the Strategy pattern
///
///One of the 3 possible strategies that can be chosen

class SoftCompound: public RaceStrategy {
public:
	///This is the constructor
    SoftCompound();
	///Notifies when the Soft Compound has been chosen
    virtual void chooseStrategy() ;
};

#endif