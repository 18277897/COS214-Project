//
// Created by Sphesihle Mtwa on 2020/11/04.
//

#ifndef ServiceChassis_h
#define ServiceChassis_h

#include "RaceCar.h"
#include "Command.h"

///This class inherits from the command class, it is a concrete command
class ServiceChassis : public Command {
public:
    /**
     * This is the ServiceChassis constructor
     * @param receiver This is the variable that the command will be executed on and its type is RaceCar
     *
     * */
    ServiceChassis(RaceCar *receiver);
    /**
     * This is the ServiceChassis destructor
     *
     * */
    ~ServiceChassis();
    /**
      * This function runs the receiver's ServiceCarServiceChassis() function
      * @return this function doesn't return return anything
      *
      * */
    void execute();

};


#endif
