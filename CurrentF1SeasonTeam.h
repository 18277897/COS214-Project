#ifndef CURRENTF1SEASONTEAM_H
#define CURRENTF1SEASONTEAM_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "EngineeringTeam.h"

class CurrentF1SeasonTeam : public EngineeringTeam{

private:

public:
    //constructor for the currentf1Seasonteam [engineering] which is inherited from EngineeringTeam
    CurrentF1SeasonTeam(){};
    //Function used to call the improvePart() function of all the departments
    virtual void beginWork(RaceCar* car){ /*basically for upgrading the car, willl be implimented once all work is done*/};


};

#endif