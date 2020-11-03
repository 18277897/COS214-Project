#ifndef __F1Team_h__
#define __F1Team_h__

#include <exception>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "RaceCar.h"
#include "EngineeringTeam.h"
#include "CurrentF1SeasonTeam.h"
#include "NextF1SeasonTeam.h"

using namespace std;

// #include "Track.h"
// #include "Main.h"

class Track;

class F1Team;

/// F1Team is the Observer participant in the Observer pattern.
///
/// This class defines the interface of the CarPlacing class.
class F1Team
{

private:
	RaceCar* car1;
	RaceCar* car2;
	EngineeringTeam* EngineeringDept;
	
  
public:
	F1Team();
	F1Team(RaceCar* firstCar, RaceCar* secondCar);

	//car setters and getters
	void setCar(int carNum, RaceCar* car);
	void setCars(RaceCar* firstCar, RaceCar* secondCar);
	RaceCar* getCar(int carNum);

	//engineering team setters and getters
	void setETeam(EngineeringTeam* ET);
	EngineeringTeam* getETeam();

    /// This is an abstract member function that will be implemented in CarPlacing
    virtual void update();
};

#endif
