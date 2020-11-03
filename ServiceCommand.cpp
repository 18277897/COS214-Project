#include <iostream>
using namespace std;

#include "ServiceCommand.h"
#include "RaceCar.h"
#include "Command.h"

ServiceCommand::ServiceCommand(RaceCar *receiver): Command(receiver) {

}

void ServiceCommand::execute()
{
    getReceiver()->serviceCar();
}

ServiceCommand::~ServiceCommand() {

}
