//
// Created by Sphesihle Mtwa on 2020/11/04.
//

#include "ServiceAerodynamics.h"
#include "RaceCar.h"
#include "Command.h"

ServiceAerodynamics::ServiceAerodynamics(RaceCar *receiver) : Command(receiver) {

}

ServiceAerodynamics::~ServiceAerodynamics() {

}

void ServiceAerodynamics::execute() {
 getReceiver()->serviceCarAerodynamics();

}
