#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "F1Team.h"
//car
//include "PrototypeCar.h"
#include "RaceCar.h"
//race
#include "F1Race.h"
#include "EuropeanRace.h"
#include "NonEuropeanRace.h"
//equipment and the movers
#include "Truck.h"
#include "Ship.h"
#include "Equipment.h"
#include "Garage.h"
#include "Catering.h"
#include "Building.h"

//chartered plane 
#include "CharteredPlane.h"

//racestratgy & engineering team
#include "RaceStrategy.h"
#include "EngineeringTeam.h"
#include "Component.h"


using namespace std;
int main(){

    //team creation
    cout << "Now creating the team!" <<endl;
    F1Team* FunkyFive =  new F1Team();
    cout << "Now creating the cars and displaying the prototypical functionality!" <<endl;
    RaceCar* FFspeedo = new RaceCar("FFspeedo");
    //displaying prototype
    RaceCar* FFsonic = FFspeedo->clone("FFsonic");
    FFsonic->setServiced(false);

    FunkyFive->setCars(FFspeedo,FFsonic);

    cout << "The first car for team FunkyFive is: "<< FunkyFive->getCar(1)->getName() << endl;
    cout << "The second car for team FunkyFive is: "<< FunkyFive->getCar(2)->getName() << endl;

    cout << "========================================================" << endl;
    cout << "Flying cars to service factory (if needed) before the race." <<endl;
    cout << "========================================================" << endl;

    //check if cars need servicing
    CharteredPlane* FFplane = new CharteredPlane();
    FFplane->flyToFactory(FunkyFive->getCar(1));
    FFplane->flyToFactory(FunkyFive->getCar(2));



    //setup for the race
    cout << "========================================================" << endl;
    cout << "Now setting up the race and the equpment." <<endl;
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








    return 0;
}
