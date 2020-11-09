#ifndef MEDIUM_H
#define MEDIUM_H

#include "Tyre.h"

#include <string>
#include <iostream>

using namespace std;


///Medium is the ConcreteProduct for the Factory method
///
///It implements the interface for the Medium compound tyre

class Medium: public Tyre {
public:
	///This is the constructor
    Medium();
	///This is the print function that prints when a medium compoud has been ordered
    virtual void print();
};

#endif