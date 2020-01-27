#include "pch.h"
#include "Elevator.h"
#include <vector>

using namespace std;

Elevator::Elevator()
{
	_level = 0;
	_direction = 0;
	vector<int> destination(0);
	_destination = destination;
	_ call = vector<int> (0);
}

Elevator::Elevator(int level)
{
	_level = level;
	_direction = 0;
	vector<int> destination(0);
	_destination = destination;
	vector<int> call(0);
	_call=call;
	
}

void Elevator::go_up()
{
	_level++;

	for (int i = 0; i <= _call.end; i++)
	{
		if (_call[i] == _level)
		{
			_call.erase(_call.begin()+i);
		}
	}
	for (int i = 0; i <= _destination.end; i++)
	{
		if (_destination[i] == _level)
		{
			_destination.erase(_destination.begin() + i);
		}
	}
}



void Elevator::go_down()
{
	_level--;
	for (int i = 0; i <= _call.end; i++)
	{
		if (_call[i] == _level)
		{
			_call.erase(_call.begin() + i);
		}
	}
	for (int i = 0; i <= _destination.end; i++)
	{
		if (_destination[i] == _level)
		{
			_destination.erase(_destination.begin() + i);
		}
	}
}

void Elevator::stop()
{
	_direction=0;
}

void Elevator::setDestination(int destination)
{
	_destination.insert(_destination.end(), destination);
	if (_level < _destination[_destination.begin()])
	{
		_direction = -1;
	}
	else if (_level > _destination[_destination.begin()])
	{
		_direction = 1;
	}
	else {
		_direction = 0;
	}
}

void Elevator::setCall(int levelcall)
{
	_call.insert(_call.end(), levelcall);
	if (_direction == 0)
	{
		
		for (int i = 0; i <= _call.end; i++)
		{
			if (_level < _call[i])
			{
				_direction = 1;
				break;
			}
			else
			{
				_direction = -1;
			}
		}
		for (int i = 0; i <= _call.end; i++)
		{
			if (_level == _call[i])
			{
				_direction = 0;
			}

		}
	}
	
}



int Elevator::getLevel()
{
	return _level;
}

int Elevator::getdestination()
{
	return _destination[0];
}

vector<int> Elevator::getcall()
{
	return _call;
}


Elevator::~Elevator()
{
}
