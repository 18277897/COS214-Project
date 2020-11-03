#ifndef Command_h
#define Command_h


#include "RaceCar.h"
/// This class acts as an interface for the execute function
class Command {

private:
    RaceCar* receiver;

public:
    /**
     * This is the Command constructor
     * @param receiver This is the variable that the command will be executed on and its type is RaceCar
     * */
    Command(RaceCar* receiver);
    /**
     * This is the Command destructor
     * */
    ~Command();
    /**
     *
     * @return receiver, which is RaceCar object pointer
     * */
    RaceCar* getReceiver();
    //void setReceiver(RaceCar* receiver);
    /**
     * This is a virtual function that is implemented in this classes subclasses.
     * */
    virtual void execute() = 0;
};


#endif
