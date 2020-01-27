#pragma once
class Systeme
{
public:
	Systeme();
	void sysPushDoorButton(Door door);
	void addElevatorCall(User caller);
	~Systeme();

private:
	Door _door1;
	Door _door2;
	Door _door3;
	Door _door4;
	Elevator _elevator;
};

