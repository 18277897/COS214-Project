#include <iostream>
using namespace std;

#include "Command.h"
#include "ServiceFactory.h"
#include "RaceCar.h"

Command::Command(RaceCar *receiver) {
    this->receiver=receiver;

}

RaceCar *Command::getReceiver() {
    return receiver;
}

/*void Command::setReceiver(RaceCar *receiver) {
    this->receiver=receiver;
}*/

Command::~Command() {

}



