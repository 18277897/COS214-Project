//
// Created by 27728 on 2020/11/02.
//
#include <iostream>
#include "Tyre.h"

using namespace std;

Tyre::Tyre() {}

Soft::Soft() {}
void Soft::print() {
    cout<<"Soft compound ordered"<<endl;
}

Medium::Medium() {}
void Medium::print() {
    cout<<"Medium compound ordered"<<endl;
}

Hard::Hard() {}
void Hard::print() {
    cout<<"Hard compound ordered"<<endl;
}