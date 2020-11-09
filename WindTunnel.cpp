//
// Created by Suzel Alberts
//

#include "WindTunnel.h"
#include "iostream"
#include "ctime"
using namespace std;

WindTunnel::WindTunnel(int tokens) {
    this->result=0;
    this->numTokens=tokens;
}

void WindTunnel::useToken() {
    this->numTokens-=1;
}

int WindTunnel::getTokens() {
    return this->numTokens;
}


void WindTunnel::performTest(){

    cout<<endl;
    cout << "TESTING STRATEGY ~ Wind Tunnel Simulations" << endl;

    if(numTokens<=400) {

        result = rand()%2;

        if (result>0) {
            useToken();
            cout << "> running simulation" << endl;
            cout<<"  *********************"<<endl;
            cout << "> SUCCESS - Component will increase car speed!" << endl;
            cout<<"  Number of tokens left: "<<getTokens()<<endl;
            cout<<endl;

        } else {
            useToken();
            cout << "> running simulation" << endl;
            cout<<"  *********************"<<endl;
            cout << "> FAIL - Component will not increase car speed!" << endl;
            cout<<"  Number of tokens left: "<<getTokens()<<endl;
            cout<<endl;

        }
    }else{
        cout<<"Your team has no more tokens left for the Wind Tunnel"<<endl;
    }

}
