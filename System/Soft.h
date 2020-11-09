#ifndef SOFT_H
#define SOFT_H

#include "Tyre.h"

#include <string>
#include <iostream>

using namespace std;


///Soft is the ConcreteProduct for the Factory method
///
///It implements the interface for the soft compound tyre

class Soft: public Tyre {
public:
	///This is the constructor
    Soft();
	///This is the print function that prints when a soft compoud has been ordered
    virtual void print();
};

#endif