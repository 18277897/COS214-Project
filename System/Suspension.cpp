#include <iostream>
using namespace std;

#include "Suspension.h"
#include "Department.h"
#include "DepartmentDecorator.h"

Suspension::Suspension(Department *department) : DepartmentDecorator(department) {

}

void Suspension::improvePart() {
    department->improvePart();
    cout<<"(and also improved the car's suspension)"<<endl;
}

Suspension::~Suspension() {

}
