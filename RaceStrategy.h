//
// Created by 27728 on 2020/10/23.
//

#ifndef RACESTRATEGY_H
#define RACESTRATEGY_H
#include <string>

using namespace std;

///RaceStrategy is the Strategy participant of the Strategy pattern
///
///Use as an interface to choose a racing strategy

class RaceStrategy {
public:
	///This is the constructor
    //RaceStrategy();
	///This is an abstract member function that will be implemented in the concrete strategy (SoftCompound, MediumCompound, HardCompound)
    virtual void chooseStrategy() = 0;
};

#endif //UNTITLED13_RACESTRATEGY_H
