//
// Created by 27728 on 2020/11/02.
//

#ifndef UNTITLED13_COMPMEDIATOR_H
#define UNTITLED13_COMPMEDIATOR_H
#include <String>
#include "Simulator.h"

using namespace std;

class CompMediator {
private:
public:
    CompMediator();
    virtual void notify(bool start)=0;
};

class TestMediator: public CompMediator {
private:
    string testName;
public:
    TestMediator(string name);
    void notify(bool start);
};

#endif //UNTITLED13_COMPMEDIATOR_H
