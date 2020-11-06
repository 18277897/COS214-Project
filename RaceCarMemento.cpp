//
// Created by Suzel Alberts
//

#include "RaceCarMemento.h"
RaceCarMemento::RaceCarMemento(int tp, double fl, double wl, string name) {
    state=new MementoState(tp, fl, wl, name);
}

RaceCarMemento::~RaceCarMemento() {
    delete this->state;
}

MementoState * RaceCarMemento::getState() {
    return this->state;
}