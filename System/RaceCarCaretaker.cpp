//
// Created by Suzel Alberts on 2020/11/05.
//

#include "RaceCarCaretaker.h"
RaceCarCaretaker::RaceCarCaretaker() {}

RaceCarCaretaker::~RaceCarCaretaker() {
    delete this->memento;
}

void RaceCarCaretaker::saveMemento(RaceCarMemento *memento) {
    this->memento=memento;
}

RaceCarMemento* RaceCarCaretaker::rerieveStoredMemento() {
    return memento;
}