//
// Created by 27728 on 2020/10/23.
//

#ifndef UNTITLED13_SIMULATOR_H
#define UNTITLED13_SIMULATOR_H

class CompMediator;

class Simulator {
private:
    CompMediator* medi;
public:
    Simulator();
    virtual void change() = 0;
    virtual void print() = 0;

};

class newComponents: public Simulator {
private:

public:
    newComponents();
    void change();
    void print();
};

class trackFamiliarize: public Simulator {
private:

public:
    trackFamiliarize();
    void change();
    void print();
};



#endif //UNTITLED13_SIMULATOR_H
