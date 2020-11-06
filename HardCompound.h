#ifndef HARDCOMPOUND_H
#define HARDCOMPOUND_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "RaceStrategy.h"

using namespace std;

///HardCompound is the ConcreteStrategy participant of the Strategy pattern
///
///One of the 3 possible strategies that can be chosen

class HardCompound : public RaceStrategy {
public:
	///This is the constructor
    HardCompound();
	///Notifies when the Hard Compound has been chosen
    virtual void print();
};

#endif