//
// Created by 27728 on 2020/10/23.
//

#include "Component.h"

Component::Component(){}
Component::Component(Simulator *sim){}

void Component::algorithm(){
    TestMediator* com = new TestMediator("Test1");
    newComponents* breaks = new newComponents();
    trackFamiliarize* track = new trackFamiliarize();
    com->notify(true);
    track->print();
    breaks->print();
    com->notify(false);
}