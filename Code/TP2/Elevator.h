#pragma once
#include <vector>

using namespace std;

class Elevator
{
public:
	Elevator(int level);
	void go_up();
	void go_down();
	void stop();
	void setDestination(int destination);
	void setCall(int levelcall);
	int getLevel();
	vector<int> getdestination();
	vector<int> getcall();

	~Elevator();
private:
	int _level;
	int _direction;
	vector<int> _destination;
	vector<int> _call;
};

