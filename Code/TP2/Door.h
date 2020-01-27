#include "Elevator.h"

#pragma once
class Door
{
public:
	Door(int floor,Elevator elev);
	bool isElevatorPresent(int elevator_floor);
	void waitBeforeClose(int delay);
	void openDoor();
	void closeDoor();
	Door();
	void allowDeparture();

	~Door();

private:
	int _floor;
	Elevator _elev;
	bool _state_open;
};




