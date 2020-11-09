#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

///Equipment is the AbstractClass in the template method
class Equipment {


public:
	Equipment();

	virtual void assembleEquipment() = 0;
};

#endif
