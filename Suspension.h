//
// Created by User on 2020/10/22.
//

#ifndef Hospitality_h
#define Hospitality_h


#include "DepartmentDecorator.h"
#include "Department.h"

/**
 * This is is the Suspension class, it acts as an optional department
 * */
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
     * The Suspension department is added to another department
     * @return This function doesn't return anything
     * */
    void improvePart();


};


#endif
