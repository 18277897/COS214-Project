//
// Created by Suzel Alberts
//

#ifndef RACECARCARETAKER_H
#define RACECARCARETAKER_H
#include "RaceCarMemento.h"

/// This class is the Caretaker participant of the Memento pattern

class RaceCarCaretaker {
private:
    RaceCarMemento* memento; //!< Memento member

public:
    RaceCarCaretaker();

    /// Destructor to deallocate memento member
    ~RaceCarCaretaker();

    /**
     * This function saves the passed in memento, so that the state of the car can be restored at a later stage.
     * @param memento this is the memento to be stored
     */
    void saveMemento(RaceCarMemento* memento);

    /**
     * This function allows the stored memento to be retrieved.
     * @return The originally stored memento is returned.
     */
    RaceCarMemento* rerieveStoredMemento();
};


#endif
