#ifndef HARD_H
#define HARD_H
#include "Tyre.h"
#include <string>
#include <iostream>

using namespace std;


///Hard is the ConcreteProduct for the Factory method
///
///It implements the interface for the Hard compound tyre

class Hard : public Tyre {
public:
	///This is the constructor
    Hard();
	///This is the print function that prints when a hard compoud has been ordered
    virtual void print();
};

#endif