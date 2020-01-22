#include "pch.h"
#include "User.h"


User::User(int level, bool direction, int destination)
{
	_level = level;
	_direction = direction;
	_destination = destination;
}


User::~User()
{
}


void User::call()
{
	//appel fonction ascenseur avec level et direction
}

void User::pushbutton(bool doorbutton)
{
	if (doorbutton) {//Door.opendoor();
		//appel fonction porte ouverture 
	
	}else { //Door.closedoor()
		//appel fonction porte fermeture
	}
}

void User::pushDestination()
{
	//press destination button
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
