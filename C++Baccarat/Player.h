#pragma once

#include <vector>
#include "Card.h"

using namespace std;

class Player {

public: 
	vector<card> cards;
	void receiveWinnings();
	int getScore();
};