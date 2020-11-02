//
// Created by 27728 on 2020/10/23.
//

#ifndef UNTITLED13_COMPONENT_H
#define UNTITLED13_COMPONENT_H
//#include "TestingStrategy.h"
#include "Simulator.h"
#include "CompMediator.h"

class Component {
private:
    //TestingStrategy* strategy;
    Simulator* simm;
public:
    Component();

    Component(Simulator *sim);

    void algorithm();

};


#endif //UNTITLED13_COMPONENT_H
