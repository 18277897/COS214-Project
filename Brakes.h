#include <iostream>
using namespace std;

#ifndef Marketing_h
#define Marketing_h


#include "DepartmentDecorator.h"

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
     * @return this function doesn't return anything
     * */
    void improvePart();

};


#endif
