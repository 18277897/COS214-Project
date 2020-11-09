#ifndef CURRENTF1SEASONTEAM_H
#define CURRENTF1SEASONTEAM_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "EngineeringTeam.h"

///CurrentF1SeasonTeam is the ConcreteClass in the Template method and inherits from EngineeringTeam
class CurrentF1SeasonTeam : public EngineeringTeam{

private:

public:

CurrentF1SeasonTeam();
virtual void beginWork();



};

#endif