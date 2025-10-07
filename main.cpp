#include <iostream>
#include "Car.h"

using namespace std;

int main() {
	
	//Engine Volume, Tire Size
	Car myCar(3.1, "P215/65R15");

	cout << "Engine volume (in liters) is: " << myCar.engineObject.getEngineVolume() << "\n";
	cout << "All 4 tire specifications are: " << myCar.tireObjects->tireSize << "\n\n\n";

	myCar.driverDoor.openDoor();
	myCar.engineObject.startEngine();
	myCar.driverDoor.windowObject.rollDown();
	myCar.tireObjects->inflateTire(32);
	myCar.engineObject.accelerate();
}
