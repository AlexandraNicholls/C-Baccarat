#include "Deck.h"

void Deck::printDeck() const {
	for (int i = 0; i < CARDS_PER_DECK; i++) {
		cout << setw(10) << deck[i].print();
		//make new line afer 4 cards
		if ((i + 1) % 7 == 0)
			cout << endl;
	}
}

Deck::Deck() {
	string faces[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	int values[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 0, 0, 0 };
	string suit[] = { "H", "D", "C", "S" };
	deck = new Card[CARDS_PER_DECK];
	currentCard = 0;
	for (int i = 0; i < CARDS_PER_DECK; i++) {
		deck[i] = Card(faces[i % 13], suit[i / 13], values[i % 13]);
	}
}

void Deck::shuffle() {
	currentCard = 0;
	for (int first = 0; first < CARDS_PER_DECK; first++) {
		int second = (rand() + time(0)) % CARDS_PER_DECK;
		Card temp = deck[first];
		deck[first] = deck[second];
		deck[second] = temp;
	}
}
Card Deck::dealCard() {
	if (currentCard >= CARDS_PER_DECK) {
		shuffle();
	}
	else if (currentCard < CARDS_PER_DECK) {
		return (deck[currentCard++]);
	}
	return (deck[0]);
}