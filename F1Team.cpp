#include "F1Team.h"

F1Team::F1Team(RaceCar* firstCar, RaceCar* secondCar) {
	// TODO - implement F1Team::F1Team
	this->car1 = firstCar;
	this->car2 = secondCar;
}

F1Team::F1Team(){

	this->car1 = NULL;
	this->car2 = NULL;
}

	//setters and getters
void F1Team::setCar(int carNum, RaceCar* car){
	if(carNum == 1){
		this->car1 = car;
	}
	else{
		this->car2 = car;
	}

}
void F1Team::setCars(RaceCar* firstCar, RaceCar* secondCar){

	this->car1 = firstCar;
	this->car2 = secondCar;

}

RaceCar* F1Team::getCar(int carNum){
	if(carNum == 1){
		return car1;
	}
	else{
		return car2;
	}

}

void F1Team::setETeam(EngineeringTeam* ET){
	this->EngineeringDept = ET;
}
EngineeringTeam* F1Team::getETeam(){
	return this->EngineeringDept;
}
