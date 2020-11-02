#ifndef GARAGE_H
#define GARAGE_H
#include "Equipment.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

class Garage : public Equipment {


public:
	Garage();

	virtual void assembleEquipment();
};

#endif
