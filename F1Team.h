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
    ///This is the constructor for the F1 team
	F1Team();
    ///This is the overload constructor for the F1 team that sets the two cars the team will be using
    ///@param firstCar and secondCar are the cars to set the first and second to
	F1Team(RaceCar* firstCar, RaceCar* secondCar);

	///This is a setter that sets an individual car
    ///@param carNum is the number of which car to set. Car is the car to set it to
	void setCar(int carNum, RaceCar* car);
    ///This is a setter that sets both cars
    ///@param firstCar first car to set
    ///@param secondCar second car to set
	void setCars(RaceCar* firstCar, RaceCar* secondCar);
    ///This is a getter that gets a specific car
    ///@param carNum is the selector of which car to get
    ///@return a RaceCar
	RaceCar* getCar(int carNum);

	///Sets the engineering team
	void setETeam(EngineeringTeam* ET);
    ///Gets the engineering team
	EngineeringTeam* getETeam();

    /// This is an abstract member function that will be implemented in CarPlacing
    virtual void update();
};

#endif
