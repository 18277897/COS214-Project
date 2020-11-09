#include <exception>
using namespace std;

#ifndef __CarPlacing_h__
#define __CarPlacing_h__

// #include "TrackStatus.h"
#include "F1Team.h"

class TrackStatus;
// class F1Team;
class CarPlacing;

/// CarPlacing is the ConcreteObserver in the Observer pattern.
///
/// This class places the cars on the track with their positions.
class CarPlacing: public F1Team
{
    ///
	private: int placing[2];
	private: TrackStatus* subject;

    /// This places the car on the track.
    ///@param ts initialises subject to a track status object
	public: CarPlacing(TrackStatus* ts);

    /// This updates the postions of each car.
	public: void update();
};

#endif
