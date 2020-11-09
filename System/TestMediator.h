
#ifndef TESTMEDIATOR_H
#define TESTMEDIATOR_H
#include "CompMediator.h"


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


#endif
