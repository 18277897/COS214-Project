//
// Created by 27728 on 2020/11/02.
//

#ifndef UNTITLED13_TYRE_H
#define UNTITLED13_TYRE_H

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

///Soft is the ConcreteProduct for the Factory method
///
///It implements the interface for the soft compound tyre

class Soft: public Tyre {
public:
	///This is the constructor
    Soft();
	///This is the print function that prints when a soft compoud has been ordered
    void print();
};

///Medium is the ConcreteProduct for the Factory method
///
///It implements the interface for the Medium compound tyre

class Medium: public Tyre {
public:
	///This is the constructor
    Medium();
	///This is the print function that prints when a medium compoud has been ordered
    void print();
};

///Hard is the ConcreteProduct for the Factory method
///
///It implements the interface for the Hard compound tyre

class Hard: public Tyre {
public:
	///This is the constructor
    Hard();
	///This is the print function that prints when a hard compoud has been ordered
    void print();
};

#endif //UNTITLED13_TYRE_H
