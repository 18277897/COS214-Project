

#ifndef ServiceCommand_h
#define ServiceCommand_h


#include "RaceCar.h"
#include "Command.h"

///This class inherits from the command class, it is a concrete command
class ServiceEngine : public Command {

public:
    /**
     * This is the ServiceEngine constructor
     * @param receiver This is the variable that the command will be executed on and its type is RaceCar
     *
     * */
    ServiceEngine(RaceCar *receiver);
    /**
     * This is the ServiceEngine destructor
     *
     * */
    ~ServiceEngine();
    /**
     * This function runs the receiver's serviceCarEngine() function
     * @return this function doesn't return return anything
     *
     * */
    void execute();

};


#endif
