//
// Created by Suzel Alberts
//

#include "Serviced.h"
#include "NeedsService.h"
#include "iostream"
using namespace std;

Serviced::Serviced(){
}

void Serviced::handle() {
    cout<<"The car has been serviced!"<<endl;
}

RaceCarState * Serviced::changeCarState() {

    RaceCarState* state = new NeedsService();

    cout<<endl;
    cout<<"***SERVICE UPDATE***"<<endl;
    state->handle();

    return state;
}