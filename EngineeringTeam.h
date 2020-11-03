//
// Created by 27728 on 2020/11/02.
//

#ifndef UNTITLED13_ENGINEERINGTEAM_H
#define UNTITLED13_ENGINEERINGTEAM_H
#include "Tyre.h"
#include "RaceStrategy.h"
#include "RaceCar.h"

class EngineeringTeam {
private:
    int tyres[5];
    
    //RaceCar* car;
    //gonna need the department
public:
    EngineeringTeam();
    Tyre* produce();
    void chooseStrategy();
    virtual Tyre* produceProduct() ;

    //upgrading of car
    virtual void beginWork(RaceCar* car) =0;

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
