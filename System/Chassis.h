
#ifndef Chassis_h
#define Chassis_h


#include "Department.h"
/**
 * This class handles the Chassis department's functions
 *
 * */
class Chassis: public Department {
public:
    /**
    * This is the Chassis department constructor
    *
    * */
    Chassis();
    /**
    * This is the Chassis department destructor
    *
    * */
    ~Chassis();
    /**
     * This department tries to make the car go faster in this function by improving its Aerodynamics
     * @return This function doesn't return anything
     */
    void improvePart();

};


#endif
