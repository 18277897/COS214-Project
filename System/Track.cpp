#include <exception>
using namespace std;

#include "Track.h"
#include "F1Team.h"

Track::Track() {

}

Track::~Track() {
    delete this->team;
    delete this->unnamed_F1Team_;
    delete this->cp1;
    delete this->ts;
}

void Track::Set(CarPlacing* cppp
                , TrackStatus* tss){
    cp1 = cppp;
    ts = tss;
}

void Track::notify() {
    cp1->update();
}

bool Track::attach() {
    return true;
}

