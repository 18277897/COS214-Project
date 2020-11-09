//
// Created by 27728 on 2020/11/02.
//

#ifndef COMPMEDIATOR_H
#define COMPMEDIATOR_H
#include <string>
#include "Simulator.h"

using namespace std;

///CompMediator is the Mediator participant in the Mediator pattern
///
///It defines an interface for communicating with Simulator objects

class CompMediator {
private:
public:
	///This is the constructor
    //CompMediator();
	///This is an abstract member function that will be implemented in the TestMediator class to notify when the simulation starts and ends.
	///@param start is a boolean that specifies whether the simulation starts (true) or ends (false)
    virtual void notify(bool start)=0;
};



#endif //UNTITLED13_COMPMEDIATOR_H
