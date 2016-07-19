#pragma once

#include <vector>
#include "Card.h"

using namespace std;

class Player {

public: 
	int getScore();
	void getCard(Card c);
	void printCard();
private:
	vector<Card> cards = vector<Card>();
};

