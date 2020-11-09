#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

class Equipment {


public:
	Equipment();

	virtual void assembleEquipment() = 0;
};

#endif
