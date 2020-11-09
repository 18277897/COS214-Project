//
// Created by Suzel Alberts
//

#ifndef RACECARMEMENTO_H
#define RACECARMEMENTO_H
#include "string"
#include "MementoState.h"

/// This class is the Memento participant of the Memento pattern

using namespace std;

class RaceCarMemento {
private:
    /// The RaceCar class will be creating the memento object and is declared a friend of this class, so it can access the private members
    friend class RaceCar;

    MementoState* state;

    /**
     * Class constructor takes in all attribute values of the car. These values will be used to create and initialize
     * the MementoState object.
     * @param tyrePressure car's tyre pressure
     * @param fuelLevel car's fuel level
     * @param waterLevel car's water level
     * @param name driver's name
     */
    RaceCarMemento(int tyrePressure, double fuelLevel, double waterLevel, string name);

    /**
     * Accessor to the state member of the class - only accessible by friend class
     * @return the state of the car (to access attributes of the car)
     */
    MementoState* getState();

public:
    ~RaceCarMemento();
};


#endif
