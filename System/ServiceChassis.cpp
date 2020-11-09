//
// Created by Sphesihle Mtwa on 2020/11/04.
//

#include "ServiceChassis.h"
#include "RaceCar.h"
#include "Command.h"

ServiceChassis::ServiceChassis(RaceCar *receiver) : Command(receiver) {

}

ServiceChassis::~ServiceChassis() {

}

void ServiceChassis::execute() {
    getReceiver()->serviceCarChassis();
}
