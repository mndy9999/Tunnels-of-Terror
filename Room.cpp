#include "Room.h"
#include <iostream>
#include <string>
using namespace std;

Room::Room(){}

Room::Room(string n)
{
	name = n;

}

void Room::setDirections(Room *n, Room *s, Room *e, Room *w) {
	north = n;
	south = s;
	east = e;
	west = w;
}

void Room::setMoveCost(int costN, int costS, int costE, int costW) {
	m_costN = costN;
	m_costS = costS;
	m_costE = costE;
	m_costW = costW;
}

Room* Room::getDirection(char dir) {
	if (dir == 'n')
	{
		return north;
	}
	else if (dir == 's') {
		return south;
	}
	else if (dir == 'e') {
		return east;
	}
	else if (dir == 'w') {
		return west;
	}
	else {
		cout << "Error: wrong direction" << endl;
	}
}


int Room::getMoveCost(char dir) {
	if (dir == 'n')
	{
		return m_costN;
	}
	else if (dir == 's') {
		return m_costS;
	}
	else if (dir == 'e') {
		return m_costE;
	}
	else if (dir == 'w') {
		return m_costW;
	}
	else {
		cout << "Error: wrong direction" << endl;
	}
}

void Room::printVecinity() {
	cout << "north: " << north->name;
	cout << endl << "south: " << south->name;
	cout << endl << "east: " << east->name;
	cout << endl << "west: " << west->name;
}

string Room::getRoomName() {
	return name;
}

Room::~Room()
{
}
