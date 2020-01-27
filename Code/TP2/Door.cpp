#include "pch.h"
#include "Door.h"


Door::Door(int floor,Elevator elev)
{
	_floor = floor;
	_state_open = false;
	_elev = elev;
}


Door::Door()
{
	
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
	//ask the elevator if it is stoped or not
	if(elev)
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
