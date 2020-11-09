//
// Created by Suzel Alberts
//

#ifndef SERVICED_H
#define SERVICED_H
#include "RaceCarState.h"

/// Concrete state Participant of the State pattern

class Serviced : public RaceCarState{
public:
    Serviced();

    /**
     * Function displays the description of the current state of the car.
     */
    void handle();

    /**
     * Function allows state of car to alternate between two states, which is determined based on the current state.
     * @return RaceCarState* the resulting state of the change.
     */
    RaceCarState* changeCarState();
};


#endif
