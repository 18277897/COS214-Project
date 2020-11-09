//
// Created by Suzel Alberts
//

#include "Component.h"
#include "iostream"
using namespace std;

Component::Component() {
    cout<<"New component created!"<<endl;
}

Component::~Component() {
    delete testingStrategy;
}

void Component::setTestingStrategy(TestingStrategy *strategy) {
    this->testingStrategy=strategy;
}

void Component::testComponent(){
    testingStrategy->performTest();
}
