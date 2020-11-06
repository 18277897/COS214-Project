//
// Created by 27728 on 2020/11/02.
//

#include "EngineeringTeam.h"
#include "RaceCar.h"
#include <iostream>

using namespace std;


EngineeringTeam::EngineeringTeam(){
    this->component = NULL;
}

void EngineeringTeam::chooseStrategy() {
    SoftCompound* comp0 = new SoftCompound();
    MediumCompound* comp1;
    HardCompound* comp2;
    for (int i = 0;i<5; ++i) {
        tyres[i]= rand() % 3;
        switch (tyres[i]) {
            case 0:
                //comp0 = new SoftCompound();
                comp0->print();
                break;
            case 1:
                comp1 = new MediumCompound();
                comp1->print();
                break;
            case 2:
                comp2 = new HardCompound();
                comp2->print();
                break;
        }
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


/*RaceCar* EngineeringTeam::getCar(){
    return this->car;
}*/


SoftCreator::SoftCreator(){}
Tyre * SoftCreator::produceProduct() {
    Tyre* ty = new Soft();
    return ty;
}

MediumCreator::MediumCreator() {}
Tyre * MediumCreator::produceProduct() {
    Tyre* ty = new Medium();
    return ty;
}

HardCreator::HardCreator() {}
Tyre * HardCreator::produceProduct() {
    Tyre* ty = new Hard();
    return ty;
}

EngineeringTeam::~EngineeringTeam() {
    delete this->component;
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