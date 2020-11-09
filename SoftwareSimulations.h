//
// Created by Suzel Alberts
//

#ifndef SOFTWARESIMULATIONS_H
#define SOFTWARESIMULATIONS_H
#include "string"
#include "TestingStrategy.h"
using namespace std;

/// Concrete strategy participant of Strategy pattern

class SoftwareSimulations : public TestingStrategy{
private:
    int result; //!< result to determine outcome of simulation

public:
    /// Default constructor
    SoftwareSimulations();

    /**
     * Function to test component using this concrete strategy - Software Simulations.
     * The team has unlimited access to these simulations.
     */
    void performTest();
};


#endif
