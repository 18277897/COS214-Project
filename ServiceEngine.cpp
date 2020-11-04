#include <iostream>
using namespace std;

#include "ServiceEngine.h"
#include "RaceCar.h"
#include "Command.h"

ServiceEngine::ServiceEngine(RaceCar *receiver): Command(receiver) {

}

void ServiceEngine::execute()
{
    getReceiver()->serviceCarEngine();
}

ServiceEngine::~ServiceEngine() {

}
