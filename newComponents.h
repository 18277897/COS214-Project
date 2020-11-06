#ifndef NEWCOMPONENTS_H
#define NEWCOMPONENTS_H
#include "Simulator.h"
#include "Component.h"

///newComponents is the ConcreteColleagues participant in the Mediator pattern
///
///This tests the new components

class newComponents: public Simulator {
private:
    Component* component;
public:
    ///This is the constructor
    newComponents(Component* comp);
    ///Changes the new components out when the fail
    void change();
    ///Notifies when the new components have successfully been tested
    void print();
};


#endif
