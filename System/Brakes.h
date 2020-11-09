#include <iostream>
using namespace std;

#ifndef Marketing_h
#define Marketing_h


#include "DepartmentDecorator.h"
/// This class is an optional department an EngineeringTeam can have
class Brakes : public DepartmentDecorator {
public:
    /**
    * This is the Brakes constructor
    *
    * */
    Brakes(Department *department);
    /**
    * This is the Brakes destructor
    *
    * */
    ~Brakes();
    /**
     * This department tries to make the car go faster in this function by improving its Brakes
     * @return this function doesn't return anything
     * */
    void improvePart();

};


#endif
