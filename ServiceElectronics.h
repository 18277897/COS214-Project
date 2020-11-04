//
// Created by Sphesihle Mtwa on 2020/11/04.
//

#ifndef ServiceElectronics_h
#define ServiceElectronics_h

#include "RaceCar.h"
#include "Command.h"

///This class inherits from the command class, it is a concrete command
class ServiceElectronics : public Command {

public:
    /**
     * This is the ServiceElectronics constructor
     * @param receiver This is the variable that the command will be executed on and its type is RaceCar
     *
     * */
    ServiceElectronics(RaceCar *receiver);
    /**
     * This is the ServiceElectronics destructor
     *
     * */
    ~ServiceElectronics();
    /**
      * This function runs the receiver's ServiceCarElectronics() function
      * @return this function doesn't return return anything
      *
      * */
    void execute();



};


#endif
