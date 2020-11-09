//
// Created by Suzel Alberts
//

#ifndef COMPONENT_H
#define COMPONENT_H
#include "TestingStrategy.h"
#include "Simulator.h"
#include "CompMediator.h"

/**
 * Context participant of the Strategy pattern.
 * Contains function to set strategy.
 * Contains functions for component testing and simulation.
 */

class Component {
private:

    TestingStrategy* testingStrategy; //!< TestingStrategy member

public:
    /// Default constructor
    Component();

    /// Destructor for deallocating TestingStrategy member
    ~Component();

    /**
     * Function to set the testing strategy chosen by the team
     * @param strategy chosen strategy
     */
    void setTestingStrategy(TestingStrategy* strategy);

    /// Test function implements chosen strategy implementation
    void testComponent();


};

#endif
