#pragma once
#include <string>
using namespace std;

class Room
{
private:
	string name =" ";
	Room *north, *south, *east, *west;
	int m_costN, m_costS, m_costE, m_costW;
public:
	Room();
	Room(string n);	
	void setDirections(Room *n, Room *s, Room *e, Room *w);
	void setMoveCost(int, int, int, int);
	Room* getDirection(char);
	int getMoveCost(char);
	void printVecinity();
	string getRoomName();
	~Room();
};

