#pragma once
class User
{
public:
	User(int level, bool direction, int destination, Door door);
	void call();
	void pushbutton(bool doorbutton);
	void pushDestination();
	void setDestination(int destination);
	void setlevel(int level);
	void setDirection(bool direction);
	~User();

private:
	int _level;
	bool _direction;
	int _destination;
	Door _door;
};


