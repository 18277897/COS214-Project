#ifndef NEXTF1SEASONTEAM_H
#define NEXTF1SEASONTEAM_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "EngineeringTeam.h"

///NextF1SeasonTeam is the ConcreteClass in the Template method and inherits from EngineeringTeam
class NextF1SeasonTeam : public EngineeringTeam{

private:

public:

NextF1SeasonTeam();
virtual void beginWork();

};

#endif