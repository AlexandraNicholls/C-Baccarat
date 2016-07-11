#ifndef DECKCARDS_H
#define DECKCARD_H
#include "Card.h"
#include <cstdlib> //for random number generator
#include <ctime>   //for random number generator
#include <iomanip>

using namespace std;

const int CARDS_PER_DECK = 52;

class deckCards{
private:
	card *deck;
	int currentCard;
public:
	deckCards();
	void shuffle();
	card dealCard();
	void printDeck() const;
};

void deckCards::printDeck() const{
	for (int i = 0; i < CARDS_PER_DECK; i ++ ){
		cout << setw(10) << deck[i].print();
		//make new line afer 4 cards
		if ((i + 1) % 7 == 0)
			cout << endl;
	}
}

deckCards::deckCards(){
	string faces[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	string suit[] = { "H", "D", "C", "S" };
	deck = new card[CARDS_PER_DECK];
	currentCard = 0;
	for (int i = 0; i < CARDS_PER_DECK; i++){
		deck[i] = card(faces[i % 13], suit[i / 13]);
	}
}

void deckCards::shuffle(){
	currentCard = 0;
	for (int first = 0; first < CARDS_PER_DECK; first++){
		int second = (rand() + time(0)) % CARDS_PER_DECK;
		card temp = deck[first];
		deck[first] = deck[second];
		deck[second] = temp;
	}
}
card deckCards::dealCard(){
	if (currentCard >= CARDS_PER_DECK){
		shuffle();
	}
	else if (currentCard < CARDS_PER_DECK){
		return (deck[currentCard++]);
	}
	return (deck[0]);
}
#endif