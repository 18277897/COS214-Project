#include <exception>
#include <cstdlib>

using namespace std;

#include "TrackStatus.h"
#include "Track.h"

TrackStatus::TrackStatus() {
}

int TrackStatus::getState() {
	return carplacing[0];
}

int TrackStatus::getState2() {
    return carplacing[1];
}

void TrackStatus::setState(int num) {
    carplacing[0] = rand() % num+1;
}

void TrackStatus::setState2(int num) {
    carplacing[1] = rand() % num+1;
}

