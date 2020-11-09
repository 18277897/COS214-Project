//
// Created by Suzel Alberts
//

#ifndef MEMENTOSTATE_H
#define MEMENTOSTATE_H
#include "string"
using namespace std;

/**
 * This class captures the attribute values of the car when the memento is created.
 * These values will be stored in the Caretaker Participant of the Memento pattern,
 * which will be recovered when the memento is reinstated.
 */

class MementoState {
private:
    string name;
    int tyrePressure;
    double fuelLevel;
    double waterLevel;

public:
    /**
     * The MementoState object is created in the Memento class, where all attribute values of the created car
     * will be passed in, to create a state for the car.
     * @param tyrePressure to instantiate the tyre pressure of the car
     * @param fuelLevel to instantiate the fuel level of the car
     * @param waterLevel to instantiate the water level of the car
     * @param name to instantiate the driver name of the car
     */
    MementoState(int tyrePressure, double fuelLevel, double waterLevel, string name);

    /**
     * Accessor for the name
     * @return name of driver
     */
    string getName();

    /**
     * Accessor for the tyre pressure
     * @return car's tyre pressure
     */
    int getTyrePressure();

    /**
     * Accessor for water level
     * @return car's water level
     */
    double getWaterLevel();

    /**
     * Accessor for the fuel level
     * @return car's fuel level
     */
    double getFuelLevel();
};


#endif
