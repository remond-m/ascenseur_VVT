#include "pch.h"
#include "Systeme.h"
#include "Door.h"
#include "Elevator.h"
#include "User.h"


Systeme::Systeme()
{
	_door1 = Door(0);
	_door2 = Door(1);
	_door3 = Door(2);
	_door4 = Door(3);
	_elevator = Elevator();
}

void Systeme::sysPushDoorButton(Door door)
{
	/*if (door.isElevatorPresent(_elevator.getFloor()) && (_elevator.getDirection() == 0)) {
		door.openDoor();
		door.waitBeforeClose(5);
		door.closeDoor();
	}*/
}

void Systeme::addElevatorCall(User caller)
{
	//_elevator.setCall(caller.getLevel());
}


Systeme::~Systeme()
{
}
