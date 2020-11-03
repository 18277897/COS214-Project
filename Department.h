#ifndef Department_h
#define Department_h

#include "EngineeringTeam.h"

/**
 * This class acts as an interface for all other types of departments
 * */
class Department
{
	/*private:
    EngineeringTeam* engTeam;
	 //access car name - getCar().getName();*/


//I think that Department should accept a car parameter so that we now what kind of car we're working on...
	public:
		/**
		 * This is the Department constructor
		 *
		 * */
        Department();
        /**
         * This is the Department destructor
         *
         * */
		virtual ~Department();
        /**
         * This is a virtual function that is implemented in this classes subclasses(Electronic, Engine, Aerodynamics, Chassis). It will make each respective department's parts faster.
         * */
		virtual void improvePart()=0;
		
	
};

#endif