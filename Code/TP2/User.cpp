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


void User::Call()
{
	//appel fonction ascenseur avec level et direction
}

void User::Pushbutton(bool doorbutton)
{
	if (doorbutton) {//appel fonction porte ouverture
	
	}else { //appel fonction porte fermeture
	}
}

void User::PushDestination()
{
	//press destination button
}