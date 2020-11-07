//
// Created by 27728 on 2020/11/02.
//

#include "EngineeringTeam.h"
#include "RaceCar.h"
#include "HardCreator.h"
#include "MediumCreator.h"
#include "SoftCreator.h"
#include <iostream>

using namespace std;


EngineeringTeam::EngineeringTeam(){
    this->component = NULL;
    Department* AerodynamicsDepartment = new Aerodynamics();
    Department* ElectronicsDepartment = new Electronics();
    Department* EngineDepartment = new Engine();
    Department* ChassisDepartment = new Chassis();

    //decorator functionality
    DepartmentDecorator* ChassisBrakesDecor = new Brakes(ChassisDepartment);
    this->Departments.push_back(AerodynamicsDepartment);
    this->Departments.push_back(ElectronicsDepartment);
    this->Departments.push_back(EngineDepartment);
    this->Departments.push_back(ChassisDepartment);

    //strategy functionality
    
}

void EngineeringTeam::improveParts(){
    //cout << "Improving all of " << car->getName() << " parts." <<endl;
    for(int i =0; i < Departments.size() ; i++){
		Departments.operator[](i)->improvePart();

	}
}

void EngineeringTeam::chooseStrategy() {
    SoftCompound* comp0 ;
    MediumCompound* comp1 ;
    HardCompound* comp2 ;
    
    for (int i = 0;i<5; ++i) {
        tyres[i]= rand() % 3;
        switch (tyres[i]) {
            case 0:
                comp0 = new SoftCompound();
                this->RaceStrategies.push_back(comp0);
                break;
            case 1:
                comp1 = new MediumCompound();
                this->RaceStrategies.push_back(comp1);
                break;
            case 2:
                comp2 = new HardCompound();
                this->RaceStrategies.push_back(comp2);
                break;
        }
    }

    for(int i =0; i < RaceStrategies.size() ; i++){
		RaceStrategies.operator[](i)->chooseStrategy();

	}
}

Tyre * EngineeringTeam::produce() {
    SoftCreator* soft = new SoftCreator();
    MediumCreator* med = new MediumCreator();
    HardCreator* hrd = new HardCreator();
    Tyre* tr;

    for (int i = 0;i<5; ++i) {
        switch (tyres[i]) {
            case 0:
                tr = soft->produceProduct();
                tr->print();
                break;
            case 1:
                tr = med->produceProduct();
                tr->print();
                break;
            case 2:
                tr = hrd->produceProduct();
                tr->print();
                break;
        }
    }
    return NULL;

}

Tyre* EngineeringTeam::produceProduct(){ return NULL;}


RaceCar* EngineeringTeam::getCar(){
    return this->car;
}

void EngineeringTeam::setCar(RaceCar* c){

}


EngineeringTeam::~EngineeringTeam() {
    delete this->component;
    delete this->car;

    for(int i =0; i < RaceStrategies.size() ; i++){
		delete RaceStrategies.operator[](i);
	}
    for(int i =0; i < Departments.size() ; i++){
		delete Departments.operator[](i);
	}
}

void EngineeringTeam::simulateComponent(Component *comp) {
    //cout << "Debug Inner" <<endl;
    this->component = comp;
}

Component * EngineeringTeam::getComponent() {
    return this->component;
}

void EngineeringTeam::algorithm() {

    TestMediator* com = new TestMediator("Test 1");
    newComponents* breaks = new newComponents(getComponent());
    Simulator* track = new trackFamiliarize();
    com->notify(true);
    track->print();
    breaks->print();
    com->notify(false);
}

Department* EngineeringTeam::getDepartment(int i){
    return this->Departments.operator[](i);
}

void EngineeringTeam::swapDeparment(int i, Department* swapDecorator){
    this->Departments.operator[](i) = swapDecorator;
}