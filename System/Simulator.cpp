//
// Created by 27728 on 2020/10/23.
//
#include <iostream>
#include "Simulator.h"

using namespace std;


Simulator::Simulator(){}


Simulator::~Simulator(){

    delete this->medi;
}



//newComponents::newComponents(){}
//void newComponents::change(){
//    cout<<"Component failed and is being replaced."<<endl;
//}
//void newComponents::print(){
//    cout<<"Testing components."<<endl;
//    int correct = rand()% 2;
//    if (correct == 0){
//        change();
//        print();
//    }
//    else {
//        cout << "Components tested successfully." << endl;
//    }
//}


