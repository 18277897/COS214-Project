//
// Created by 27728 on 2020/11/02.
//

#ifndef TYRE_H
#define TYRE_H

///Tyre is the Product participant for the Factory method
///
///This defines the product interface for the factory method to create

class Tyre {
public:
	///This is the constructor
    Tyre();
	///This is an abstract member function that will be implemented in the inherreting classes
    virtual void print()=0;
};



#endif //UNTITLED13_TYRE_H
