#include "pch.h"
#include "Door.h"


Door::Door(int floor)
{
	_floor = floor;
	_state_open = false;
}

bool Door::isElevatorPresent(int elevator_floor)
{
	return elevator_floor == _floor;
}

void Door::waitBeforeClose(int delay)
{
	//wait(delay)
}

void Door::openDoor()
{
	_state_open = true;
}

void Door::closeDoor()
{
	_state_open = false;
}

void Door::allowDeparture()
{
	//Elevator.setOKToGo();
}

Door::~Door()
{
}
