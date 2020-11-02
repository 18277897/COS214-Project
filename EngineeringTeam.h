//
// Created by 27728 on 2020/11/02.
//

#ifndef UNTITLED13_ENGINEERINGTEAM_H
#define UNTITLED13_ENGINEERINGTEAM_H
#include "Tyre.h"
#include "RaceStrategy.h"

class EngineeringTeam {
private:
    int tyres[5];
public:
    EngineeringTeam();
    Tyre* produce();
    void chooseStrategy();
    virtual Tyre* produceProduct() ;
};

class SoftCreator {
private:

public:
    SoftCreator();
    Tyre* produceProduct();
};

class MediumCreator {
private:

public:
    MediumCreator();
    Tyre* produceProduct();
};

class HardCreator {
private:

public:
    HardCreator();
    Tyre* produceProduct();
};




#endif //UNTITLED13_ENGINEERINGTEAM_H
