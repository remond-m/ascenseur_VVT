#pragma once
class Door
{
public:
	Door();
	Door(int floor);
	bool isElevatorPresent(int elevator_floor);
	void waitBeforeClose(int delay);
	void openDoor();
	void closeDoor();
	bool isOpen();
	void allowDeparture();
	~Door();

private:
	int _floor;
	bool _state_open;
};




