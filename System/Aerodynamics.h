

#ifndef Aerodynamics_h
#define Aerodynamics_h


#include "Department.h"

/**
 * This class handles the Aerodynamics department's functions
 *
 * */
class Aerodynamics : public Department {
public:
    /**
    * This is the Aerodynamics department constructor
    *
    * */
    Aerodynamics();
    /**
    * This is the Aerodynamics department destructor
    *
    * */
    ~Aerodynamics();
    /**
     * This department tries to make the car go faster in this function by improving its Aerodynamics
     * @return This function doesn't return anything
     */
    void improvePart();


};


#endif
