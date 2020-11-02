//
// Created by 27728 on 2020/10/23.
//

#ifndef UNTITLED13_TESTINGSTRATEGY_H
#define UNTITLED13_TESTINGSTRATEGY_H


class TestingStrategy {
private:

public:
    TestingStrategy();
    virtual void algorithm() = 0;

};

class ComputerSoftwareSimulation: public TestingStrategy {
private:

public:
    ComputerSoftwareSimulation();
    virtual void algorithm() = 0;

};

class WindTunnel: public TestingStrategy {
private:

public:
    WindTunnel();
    virtual void algorithm() = 0;

};

#endif //UNTITLED13_TESTINGSTRATEGY_H
