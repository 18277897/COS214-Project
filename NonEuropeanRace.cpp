#include "NonEuropeanRace.h"

void NonEuropeanRace::startRace() {
	// TODO - implement NonEuropeanRace::startRace
	//throw "Not yet implemented";
}

void NonEuropeanRace::setUpEquipment() {
	// TODO - implement NonEuropeanRace::setUpEquipment
	cout << "Our team along with all the teams are going to set up their equipment now." <<endl;
	for(int i =0; i < ship->equipmentContainer.size() ; i++){
		cout << endl;
		ship->equipmentContainer.operator[](i)->assembleEquipment();
		cout << "-All equipment on the truck has been set up-" <<endl;
		cout << endl;

	}
}

void NonEuropeanRace::addRaceCar(RaceCar* car){
	cars.push_back(car);
}

NonEuropeanRace::NonEuropeanRace() {
	// TODO - implement NonEuropeanRace::NonEuropeanRace
	//throw "Not yet implemented";
}
