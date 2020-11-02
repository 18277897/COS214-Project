#include "EuropeanRace.h"

void EuropeanRace::startRace() {
	// TODO - implement EuropeanRace::startRace
	throw "Not yet implemented";
}

void EuropeanRace::setUpEquipment() {
	// TODO - implement EuropeanRace::setUpEquipment
	cout << "Our team along with all the teams are going to set up their equipment now." <<endl;
	for(int i =0; i < truck->equipmentContainer.size() ; i++){
		truck->equipmentContainer.operator[](i)->assembleEquipment();

	}
	cout << "-All equipment on the truck has been set up-" <<endl;
	cout << endl;
}

void EuropeanRace::addRaceCar(RaceCar* car){
	cars.push_back(car);
}

EuropeanRace::EuropeanRace() {
	truck = NULL;
}
