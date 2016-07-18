#pragma once

#include "Card.h"
#include <cstdlib> //for random number generator
#include <ctime>   //for random number generator
#include <iomanip>

using namespace std;

const int CARDS_PER_DECK = 52;

class Deck {
private:
	Card *deck;
	int currentCard;
public:
	Deck();
	void shuffle();
	Card dealCard();
	void printDeck() const;
};