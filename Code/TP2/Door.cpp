#include "pch.h"
#include "Door.h"
#include <time.h>

Door::Door()
{
	_floor = 0;
	_state_open = false;
}

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
	time_t start_time = 0;
	time_t current_time = 0;

	start_time = time(NULL);
	while (current_time - start_time + 1 <= delay) {
		current_time = time(NULL);
	}
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

bool Door::isOpen()
{
	return _state_open;
}

Door::~Door()
{
}
