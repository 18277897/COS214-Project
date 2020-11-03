//
// Created by 27728 on 2020/11/02.
//
#include <iostream>
#include "CompMediator.h"

CompMediator::CompMediator(){}
void TestMediator::notify(bool start) {
    if (start == true) {
        cout << "Starting simulation "+ testName << endl;
    } else {
    cout << "Simulation complete." << endl;
    }
}

TestMediator::TestMediator(string name){
    testName = name;
}