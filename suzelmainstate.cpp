#include <iostream>
#include <string>
#include "RaceCar.h"
#include "NeedsService.h"
#include "Serviced.h"

using namespace std;

int main() {

    /*
     * 
     * Only after service change state: State = SERVICED
     * After race the state is changed: State = NEEDSSERVICE (Call service command when in this state)
     */


    // STATE //
    RaceCar *car1 = new RaceCar("driver1");
    RaceCar *car2 = new RaceCar("driver2");

    // create states
    RaceCarState *state1 = new Serviced();
    RaceCarState *state2 = new NeedsService();

    // car 1
    cout<<"RACE CAR STATE FOR: " << car1->getName() <<endl;
    car1->setState(state1);
    state1->handle(); // outputs current state

    state1->changeCarState(); // alternates between states, also outputs new state

    cout<<endl;

    // car 2
    cout<<"RACE CAR STATE FOR: " + car2->getName() <<endl;
    car2->setState(state1);
    state2->handle();
    

    state2->changeCarState();
    //state2->handle();
    return 0;
}
