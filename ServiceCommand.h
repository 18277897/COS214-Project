

#ifndef ServiceCommand_h
#define ServiceCommand_h


#include "RaceCar.h"
#include "Command.h"

///This class inherits from the command class
class ServiceCommand : public Command {

public:
    /**
     * This is the ServiceCommand constructor
     * @param receiver This is the variable that the command will be executed on and its type is RaceCar
     *
     * */
    ServiceCommand(RaceCar *receiver);
    /**
     * This is the ServiceCommand destructor
     *
     * */
    ~ServiceCommand();
    /**
     * This function runs the receiver's serviceCar() function
     * @return this function doesn't return return anything
     *
     * */
    void execute();

};


#endif
