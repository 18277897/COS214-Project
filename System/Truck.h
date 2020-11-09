#ifndef TRUCK_H
#define TRUCK_H

#include "Equipment.h"

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
using namespace std;

///This class transports Equipment in a container(vector) to the races
class Truck {

public:
	vector<Equipment*> equipmentContainer;
	//This simulates the moving of equipment to the next race
	void moveEquipment();
	//This adds equipment to the equipment container in the ship
	void addtoContainer(Equipment* equipment);

	Truck();
	~Truck();
};

#endif
