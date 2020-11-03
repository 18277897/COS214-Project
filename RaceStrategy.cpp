//
// Created by 27728 on 2020/10/23.
//

#include <cstdlib>
#include <iostream>
#include "RaceStrategy.h"

using namespace std;


RaceStrategy::RaceStrategy(){}

SoftCompound::SoftCompound(){}

void SoftCompound::print(){
    cout<<"Soft Compound has been chosen."<<endl;
}

MediumCompound::MediumCompound(){}

void MediumCompound::print(){
    cout<<"Medium Compound has been chosen."<<endl;
}

HardCompound::HardCompound(){}

void HardCompound::print(){
    cout<<"Hard component has been chosen."<<endl;
}