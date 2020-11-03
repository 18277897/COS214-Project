#ifndef TRUCK_H
#define TRUCK_H

#include "Equipment.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
using namespace std;

class Truck {

public:
	vector<Equipment*> equipmentContainer;

	void moveEquipment();

	void addtoContainer(Equipment* equipment);

	Truck();
};

#endif
