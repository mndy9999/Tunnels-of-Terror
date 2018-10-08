#include <iostream>
#include <string>
#include <conio.h>
#include "Room.h"
#include "Player.h"
#include "GameEngine.h"

using namespace std;

int main() {
	GameEngine g;
	g.mapSetup();
	
	bool flag = true;
	while (g.getCurrentRoom().getRoomName() != g.getDestination().getRoomName()) {
		g.printRoomInfo();
		g.movePlayer();
		
	}
	cout << "Total cost: " << g.GetTotalCost();
	getchar();
	getchar();
	return 0;

}