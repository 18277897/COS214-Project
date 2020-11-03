//
// Created by 27728 on 2020/11/02.
//

#ifndef UNTITLED13_COMPMEDIATOR_H
#define UNTITLED13_COMPMEDIATOR_H
#include <String>
#include "Simulator.h"

using namespace std;

///CompMediator is the Mediator participant in the Mediator pattern
///
///It defines an interface for communicating with Simulator objects

class CompMediator {
private:
public:
	///This is the constructor
    CompMediator();
	///This is an abstract member function that will be implemented in the TestMediator class to notify when the simulation starts and ends.
	///@param start is a boolean that specifies whether the simulation starts (true) or ends (false)
    virtual void notify(bool start)=0;
};

///TestMediator is the Concrete Mediator participant in the Mediator pattern
///
///It knows and maintains the simulator be notifying when the simulation starts end ends

class TestMediator: public CompMediator {
private:
	///Simulator's name
    string testName;
public:
	///This is the constructor that sets the name
	///@param name is the name of the simulation
    TestMediator(string name);
	///This notifies the system when the simulation starts and ends
	///@param start is a boolean that specifies whether the simulation starts (true) or ends (false)
    void notify(bool start);
};

#endif //UNTITLED13_COMPMEDIATOR_H
