#include <iostream>
#include "RaceCar.h"
#include "NeedsService.h"
#include "Serviced.h"

using namespace std;

int main() {

    /*
     * Car needs to be serviced at the beginning of a race: State = NEEDSSERVICE (Call service command when in this state)
     * Only after service change state: State = SERVICED
     * After race the state is changed: State = NEEDSSERVICE (Call service command when in this state)
     */


    // STATE //
    RaceCar *car1 = new RaceCar("driver1");
    RaceCar *car2 = new RaceCar("driver2");

    // create states
    RaceCarState *state1 = new Serviced;
    RaceCarState *state2 = new NeedsService;

    // car 1
    cout<<"RACE CAR STATE FOR: " + car1->getDriver()<<endl;
    car1->setState(state1);
    state1->handle(); // outputs current state

    state1->changeCarState(); // alternates between states, also outputs new state

    cout<<endl;

    // car 2
    cout<<"RACE CAR STATE FOR: " + car2->getDriver()<<endl;
    car2->setState(state1);
    state2->handle();

    state2->changeCarState();

    return 0;
}
