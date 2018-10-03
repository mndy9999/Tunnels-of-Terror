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
	while (flag) {
		g.printRoomInfo();
		g.movePlayer();
	}

	getchar();
	return 0;

}