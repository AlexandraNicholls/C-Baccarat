
#include "Player.h"
#include "Card.h"



int Player::getScore() {

	return cards[0].value;
}

void Player::getCard(Card c)
{
	cards.push_back(c);
}
void Player::printCard()
{
	int counter = 0;
	for (auto i = cards.begin(); i < cards.end(); i++)
	{
		cout<<cards[counter].print();
		
		counter++;
	}
}