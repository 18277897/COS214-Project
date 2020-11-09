

#ifndef Engine_h
#define Engine_h


#include "Department.h"
/**
 * This class handles the Engine department's functions
 *
 * */
class Engine: public Department {
public:
    /**
    * This is the Engine department constructor
    *
    * */
    Engine();
    /**
    * This is the Engine department destructor
    *
    * */
    ~Engine();
    /**
     * This department tries to make the car go faster in this function by improving its Engine
     * @return This function doesn't return anything
     */
    void improvePart();


};


#endif
