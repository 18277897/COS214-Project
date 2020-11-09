//
// Created by 27728 on 2020/11/02.
//

#include "EngineeringTeam.h"


EngineeringTeam::EngineeringTeam() {}

void EngineeringTeam::chooseStrategy() {
    SoftCompound* comp0;
    MediumCompound* comp1;
    HardCompound* comp2;
    for (int i = 0;i<5; ++i) {
        tyres[i]= rand() % 3;
        switch (tyres[i]) {
            case 0:
                comp0 = new SoftCompound();
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

}

Tyre* EngineeringTeam::produceProduct(){}


SoftCreator::SoftCreator() {}
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
    this->component=comp;
}

Component * EngineeringTeam::getComponent() {
    return this->component;
}

void EngineeringTeam::algorithm() {

    TestMediator* com = new TestMediator("Test1");
    newComponents* breaks = new newComponents(getComponent());
    trackFamiliarize* track = new trackFamiliarize();
    com->notify(true);
    track->print();
    breaks->print();
    com->notify(false);
}