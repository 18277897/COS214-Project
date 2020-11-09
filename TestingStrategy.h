//
// Created by Suzel Alberts
//

#ifndef TESTINGSTRATEGY_H
#define TESTINGSTRATEGY_H
#include "string"
using namespace std;

/**
 * Strategy participant in Strategy pattern.
 * Defines test interface for concrete strategy classes to implement.
 */

class TestingStrategy {

public:
    /// Default constructor
    TestingStrategy();

    /**
     * Pure virtual function to be implemented by subclasses: WindTunnel, SoftwareSimulations.
     * Depending on testing strategy chosen, a simulation will be performed and the outcome will be reported.
     */
    virtual void performTest()=0;
};


#endif
