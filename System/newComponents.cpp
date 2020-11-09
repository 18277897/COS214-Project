#include "newComponents.h"
#include "iostream"
#include "ctime"
using namespace std;

newComponents::newComponents(Component* comp){
    this->component=comp;
    srand(time(NULL));
}
void newComponents::change(){
    cout<<"Component failed and is being replaced."<<endl;
}
void newComponents::print(){
    cout<<"Testing components."<<endl;
    int correct = rand()% 2;
    if (correct == 0){
        change();
        print();
    }
    else {
        cout << "Components tested successfully." << endl;
    }
}