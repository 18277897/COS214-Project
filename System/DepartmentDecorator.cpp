#include <iostream>
using namespace std;

#include "DepartmentDecorator.h"
#include "Department.h"

DepartmentDecorator::DepartmentDecorator(Department* department) {
    this->department=department;


}

DepartmentDecorator::~DepartmentDecorator() {
    delete department;
}

