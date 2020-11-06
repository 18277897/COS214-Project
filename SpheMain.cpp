#include <iostream>
using namespace std;

#include "RaceCar.h"
#include "ServiceFactory.h"
#include "ServiceEngine.h"
#include "Command.h"
#include "Department.h"
#include "Aerodynamics.h"
#include "Electronics.h"
#include "Engine.h"
#include "Chassis.h"
#include "DepartmentDecorator.h"
#include "Brakes.h"
#include "Suspension.h"
#include "ServiceElectronics.h"
#include "ServiceAerodynamics.h"
#include "ServiceChassis.h"

int main(){
   //

   //Testing Command Pattern USE WHEN CAR NEEDS TO BE SERVICED....
    cout<<"Testing Command Pattern ...."<<endl;
    cout<<"-----------------------------"<<endl;
    RaceCar *car1 = new RaceCar("Ferrari");

    Command *serviceCar1Engine = new ServiceEngine(car1);
    Command *serviceCar1Electronics = new ServiceElectronics(car1);
    Command *serviceCar1Chassis = new ServiceChassis(car1);
    Command *serviceCar1Aerodynamics = new ServiceAerodynamics(car1);



    ServiceFactory *ServiceCar1EngineInvoker =new ServiceFactory(serviceCar1Engine);
    ServiceFactory *ServiceCar1ElectronicsInvoker =new ServiceFactory(serviceCar1Electronics);
    ServiceFactory *ServiceCar1ChassisInvoke =new ServiceFactory(serviceCar1Chassis);
    ServiceFactory *ServiceCar1AerodynamicsInvoke =new ServiceFactory(serviceCar1Aerodynamics);


//Servicing Car1 ----COMMAND PATTERN-----
    cout<<"Servicing Car 1......"<<endl;
    cout<<endl;
    ServiceCar1EngineInvoker->press();
    ServiceCar1ElectronicsInvoker->press();
    ServiceCar1ChassisInvoke->press();
    ServiceCar1AerodynamicsInvoke->press();
// NB! isServiced variable should be changed to true when servicing is done..... READ THIS!!!!
    cout<<endl;
    
    //Testing Departments
    Department* testDepartment1 = new Aerodynamics();
    Department* testDepartment2 = new Electronics();
    Department* testDepartment3 = new Engine();
    Department* testDepartment4 = new Chassis();
    cout<<"Testing departments"<<endl;

    testDepartment1->improvePart();
    testDepartment2->improvePart();
    testDepartment3->improvePart();
    testDepartment4->improvePart();
    cout<<endl;
    //Testing Decorator Pattern...
    cout<<"Testing Decorator Pattern...."<<endl;
    cout<<"-----------------------------"<<endl;
    // Make chassis department also work on brakes
    DepartmentDecorator *decorator1 = new Brakes(testDepartment4);
    decorator1->improvePart();

    


    return 0;

}


