#ifndef GARAGE_H
#define GARAGE_H
#include "Equipment.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

///Garage is the ConcreteClass in the template method
class Garage : public Equipment {


public:
	//This is the constructor for the garage equipment
	Garage();
	//This assembles the building equipment at the race
	virtual void assembleEquipment();
};

#endif
