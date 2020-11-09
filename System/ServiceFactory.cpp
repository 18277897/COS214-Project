#include <iostream>
using namespace std;

#include "ServiceFactory.h"
#include "Command.h"



ServiceFactory::ServiceFactory(Command *command)
{
    this->command=command;
}

ServiceFactory::~ServiceFactory() {

}

void ServiceFactory::press() {
    command->execute();
}
