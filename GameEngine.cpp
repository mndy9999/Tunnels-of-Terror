#include "GameEngine.h"



GameEngine::GameEngine():df("Nothing"), lb("Library"), mr("Misterious Room"), 
						tr("Trolls Room"), bk("Barracks"), wr("Well Room"), 
						gh("Great Hall"), br("Bottle Room"), gr("Guard Room"), 
						dc("Damp Cavern"), kt("Kitchen"), ld("Larder"), 
						en("Entrance"), ib("Ice Box")
{
	address = &en;
	cost = 0;
}

void GameEngine::mapSetup() {
	//possible directions and associated costs (N, S, E, W)
	lb.setDirections(&df, &tr, &mr, &df);
	lb.setMoveCost(0, 1, 3, 0);
	mr.setDirections(&lb, &gh, &df, &tr);
	mr.setMoveCost(3, 4, 0, 3);
	tr.setDirections(&lb, &gh, &mr, &df);
	tr.setMoveCost(1, 2, 3, 0);
	bk.setDirections(&df, &gr, &df, &df);
	bk.setMoveCost(0, 2, 0, 0);
	wr.setDirections(&df, &dc, &ld, &df);
	wr.setMoveCost(0, 1, 10, 0);
	gh.setDirections(&br, &kt, &mr, &tr);
	gh.setMoveCost(2, 1, 4, 2);
	br.setDirections(&df, &ld, &df, &gh);
	br.setMoveCost(0, 0, 0, 2);
	gr.setDirections(&bk, &df, &dc, &df);
	gr.setMoveCost(2, 0, 1, 0);
	dc.setDirections(&wr, &en, &kt, &gr);
	dc.setMoveCost(1, 2, 2, 1);
	kt.setDirections(&gh, &ib, &ld, &dc);
	kt.setMoveCost(1, 2, 1, 2);
	ld.setDirections(&br, &wr, &df, &kt);
	ld.setMoveCost(0, 10, 0, 1);
	en.setDirections(&dc, &df, &df, &df);
	en.setMoveCost(2, 0, 0, 0);
	ib.setDirections(&kt, &df, &df, &df);
	ib.setMoveCost(10, 0, 0, 0);

}

void GameEngine::printRoomInfo() {
	currentRoom = *address;
	cout << currentRoom.getRoomName() << endl;
	cout << "------------------" << endl;
	currentRoom.printVecinity();
	cout << endl;
}

void GameEngine::movePlayer() {
	char c;
	cin >> c;

	while (c != 'n' && c != 's' && c != 'e' && c != 'w')
	{
		cout << "No such direction!" << endl;
		cin >> c;
	}
	if (currentRoom.getDirection(c) != &df) {
		address = currentRoom.getDirection(c);
		cost += currentRoom.getMoveCost(c);
		cout << "Cost to date: " << cost << endl << endl;
	}
}

//TO DO: 
//-getCurrentRoom function to check if the destination is reached.

GameEngine::~GameEngine()
{
}
