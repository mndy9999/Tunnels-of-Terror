#include "UCS.h"
#include <vector>


UCS::UCS()
{
}

string UCS::search() {
	roomArr[20] += g.getCurrentRoom().getRoomName();
	vector <int> dir = { g.getCurrentRoom().getMoveCost('n') , g.getCurrentRoom().getMoveCost('s') , g.getCurrentRoom().getMoveCost('e') , g.getCurrentRoom().getMoveCost('w') };	
	
	g.addCost(getCheapesRoute(dir));
	roomArr[20] += g.getCurrentRoom().getRoomName();
}

int UCS::getCheapesRoute(vector <int> dir) {
	int temp = 0;
	for (int i = 0; i < dir.size(); i++) {		
		if (dir[i] < dir[temp]) {
			temp = i;
		}
	}
	return temp;
}

UCS::~UCS()
{
}
