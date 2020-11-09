#ifndef CATERING_H
#define CATERING_H
#include "Equipment.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

class Catering : public Equipment {


public:
	//Constructor for the catering equipment
	Catering();
	//This assembles the building equipment at the race
	virtual void assembleEquipment();
};

#endif
