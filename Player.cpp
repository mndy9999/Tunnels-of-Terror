#include "Player.h"

Player::Player() {

}

Room Player::getCurrentLocation() {
	return currentLocation;
}

void Player::setCurrentLocation(Room room) {
	currentLocation = room;
}


Player::~Player()
{
}
