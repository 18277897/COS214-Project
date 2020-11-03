#include <iostream>
#include "RaceStrategy.h"
#include "EngineeringTeam.h"
#include "Component.h"

using namespace std;

int main() {

    ////////////RaceStrategy/////////////should be in engineering
    cout<<endl;
    cout<<"/////////////RaceStrategy - Strategy///////////////"<<endl;
    cout<<endl;

    EngineeringTeam * et = new EngineeringTeam();
    et->chooseStrategy();

    /////////////////OrderTyres//////////////////
    cout<<endl;
    cout<<"/////////////OrderTyres - FactoryMethod///////////////"<<endl;
    cout<<endl;

    et->produce();

    /////////////////Simulator//////////////////
    cout<<endl;
    cout<<"/////////////Simulator - Mediator///////////////"<<endl;
    cout<<endl;

    Component* nComp = new Component();
    nComp->algorithm();




    return 0;
}
