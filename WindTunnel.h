//
// Created by Suzel Alberts
//

#ifndef WINDTUNNEL_H
#define WINDTUNNEL_H
#include "string"
#include "TestingStrategy.h"
using namespace std;

/// Concrete strategy participant of Strategy pattern

class WindTunnel : public TestingStrategy{
private:
    int result; //!< result to determine outcome of simulation
    int numTokens; //!< number of tokens available for use

public:
    /**
     * Constructor
     * @param tokens number of tokens the team initially has (400)
     */
    WindTunnel(int tokens);

    /**
     * Function called when token is used for simulation.
     * Keeps track of the number of tokens available.
     */
    void useToken();

    /// Accessor method for private numTokens member
    int getTokens();

    /**
     * Function to test component using this concrete strategy - Wind Tunnel.
     * The team only receives 400 tokens per season and should keep track of token usage.
     */
    void performTest();
};


#endif
