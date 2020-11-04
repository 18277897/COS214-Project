//
// Created by Suzel Alberts
//

#ifndef NEEDSSERVICE_H
#define NEEDSSERVICE_H
#include "RaceCarState.h"

/// Concrete state participant of the State pattern

class NeedsService : public RaceCarState{

public:
    /// Constructor
    NeedsService();

    /**
     * Function displays the description of the current state of the car
    */
    void handle();

    /**
     * Function allows state of car to alternate between two states, which is determined based on the current state.
     * @return RaceCarState* the resulting state of the change
     */
    RaceCarState* changeCarState();
};


#endif
