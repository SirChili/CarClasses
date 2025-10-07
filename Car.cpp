#include "Car.h"


//Engine Variables and Functions
//________________________________________
// double engineVolume;
void  Engine::startEngine()
{
	cout << "Starting engine...\n";
}

void Engine::accelerate()
{
	cout << "Accelerating... Vroom Vroom!!\n";
}

void Engine::setEngineVolume(double e)
{
	engineVolume = e;
}

double Engine::getEngineVolume() 
{
	return engineVolume;
}

//Tire Variables and Functions
//________________________________________
//string tireSize;
void Tire::inflateTire(int i)
{	
	cout << "Inflating tire to " << i << " psi...\n";
}

//Window Variables and Functions
//________________________________________
void Window::rollDown()
{
	cout << "Rolling down window...\n";
}

//Door Variables and Functions
//________________________________________
//Window windowObject;
void Door::openDoor()
{
	cout << "Opening door...\n";
}

//Car Variables and Functions
//________________________________________
Engine engineObject;
Tire tireObjects[4];
Door driverDoor;
Door passengerDoor;

void Car::beginDrive()
{
}

Car::Car()
{
}

Car::Car(double ev, string ts)
{
	engineObject.engineVolume = ev;
	tireObjects->tireSize = ts;
}
