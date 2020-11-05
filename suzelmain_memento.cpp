#include <iostream>
#include "RaceCarMemento.h"
#include "RaceCar.h"
#include "RaceCarCaretaker.h"
using namespace std;

int main() {

    /*
     * Can maybe print the values after the race. Service the car and restore the original values to show restored values
     */

    /*
     * Separate caretaker and memento objects need to be created for each car
     */

    int tyrePressure=10;
    double fuelLevel=10.0;
    double waterLevel=5.0;
    string name="driver1";

    RaceCar* car = new RaceCar(tyrePressure,fuelLevel,waterLevel,name);

    RaceCarCaretaker caretaker;
    caretaker.saveMemento(car->createMemento());
    RaceCarMemento* mem = caretaker.rerieveStoredMemento();


    car->printDetails(); // prints values

    car->check(); // alters values
    car->printDetails();

    car->restore(mem); // restores the original values
    car->printDetails();


    // second car


    tyrePressure=20;
    fuelLevel=12.0;
    waterLevel=14.0;
    name="driver2";

    RaceCar* car2 = new RaceCar(tyrePressure,fuelLevel,waterLevel,name);
    RaceCarCaretaker caretaker2;
    caretaker2.saveMemento(car2->createMemento());
    RaceCarMemento* mem2 = caretaker2.rerieveStoredMemento();

    car2->printDetails();

    car2->check();
    car2->printDetails();

    car2->restore(mem2);
    car2->printDetails();

    return 0;
}
