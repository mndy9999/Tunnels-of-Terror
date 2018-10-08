#pragma once
#include "GameEngine.h"
#include <vector>
class UCS
{
private:
	GameEngine g;
	Room r;
	string roomArr[];
public:
	UCS();
	string search();
	int getCheapesRoute(vector<int> dir);
	~UCS();
};

