#include "RaceCar.h"


RaceCar::RaceCar() {
	// TODO - implement RaceCar::RaceCar
	this->isServiced = true;
	this->tyrePressure = 5;
	this->fuelLevel = 5;
	this->waterLevel = 5;
	this->name = "";
}

RaceCar::RaceCar(string n) {
	// TODO - implement RaceCar::RaceCar
	this->isServiced = true;
	this->tyrePressure = 5;
	this->fuelLevel = 5;
	this->waterLevel = 5;
	this->name = n;
}

RaceCar::RaceCar(bool iS,int tP,double fL,double wL,string n) {
	// TODO - implement RaceCar::RaceCar
	this->isServiced = iS;
	this->tyrePressure = tP;
	this->fuelLevel = fL;
	this->waterLevel = wL;
	this->name = n;
}

RaceCar* RaceCar::clone(string n){

	return new RaceCar(this->isServiced,this->tyrePressure,this->fuelLevel,this->waterLevel,n);
}

string RaceCar::getName(){
	return this->name;
}

void RaceCar::setName(string n){
	this->name = n;
}

bool RaceCar::getServiced(){
	return this->isServiced;
}
void RaceCar::setServiced(bool s){
	this->isServiced = s;
}


void RaceCar::raceAction() {
	// TODO - implement RaceCar::raceAction
	throw "Not yet implemented";
}

void RaceCar::serviceCarAerodynamics() {
    cout<<"Servicing car's aerodynamics...."<<endl;
    cout<<"Car "+getName()+"'s aerodynamics serviced"<<endl;

}

void RaceCar::serviceCarElectronics() {
    cout<<"Servicing car's electronics...."<<endl;
    cout<<"Car "+getName()+"'s electronics serviced"<<endl;
}

void RaceCar::serviceCarChassis() {
    cout<<"Servicing car's chassis...."<<endl;
    cout<<"Car "+getName()+"'s chassis serviced"<<endl;
}

void RaceCar::serviceCarEngine() {
    cout<<"Servicing car's engine...."<<endl;
    cout<<"Car "+getName()+"'s engine serviced"<<endl;
}

RaceCar::~RaceCar() {
    delete this->current_state;
}

void RaceCar::setState(RaceCarState *newState) {
    this->current_state=newState;
}

RaceCarState * RaceCar::getState() {
    return this->current_state;
}

void RaceCar::printDetails() {
    cout<<"RACE CAR INFO:"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Driver:          "<<this->name<<endl;
    cout<<"Tyre pressure:   "<<this->tyrePressure<<endl;
    cout<<"Fuel level:      "<<this->fuelLevel<<endl;
    cout<<"Water level:     "<<this->waterLevel<<endl;
    cout<<"-----------------------------"<<endl;
}

bool RaceCar::check() {
    srand(time(NULL));

    int result_tp=rand()%tyrePressure;
    tyrePressure-=result_tp;

    int wl=waterLevel;
    double result_wl=rand()%wl;
    waterLevel-=result_wl;

    int fl=fuelLevel;
    double result_fl=rand()%fl;
    fuelLevel-=result_fl;

    if(tyrePressure==0 || waterLevel==0 || fuelLevel==0){
        return true;
    }

    return false;
}

RaceCarMemento * RaceCar::createMemento() {
    RaceCarMemento* mem = new RaceCarMemento(tyrePressure,fuelLevel,waterLevel,name);
    return mem;
}

void RaceCar::restore(RaceCarMemento *mem) {
    MementoState* state = mem->state;

    this->name=state->getName();
    this->waterLevel=state->getWaterLevel();
    this->fuelLevel=state->getFuelLevel();
    this->tyrePressure=state->getTyrePressure();
}