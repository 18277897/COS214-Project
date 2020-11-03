#include "Ship.h"

void Ship::moveEquipment() {
	// TODO - implement Ship::moveEquipment
	cout << "Equipment is now being shipped to the next raceTrack." << endl;
}

void Ship::addtoContainer(Equipment* equipment) {
	// TODO - implement Ship::addtoContainer
	equipmentContainer.push_back(equipment);
}

Ship::Ship() {
	
}
