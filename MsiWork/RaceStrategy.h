//
// Created by 27728 on 2020/10/23.
//

#ifndef UNTITLED13_RACESTRATEGY_H
#define UNTITLED13_RACESTRATEGY_H
#include <string>

using namespace std;

///RaceStrategy is the Strategy participant of the Strategy pattern
///
///Use as an interface to choose a racing strategy

class RaceStrategy {
public:
	///This is the constructor
    RaceStrategy();
	///This is an abstract member function that will be implemented in the concrete strategy (SoftCompound, MediumCompound, HardCompound)
    virtual void print() = 0;
};

///SoftCompound is the ConcreteStrategy participant of the Strategy pattern
///
///One of the 3 possible strategies that can be chosen

class SoftCompound: public RaceStrategy {
public:
	///This is the constructor
    SoftCompound();
	///Notifies when the Soft Compound has been chosen
    void print() ;
};

///MediumCompound is the ConcreteStrategy participant of the Strategy pattern
///
///One of the 3 possible strategies that can be chosen

class MediumCompound: public RaceStrategy {
public:
	///This is the constructor
    MediumCompound();
	///Notifies when the Medium Compound has been chosen
    void print();
};

///HardCompound is the ConcreteStrategy participant of the Strategy pattern
///
///One of the 3 possible strategies that can be chosen

class HardCompound: public RaceStrategy {
public:
	///This is the constructor
    HardCompound();
	///Notifies when the Hard Compound has been chosen
    void print();
};

#endif //UNTITLED13_RACESTRATEGY_H
