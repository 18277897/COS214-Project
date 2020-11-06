//
// Created by Suzel Alberts on 2020/11/04.
//

#include "TestMediator.h"
#include "iostream"
using namespace std;
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