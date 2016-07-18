#include "Card.h"

Card::Card(string cardFace, string cardSuit, int cardValue) {
	face = cardFace;
	suit = cardSuit;
	value = cardValue;
}

string Card::print() const {
	return (face + " of " + suit);
}


Card::Card() {

}