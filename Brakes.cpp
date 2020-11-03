#include <iostream>
using namespace std;

#include "Brakes.h"
#include "Department.h"
#include "DepartmentDecorator.h"

Brakes::Brakes(Department *department) : DepartmentDecorator(department)  {

}

void Brakes::improvePart() {
    department->improvePart();
    cout<<"and improved the car's brakes"<<endl;
}

Brakes::~Brakes() {

}

