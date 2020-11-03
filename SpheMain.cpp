#include <iostream>
using namespace std;

#include "RaceCar.h"
#include "ServiceFactory.h"
#include "ServiceCommand.h"
#include "Command.h"
#include "Department.h"
#include "Aerodynamics.h"
#include "Electronics.h"
#include "Engine.h"
#include "Chassis.h"
#include "DepartmentDecorator.h"
#include "Brakes.h"
#include "Suspension.h"


int main(){
    //Testing Command Pattern....
    cout<<"Testing Command Pattern...."<<endl;
    RaceCar *car1 = new RaceCar("Ferrari");
    RaceCar *car2 = new RaceCar("Porsche");

    Command *serviceCar1 = new ServiceCommand(car1);
    Command *serviceCar2 = new ServiceCommand(car2);

    ServiceFactory *ServiceCar1invoke =new ServiceFactory(serviceCar1);
    ServiceFactory *ServiceCar2invoke =new ServiceFactory(serviceCar2);

//Servicing Car1 ----COMMAND PATTERN-----
    ServiceCar1invoke->press();


//Servicing Car2----COMMAND PATTERN-----
    ServiceCar2invoke->press();

    delete car1;
    delete car2;
    delete serviceCar1;
    delete serviceCar2;
    delete ServiceCar1invoke;
    delete ServiceCar2invoke;
    car1=nullptr;
    car2=nullptr;
    serviceCar1=nullptr;
    serviceCar2= nullptr;
    ServiceCar1invoke=nullptr;
    ServiceCar2invoke=nullptr;


    //Testing Departments
    Department* testDepartment1 = new Aerodynamics();
    Department* testDepartment2 = new Electronics();
    Department* testDepartment3 = new Engine();
    Department* testDepartment4 = new Chassis();

  //  testDepartment1->improvePart();
    testDepartment1->improvePart();
    testDepartment2->improvePart();
    testDepartment3->improvePart();
    //testDepartment4->improvePart();

    //Testing Decorator Pattern...
    cout<<"Testing Decorator Pattern...."<<endl;
    // Make chassis department also work on brakes
    DepartmentDecorator *decorator1 = new Brakes(testDepartment4);
    decorator1->improvePart();

    delete testDepartment1;
    delete testDepartment2;
    delete testDepartment3;
    delete testDepartment4;
    delete decorator1;

    testDepartment1=nullptr;
    testDepartment2= nullptr;
    testDepartment3=nullptr;
    testDepartment4=nullptr;
    decorator1=nullptr;


    return 0;

}


