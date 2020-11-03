#ifndef NEXTF1SEASONTEAM_H
#define NEXTF1SEASONTEAM_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "EngineeringTeam.h"

class NextF1SeasonTeam : public EngineeringTeam{

private:

public:

NextF1SeasonTeam(){};
virtual void beginWork(RaceCar* car){ /*basically for upgrading the car, willl be implimented once all work is done*/};


};

#endif