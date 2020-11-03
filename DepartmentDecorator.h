//
// Created by User on 2020/10/22.
//

#ifndef DepartmentDecorator_h
#define DepartmentDecorator_h


#include "Department.h"
/**
 * This class is the decorator component in the Decorator pattern. This pattern allows teams to add extra departments provided that the team has the budget for it.
 *
 * */
class DepartmentDecorator: public Department {

protected:
    Department* department;

public:
/**
* This is the DepartmentDecorator constructor
*
* */
    DepartmentDecorator(Department* department);
/**
* This is the DepartmentDecorator destructor
*
* */
    ~DepartmentDecorator();
/**
 * This virtual function is implemented in the Suspemsion and Brakes class
 * */
    virtual void improvePart()=0;

};


#endif
