#pragma once
class User
{
public:
	User(int level, bool direction, int destination);
	void Call();
	void Pushbutton(bool doorbutton);
	void PushDestination();
	void SetDestination(int destination);
	void Setlevel(int level);
	void Enter();
	void Leave();
	~User();

private:
	int _level;
	bool _direction;
	int _destination;
};


