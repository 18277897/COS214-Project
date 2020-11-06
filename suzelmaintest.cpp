#include <iostream>
#include "SoftwareSimulations.h"
#include "WindTunnel.h"
#include "Component.h"
#include "EngineeringTeam.h"
#include "ctime"

using namespace std;

int main() {

    // This creates and tests one component
    Component* carComponent = new Component();
    Component* test = new Component();
    //Component* frog = new Component();
    
    EngineeringTeam* team = new EngineeringTeam();

    // simulator
    cout<<endl;

    //cout << "Debug" <<endl;

    team->simulateComponent(test);
    team->algorithm();

    // strategy
    srand(time(NULL));
    int result=rand()%2;

    if(result==0){

        TestingStrategy *simulation = new SoftwareSimulations();
        carComponent->setTestingStrategy(simulation);
        carComponent->testComponent();

    }else{

        TestingStrategy *wind = new WindTunnel(400);
        carComponent->setTestingStrategy(wind);
        carComponent->testComponent();

    }

    return 0;
}
