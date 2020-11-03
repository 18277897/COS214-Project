#include <exception>
using namespace std;

#ifndef __F1Team_h__
#define __F1Team_h__

// #include "Track.h"
// #include "Main.h"

class Track;

class F1Team;

/// F1Team is the Observer participant in the Observer pattern.
///
/// This class defines the interface of the CarPlacing class.
class F1Team
{
    /// This is an abstract member function that will be implemented in CarPlacing
	public: virtual void update() = 0;
};

#endif
