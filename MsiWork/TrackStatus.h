#include <exception>
using namespace std;

#ifndef __TrackStatus_h__
#define __TrackStatus_h__

// #include "FinishLine.h"
// #include "TraverseCars.h"
#include "Track.h"

class TraverseCars;
// class Track;
class TrackStatus;

/// TrackStatus is the ConcreteSubject participant in the Observer pattern.
///
/// This class is responsible for generating the positions of each car.
class TrackStatus: public Track
{
	private: int carplacing[2];

    /// This is the constructor of the class.
	public: TrackStatus();

    /// This gets the position of the first car.
	public: int getState();

    /// This gets the position of the second car.
	public: int getState2();

    /// This sets the position of the first car.
    ///@param num This parameter is dependent on whether we are qualifying or racing.
	public: void setState(int num);

    /// This sets the position of the second car.
    ///@param num This parameter is dependent on whether we are qualifying or racing.
	public: void setState2(int num);
};

#endif
