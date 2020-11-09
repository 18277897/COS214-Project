#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "F1Team.h"
#include "RaceCar.h"
#include "F1Race.h"
#include "EuropeanRace.h"
#include "NonEuropeanRace.h"
#include "Truck.h"
#include "Ship.h"
#include "Equipment.h"
#include "Garage.h"
#include "Catering.h"
#include "Building.h"
#include "CharteredPlane.h"
#include "RaceStrategy.h"
#include "EngineeringTeam.h"
#include "Component.h"
#include "NeedsService.h"
#include "Serviced.h"
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
#include "SoftwareSimulations.h"
#include "WindTunnel.h"
#include "Track.h"
#include "CarPlacing.h"
#include "TrackStatus.h"
#include "RaceCarCaretaker.h"
#include "RaceCarMemento.h"
#include "MementoState.h"
#include "HardCreator.h"
#include "MediumCreator.h"
#include "SoftCreator.h"





using namespace std;
int main(){

    cout << "========================================================" << endl;
    cout << "Creating our team and the cars (Prototype & memento design pattern)" <<endl;
    cout << "========================================================" << endl;

    cout << "Now creating the team!" <<endl;
    F1Team* FunkyFive =  new F1Team();
    cout << "Now creating the cars and displaying the prototypical functionality!" <<endl;
    //memento
    int tyrePressure=10;
    double fuelLevel=10.0;
    double waterLevel=5.0;
    RaceCar* FFspeedo = new RaceCar(tyrePressure,fuelLevel,waterLevel,"FFspeedo");
    RaceCarCaretaker caretaker;
    caretaker.saveMemento(FFspeedo->createMemento());
    RaceCarMemento* mem = caretaker.rerieveStoredMemento();
    FFspeedo->printDetails();
    //prototype
    RaceCar* FFsonic = FFspeedo->clone("FFsonic");

    
    
    FunkyFive->setCars(FFspeedo,FFsonic);
    FFsonic->setServiced(false); //set to false so we can see the servicing functionality

    cout << "The first car for team FunkyFive is: "<< FunkyFive->getCar(1)->getName() << endl;
    cout << "The second car for team FunkyFive is: "<< FunkyFive->getCar(2)->getName() << endl;

    /*
     * 
     * Only after service change state: State = SERVICED
     * After race the state is changed: State = NEEDSSERVICE (Call service command when in this state)
     */


    // STATE //
    // create states
    RaceCarState *state1 = new Serviced();
    RaceCarState *state2 = new NeedsService();

    

    // car 1
    cout<<"RACE CAR STATE FOR: " << FunkyFive->getCar(1)->getName() <<endl;
    FunkyFive->getCar(1)->setState(state1);
    state1->handle(); // outputs current state

    state1->changeCarState(); // alternates between states, also outputs new state
    FunkyFive->getCar(1)->setServiced(false);

    cout<<endl;

    // car 2
    cout<<"RACE CAR STATE FOR: " + FunkyFive->getCar(2)->getName() <<endl;
    FunkyFive->getCar(2)->setState(state1);
    state2->handle();



    cout << "========================================================" << endl;
    cout << "Flying cars to service factory (if needed) before the race." <<endl;
    cout << "========================================================" << endl;

    
    CharteredPlane* FFplane = new CharteredPlane();
    FFplane->flyToFactory(FunkyFive->getCar(1));
    FFplane->flyToFactory(FunkyFive->getCar(2));

    
    

    cout << "========================================================" << endl;
    cout << "Servicing at factory using the command pattern" <<endl;
    cout << "========================================================" << endl;
    Command *serviceCar1Engine = new ServiceEngine(FunkyFive->getCar(1));
    Command *serviceCar1Electronics = new ServiceElectronics(FunkyFive->getCar(1));
    Command *serviceCar1Chassis = new ServiceChassis(FunkyFive->getCar(1));
    Command *serviceCar1Aerodynamics = new ServiceAerodynamics(FunkyFive->getCar(1));



    ServiceFactory *ServiceCar1EngineInvoker =new ServiceFactory(serviceCar1Engine);
    ServiceFactory *ServiceCar1ElectronicsInvoker =new ServiceFactory(serviceCar1Electronics);
    ServiceFactory *ServiceCar1ChassisInvoke =new ServiceFactory(serviceCar1Chassis);
    ServiceFactory *ServiceCar1AerodynamicsInvoke =new ServiceFactory(serviceCar1Aerodynamics);
    


    //Servicing Car1 ----COMMAND PATTERN-----
    cout<<"Servicing "<< FunkyFive->getCar(1)->getName()  <<endl;
    cout<<endl;
    ServiceCar1EngineInvoker->press();
    ServiceCar1ElectronicsInvoker->press();
    ServiceCar1ChassisInvoke->press();
    ServiceCar1AerodynamicsInvoke->press();
    FunkyFive->getCar(1)->setServiced(true);
    FunkyFive->getCar(2)->setServiced(true);
    // NB! isServiced variable should be changed to true when servicing is done..... READ THIS!!!!
    cout<<endl;

    cout << "========================================================" << endl;
    cout << "Now creating components and testing thhem in the simulation and wind tunnel (This makes use of the strategy design pattern)" <<endl;
    cout << "========================================================" << endl;

    // This creates and tests one component
    Component* carComponent = new Component();
    EngineeringTeam* FFEteam = new CurrentF1SeasonTeam();
    cout<<endl;
    //FFEteam.
    FFEteam->simulateComponent(carComponent);
    FFEteam->algorithm();
    

    // strategy
    srand(time(NULL));
    int result=rand()%2;

    if(result==0){
        TestingStrategy *simulation = new SoftwareSimulations();
        carComponent->setTestingStrategy(simulation);
        carComponent->testComponent();
        //delete simulation;
    }else{
        TestingStrategy *wind = new WindTunnel(400);
        carComponent->setTestingStrategy(wind);
        carComponent->testComponent();
    }

    

    cout << "========================================================" << endl;
    cout << "Components tested so now upgrading the car (This makes use of the Decorator design pattern)" <<endl;
    cout << "========================================================" << endl;

    FFEteam->improveParts();
    //ChassisDepartment->improvePart();
    cout<<"---------------------------------------------------------------"<<endl;
    //FFEteam->getDepartment(3);
    cout << "Decorator Functionality." << endl;
    DepartmentDecorator* ChassisBrakesDecor = new Brakes(FFEteam->getDepartment(3));

    
    
    cout<<"---------------------------------------------------------------"<<endl;

    FFEteam->swapDeparment(3,ChassisBrakesDecor);
    FFEteam->improveParts();
    /*// Make chassis department also work on brakes
    DepartmentDecorator *decorator1 = new Brakes(ChassisDepartment);
    decorator1->improvePart();*/

    cout << "========================================================" << endl;
    cout << "Deciding the strategy and compounds we will use for the race (This makes use of the Strategy and Factory Method design pattern)" <<endl;
    cout << "========================================================" << endl;

    ////////////RaceStrategy/////////////should be in engineering
    cout<<endl;
    cout<<"/////////////RaceStrategy - Strategy///////////////"<<endl;
    cout<<endl;

    //EngineeringTeam * et = new EngineeringTeam();
    FFEteam->chooseStrategy();

    /////////////////OrderTyres//////////////////
    cout<<endl;
    cout<<"/////////////OrderTyres - FactoryMethod///////////////"<<endl;
    cout<<endl;

    FFEteam->produce();


    cout << "++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "One month later" <<endl;
    cout << "++++++++++++++++++++++++++++++++++++++" << endl;
    FFplane->flyToRace(FunkyFive->getCar(1));
    FFplane->flyToRace(FunkyFive->getCar(2));

    //setup for the race
    cout << "========================================================" << endl;
    cout << "Race Weekend!" <<endl;
    cout << "Now setting up the race and the equpment. (Template design pattern)" <<endl;
    cout << "========================================================" << endl;

    Garage* garageEquip = new Garage();
    //garageEquip->assembleEquipment();
    Catering* cateringEquip = new Catering();
    Building* buildingEquip = new Building();


    Truck* FFTruck = new Truck();
    //cateringEquip->assembleEquipment();
    FFTruck->addtoContainer(cateringEquip);
    FFTruck->addtoContainer(garageEquip);
    FFTruck->addtoContainer(buildingEquip);
    //cout << "Hello." <<endl;

    

    EuropeanRace* TheFirst =  new EuropeanRace();

    
    TheFirst->truck = FFTruck;
    TheFirst->addRaceCar(FunkyFive->getCar(1));
    TheFirst->addRaceCar(FunkyFive->getCar(2));
    
    FFTruck->moveEquipment();

    TheFirst->setUpEquipment();

    cout << "========================================================" << endl;
    cout << "Its now race time! (Observer Design Pattern & mementocontinued)"  <<endl;
    cout << "========================================================" << endl;

    TrackStatus* ts = new TrackStatus();
    CarPlacing* cp = new CarPlacing(ts);
    Track* t = new Track();

    // Placing our cars on the track
    t->Set(cp, ts);

    // Set the positions of our cars, 20 cars race in qualifiers.
    ts->setState(20);
    ts->setState2(20);
    t->notify();
    cout << "QUALIFYING ROUND: " << endl;
    cout << FunkyFive->getCar(1)->getName()<<" placing: " << ts->getState() << endl;
    cout << FunkyFive->getCar(2)->getName()<<" placing: " << ts->getState2() << endl;

    // Status of car 1, whether it has qualified or not.
    bool car1 = false;

    // Status of car 2, whether it has qualified or not.
    bool car2 = false;

    cout << "FINAL RACING: " << endl;

    // If the first car has qualified:
    if (ts->getState() <= 10)
    {
        car1 = true;
        // Regenerate position, only 10 cars race in final race.
        ts->setState(10);
        cout << FunkyFive->getCar(1)->getName()<<" Placed: " << ts->getState() << endl;
    }
    // If the second car has qualified:
    if (ts->getState2() <= 10)
    {
        car2 = true;
        // Regenerate position, only 10 cars race in final race.
        ts->setState2(10);
        cout << FunkyFive->getCar(2)->getName()<<" Placed: " << ts->getState2() << endl;
    }

    // Points based on positions of each car.
    int c1points = 0;
    int c2points = 0;
    if (car1 = true) {
        switch (ts->getState()) {
            case 1:
                c1points = 25;
                break;
            case 2:
                c1points = 18;
                break;
            case 3:
                c1points = 15;
                break;
            case 4:
                c1points = 12;
                break;
            case 5:
                c1points = 10;
                break;
            case 6:
                c1points = 8;
                break;
            case 7:
                c1points = 6;
                break;
            case 8:
                c1points = 4;
                break;
            case 9:
                c1points = 2;
                break;
            case 10:
                c1points = 1;
                break;
            default:
                c1points = 0;
        }
    }

    if (car2 == true) {
        switch (ts->getState2()) {
            case 1:
                c2points = 25;
                break;
            case 2:
                c2points = 18;
                break;
            case 3:
                c2points = 15;
                break;
            case 4:
                c2points = 12;
                break;
            case 5:
                c2points = 10;
                break;
            case 6:
                c2points = 8;
                break;
            case 7:
                c2points = 6;
                break;
            case 8:
                c2points = 4;
                break;
            case 9:
                c2points = 2;
                break;
            case 10:
                c2points = 1;
                break;

        }
    }

    // If neither car qualified:
    if ((car1 = false) && (car2 = false))
    {
        cout << "Your team did not qualify for the racing." << endl;
        cout << "The team has: 0 points.";
    }
    else {
        //cout << FunkyFive->getCar(1)->getName()<<" placed: " << ts->getState() << endl;
        //cout << FunkyFive->getCar(2)->getName()<<" placed: " << ts->getState2() << endl;
        cout << FunkyFive->getCar(1)->getName()<<" has " << c1points << " points and " << FunkyFive->getCar(2)->getName()<< " has " << c2points << " points." << endl;
        cout << "The team therefore has: " << c1points + c2points << " points." << endl;
    }

    FunkyFive->getCar(1)->check(); // alters values
    FunkyFive->getCar(1)->printDetails();
    cout << "Servicing car and restoring the levels for the car" <<endl;
    FunkyFive->getCar(1)->restore(mem); // restores the original values
    FunkyFive->getCar(1)->printDetails();

    //deallocation

    

 //
    

    FunkyFive = NULL;
    mem = NULL;
    FFsonic = NULL;
    FFspeedo = NULL;
    state1 = NULL;
    state2 = NULL;

    FFplane = NULL;
    serviceCar1Engine = NULL;
    serviceCar1Electronics = NULL;
    serviceCar1Chassis = NULL;
    serviceCar1Aerodynamics = NULL;

    ServiceCar1EngineInvoker = NULL;
    ServiceCar1ElectronicsInvoker = NULL;
    ServiceCar1ChassisInvoke = NULL;
    ServiceCar1AerodynamicsInvoke = NULL;

    carComponent = NULL;
    FFEteam = NULL;

    ChassisBrakesDecor = NULL;

    garageEquip = NULL;
    cateringEquip = NULL;
    buildingEquip = NULL;
    FFTruck = NULL;
    TheFirst = NULL;
    ts = NULL;
    cp = NULL;
    t = NULL; 

    delete garageEquip;
    delete cateringEquip;
    delete buildingEquip;
    delete FFTruck;
    delete TheFirst;
    delete ts;
    delete cp;
    delete t;

    delete ChassisBrakesDecor;


    delete carComponent;
    delete FFEteam;

    delete ServiceCar1EngineInvoker;
    delete ServiceCar1ElectronicsInvoker;
    delete ServiceCar1ChassisInvoke;
    delete ServiceCar1AerodynamicsInvoke;

    delete serviceCar1Engine;
    delete serviceCar1Electronics;
    delete serviceCar1Chassis;
    delete serviceCar1Aerodynamics;

    delete FFplane;

    delete state1;
    delete state2;

    delete FFsonic;

    delete mem;

    delete FFspeedo;
    delete FunkyFive;

    

    return 0;
}
