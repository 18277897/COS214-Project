//
// Created by Sphesihle Mtwa on 2020/11/04.
//

#include "ServiceElectronics.h"
#include "RaceCar.h"
#include "Command.h"

ServiceElectronics::ServiceElectronics(RaceCar *receiver) : Command(receiver) {

}

ServiceElectronics::~ServiceElectronics() {

}

void ServiceElectronics::execute() {
    getReceiver()->serviceCarElectronics();
}
