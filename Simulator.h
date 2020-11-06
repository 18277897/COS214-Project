//
// Created by 27728 on 2020/10/23.
//

#ifndef SIMULATOR_H
#define SIMULATOR_H

class CompMediator;

///Simulator is the Colleagues participant in the Mediator pattern
///
///Communicates with the CompMediator and is used to simulate 

class Simulator {
private:
    CompMediator* medi;
public:
	///This is the constructor
    //Simulator();
	///This is an abstract member function that will be implemented in the concrete colleages (newComponents, trackFamiliarize)
    virtual void change() = 0;
	///This is an abstract member function that will be implemented in the concrete colleages (newComponents, trackFamiliarize)
    virtual void print() = 0;

};

/////newComponents is the ConcreteColleagues participant in the Mediator pattern
/////
/////This tests the new components
//
//class newComponents: public Simulator {
//public:
//	///This is the constructor
//    newComponents();
//	///Changes the new components out when the fail
//    void change();
//	///Notifies when the new components have successfully been tested
//    void print();
//};





#endif //SIMULATOR_H
