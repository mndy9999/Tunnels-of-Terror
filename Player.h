#pragma once
#include "Room.h"
class Player
{
	Room currentLocation;
public:
	Player();
	void setCurrentLocation(Room);
	Room getCurrentLocation();
	~Player();
};

