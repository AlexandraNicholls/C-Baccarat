#include "DeckCards.h"

using namespace std;

int main(){

	deckCards deck;
	card currentCard;
	deck.printDeck();
	deck.shuffle();
	cout << endl << endl;
	deck.printDeck();
	deck.shuffle();
	cout << endl << endl;
	for (int i = 0; i < 52; i++){
		currentCard = deck.dealCard();
		cout<< currentCard.print() << endl;
	}
	system("PAUSE");
	return 0;

}