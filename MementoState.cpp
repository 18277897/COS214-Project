//
// Created by Suzel Alberts
//

#include "MementoState.h"
MementoState::MementoState(int tyrePressure, double fuelLevel, double waterLevel, string name) {
    this->name=name;
    this->waterLevel=waterLevel;
    this->fuelLevel=fuelLevel;
    this->tyrePressure=tyrePressure;
}

string MementoState::getName() {
    return this->name;
}

double MementoState::getFuelLevel() {
    return this->fuelLevel;
}

int MementoState::getTyrePressure() {
    return this->tyrePressure;
}

double MementoState::getWaterLevel() {
    return this->waterLevel;
}