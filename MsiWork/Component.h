//
// Created by 27728 on 2020/10/23.
//

#ifndef UNTITLED13_COMPONENT_H
#define UNTITLED13_COMPONENT_H
//#include "TestingStrategy.h"
#include "Simulator.h"
#include "CompMediator.h"

///Component is the client for the Strategy
///
///It is used to implement the Strategy

class Component {
public:
	///This is an empty constructor
    Component();
	///This member function initiates the simulator.
    void algorithm();

};


#endif //UNTITLED13_COMPONENT_H
