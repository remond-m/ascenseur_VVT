#include "pch.h"
#include "User.h"
#include "Door.h"
#include "Systeme.h"
#include "Elevator.h"

User::User(int level, int destination)
{

	_level = level;
	_call = false;
	_destination = destination;
}

void User::callElevator()
{
	_call = true;
}

void User::setDestination(int destination)
{
	_destination = destination;
}

void User::setlevel(int level)
{
	_level = level;
}

int User::getLevel()
{
	return _level;
}

User::~User()
{
}
