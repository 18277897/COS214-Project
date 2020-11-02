#ifndef BUILDING_H
#define BUILDING_H
#include "Equipment.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

class Building : public Equipment {


public:
	Building();

	virtual void assembleEquipment();
};

#endif
