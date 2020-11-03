#include "CharteredPlane.h"


CharteredPlane::CharteredPlane(){

}
CharteredPlane::CharteredPlane(RaceCar* c) {
	// TODO - implement Chartered Plane::Chartered Plane
	this->car = c;
}

void CharteredPlane::flyToRace(RaceCar* vroom) {
	// TODO - implement Chartered Plane::flyToRace
	cout << "Car " << vroom->getName() <<" is safely on the plane and on the way to the next race."<< endl;
}

void CharteredPlane::flyToFactory(RaceCar* vroom) {
	// TODO - implement Chartered Plane::flyToFactory
	
	if(vroom->getServiced() == true){
		cout << "Car " << vroom->getName() << " does not need servicing." << endl;
		flyToRace(vroom);
	}
	else{
		cout << "Car " << vroom->getName() << " needs servicing and has been safely loaded onto the plane and is off to the service factory" << endl;
	}
}
