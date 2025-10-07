#pragma once
#include <iostream>
#include <string>

using namespace std;


class Engine {
public:
	double engineVolume;

	void startEngine();
	void accelerate();
	
	void setEngineVolume(double e);

	double getEngineVolume();

};


class Tire {
public:
	string tireSize;

	void inflateTire(int i);
};

class Window {
public:
	void rollDown();

};

class Door {
public:
	Window windowObject;

	void openDoor();

};

class Car {
public:
	Engine engineObject;
	Tire tireObjects[4];
	Door driverDoor;
	Door passengerDoor;

	void beginDrive();

	Car();
	Car(double dv, string ts);
};
