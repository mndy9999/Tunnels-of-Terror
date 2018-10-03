#pragma once
#include "Room.h"
#include "Player.h"
#include <string>
#include <iostream>
using namespace std;
class GameEngine
{
	Room df, lb, mr, tr, bk, wr, gh, br, gr, dc, kt, ld, en, ib;
	int cost;
	Room currentRoom;
	Room *address;
public:
	GameEngine();
	void mapSetup();
	void printRoomInfo();
	void movePlayer();
	~GameEngine();
};

