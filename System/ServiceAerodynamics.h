//
// Created by Sphesihle Mtwa on 2020/11/04.
//

#ifndef ServiceAerodynamics_h
#define ServiceAerodynamics_h

#include "RaceCar.h"
#include "Command.h"

///This class inherits from the command class, it is a concrete command

class ServiceAerodynamics : public Command {
public:
    /**
     * This is the ServiceAerodynamics constructor
     * @param receiver This is the variable that the command will be executed on and its type is RaceCar
     *
     * */
    ServiceAerodynamics(RaceCar *receiver);
    /**
     * This is the ServiceAerodynamics destructor
     *
     * */
    ~ServiceAerodynamics();
    /**
      * This function runs the receiver's ServiceCarAerodynamics() function
      * @return this function doesn't return return anything
      *
      * */
    void execute();
};


#endif
