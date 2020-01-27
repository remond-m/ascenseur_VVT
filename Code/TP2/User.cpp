#include "pch.h"
#include "User.h"
#include "Door.h"
#include "Elevator.h"

User::User(int level, bool direction, int destination, Door door,Elevator elev)
{
	_level = level;
	_direction = direction;
	_destination = destination;
	_door = door;
	_elev = elev;
}


User::~User()
{
}


void User::call()
{
	//appel fonction ascenseur avec level et direction
	_elev.setCall(_level);
}

void User::pushbutton(bool doorbutton)
{
	if (doorbutton) {
		_door.openDoor();
		//appel fonction porte ouverture 
	
	}else { 
		_door.closeDoor();
		//appel fonction porte fermeture
	}
}

void User::pushDestination()
{
	setDestination(_destination);
}

void User::setDestination(int destination)
{
	_destination = destination;
}

void User::setlevel(int level)
{
	_level = level;
}

void User::setDirection(bool direction)
{
	_direction = direction;
}
