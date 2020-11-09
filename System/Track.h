#include <exception>
using namespace std;

#ifndef __Track_h__
#define __Track_h__

// #include "F1Team.h"

#include "CarPlacing.h"

class F1Team;
class Track;

/// Track is the Subject participant in the Observer pattern.
///
/// This class updates the positions of the cars on the track.
class Track
{
	private: F1Team* team;
    CarPlacing* cp1;
    TrackStatus* ts;

	public: F1Team* unnamed_F1Team_;

    /// This is the constructor of the class.
	public: Track();
    public: ~Track();

    /// This sets the correct car placing and track status.
    public: void Set(CarPlacing* cppp, TrackStatus* tss);

    /// This notifies the object that an update has taken place.
	public: void notify();

    /// This indicates that the cars are on the track.
	public: bool attach();
};

#endif
