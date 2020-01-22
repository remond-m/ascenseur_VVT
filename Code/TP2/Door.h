#pragma once
class Door
{
public:
	Door(int floor);
	bool isElevatorPresent(int elevator_floor);
	void waitBeforeClose(int delay);
	void openDoor();
	void closeDoor();
	void allowDeparture();
	~Door();

private:
	int _floor;
	bool _state_open;
};




