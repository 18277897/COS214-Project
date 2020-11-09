//
// Created by User on 2020/10/22.
//

#ifndef Hospitality_h
#define Hospitality_h


#include "DepartmentDecorator.h"
#include "Department.h"

/// This class is an optional department an EngineeringTeam can have

class Suspension : public DepartmentDecorator {
public:
    /**
    * This is the Suspension constructor
    *
    * */

    Suspension(Department *department);
/**
    * This is the Suspension destructor
    *
    * */
    ~Suspension();
    /**
     * This department tries to make the car go faster in this function by improving its Brakes
     * @return This function doesn't return anything
     * */
    void improvePart();


};


#endif
