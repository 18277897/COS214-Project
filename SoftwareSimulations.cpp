//
// Created by Suzel Alberts
//

#include "SoftwareSimulations.h"
#include "iostream"
#include "ctime"
using namespace std;

SoftwareSimulations::SoftwareSimulations() {
    result=0;
}

void SoftwareSimulations::performTest() {

    cout<<endl;
    cout<<"TESTING STRATEGY ~ Computer Software Simulations"<<endl;

    result=rand()%2;

    if(result<1){

        cout << "> running simulation" << endl;
        cout<<"  *********************"<<endl;
        cout<<"> SUCCESS - Component will increase car speed!"<<endl;

    }else{

        cout << "> running simulation" << endl;
        cout<<"  *********************"<<endl;
        cout<<"> FAIL - Component will not increase car speed!"<<endl;
    }
}