//
// Created by 27728 on 2020/10/23.
//

#ifndef UNTITLED13_RACESTRATEGY_H
#define UNTITLED13_RACESTRATEGY_H
#include <string>

using namespace std;

class RaceStrategy {
private:

public:
    RaceStrategy();
    virtual string chooseStrategy() = 0;
    virtual void print() = 0;
};



class SoftCompound: public RaceStrategy {
private:

public:
    SoftCompound();
    string chooseStrategy();
    void print() ;
};

class MediumCompound: public RaceStrategy {
private:

public:
    MediumCompound();
    string chooseStrategy();
    void print();
};

class HardCompound: public RaceStrategy {
private:

public:
    HardCompound();
    string chooseStrategy();
    void print();
};

#endif //UNTITLED13_RACESTRATEGY_H
