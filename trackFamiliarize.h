#ifndef TRACKFAMILIARIZE_H
#define TRACKFAMILIARIZE_H

#include "Simulator.h"
#include <iostream>

using namespace std;

///trackFamiliarize is the ConcreteColleagues participant in the Mediator pattern
///
///This gets the racers familiarized with the track

class trackFamiliarize: public Simulator {
public:
    trackFamiliarize();
	///This is the constructor
    void change();
	///Notifies when the racer are getting familiarized with the track
    void print();
};

#endif