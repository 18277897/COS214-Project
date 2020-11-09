#include "Truck.h"

void Truck::moveEquipment() {
	// TODO - implement Truck::moveEquipment
	cout << "Equipment is now being driven to the next race track." << endl;
}

void Truck::addtoContainer(Equipment* equipment) {
	// TODO - implement Truck::addtoContainer
	equipmentContainer.push_back(equipment);
}

Truck::Truck() {
	
}

Truck::~Truck() {
	for(int i =0; i < equipmentContainer.size() ; i++){
		delete equipmentContainer.operator[](i);
	}
}
