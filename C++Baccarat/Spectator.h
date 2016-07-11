#pragma once

#include <vector>
#include "Card.h"

using namespace std;

class Spectator {

public:
	int chips;
	int placeBid();
	void receiveWinnings();
};