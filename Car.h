#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car{

	Engine engineObject;
	Tire tireObjects;
	Door driverDoor;
	Door passangerDoor;

	void beginDrive();

};


class Engine : public Car {

	double engineVolume;

	void startEngine();
	void accelerate();

};


class Tire : public Car {
	
	string tireSize;

	void inflateTire(int i);
};


class Door : public Car {

	Window windowObject;

	void openDoor();

};


class Window : public Door {

	void rollDown();

};
