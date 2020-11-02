#ifndef SHIP_H
#define SHIP_H
#include "Equipment.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
using namespace std;

class Ship {

public:
	vector<Equipment*> equipmentContainer;

	void moveEquipment();

	void addtoContainer(Equipment* equipment);

	

	Ship();
};

#endif
