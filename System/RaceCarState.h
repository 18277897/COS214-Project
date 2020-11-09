//
// Created by Suzel Alberts
//

#ifndef RACECARSTATE_H
#define RACECARSTATE_H

/// State participant of the State pattern

class RaceCarState {
public:
    /// Constructor
    //RaceCarState();

    /// This pure virtual function will be implemented in the subclasses: NeedsService, Serviced
    virtual void handle()=0;

    /// This pure virtual function will be implemented in the subclasses: NeedsService, Serviced
    virtual RaceCarState* changeCarState()=0;
};


#endif
