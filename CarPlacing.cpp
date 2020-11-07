#include <exception>
#include <iostream>
using namespace std;

#include "CarPlacing.h"
#include "TrackStatus.h"
#include "F1Team.h"

CarPlacing::CarPlacing(TrackStatus* ts) {
    subject = ts;
}

CarPlacing::~CarPlacing() {
    delete this->subject;
}

void CarPlacing::update() {

	placing[0] = subject->getState();
	placing[1] = subject->getState2();

    cout << "Car 1's place has been updated." << endl;
    cout << "Car 2's place has been updated." << endl;
}

