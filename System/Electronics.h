
#ifndef Electronics_h
#define Electronics_h


#include "Department.h"
/**
 * This class handles the Electronics department's functions
 *
 * */
class Electronics: public Department {

    public:
    /**
     * This is the Electronics department constructor
     *
     * */
        Electronics();
    /**
     * This is the Electronics department destructor
     *
     * */
        ~Electronics();
    /**
     * This department tries to make the car go faster in this function by improving its Electronics
     * @return This function doesn't return anything
     */
        void improvePart();


};


#endif
