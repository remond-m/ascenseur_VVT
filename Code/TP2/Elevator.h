#pragma once
#include <vector>

using namespace std;

class Elevator
{
public:
	Elevator();
	void goup();
	void godown();
	void stop();
	~Elevator();
private:
	int level;
	int direction;
	vector<int> destination;
	vector<int> callelevator;
};

