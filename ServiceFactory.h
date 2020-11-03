

#ifndef ServiceFactory_h
#define ServiceFactory_h

#include "Command.h"
/// This is a brief description of the Service Factory class
/// This class is the Service Factory it is part of the Command pattern and is the invoker participant. When a car needs to be serviced it will invoke the ServiceCarCommand
class ServiceFactory {
private:
    Command* command;

public:
    /**
     * @param command This is the command that the ServiceFactory will invoke
     *
     */

    ServiceFactory(Command *command);
    /**
     * This function executes the command passed into the ServiceFactory
     * @return This function doesn't return anything
     */
    void press();
    /**
     * This is the ServiceFactory destructor
     * */
    ~ServiceFactory();

};


#endif
