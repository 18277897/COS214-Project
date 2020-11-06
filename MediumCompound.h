#ifndef MEDIUMCOMPOUND_H
#define MEDIUMCOMPOUND_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "RaceStrategy.h"

using namespace std;

///MediumCompound is the ConcreteStrategy participant of the Strategy pattern
///
///One of the 3 possible strategies that can be chosen

class MediumCompound: public RaceStrategy {
public:
	///This is the constructor
    MediumCompound();
	///Notifies when the Medium Compound has been chosen
    virtual void print();
};

#endif