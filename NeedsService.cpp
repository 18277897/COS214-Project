//
// Created by Suzel Alberts
//

#include "NeedsService.h"
#include "Serviced.h"
#include "iostream"

using namespace std;
NeedsService::NeedsService(){
}

void NeedsService::handle() {
    cout<<"The car is in need of a service!"<<endl;
}

RaceCarState * NeedsService::changeCarState() {

    RaceCarState* state = new Serviced();

    cout<<endl;
    cout<<"***SERVICE UPDATE***"<<endl;
    state->handle();

    return state;
}

