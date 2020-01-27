#pragma once
class User
{
public:
	User(int level, int destination);
	int getLevel();
	void callElevator();
	void setDestination(int destination);
	void setlevel(int level);
	~User();

private:
	int _level;
	bool _call;
	int _destination;
};


