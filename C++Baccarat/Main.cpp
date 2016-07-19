#include "Deck.h"
#include <iostream>
#include "Player.h"

using namespace std;
int chipsA = 500;
int bet;
int player;
Deck dc = Deck();
Player p1 = Player();
Player p2 = Player();


void dealCard()
{
	p1.getCard(dc.dealCard());
	p2.getCard(dc.dealCard());
	

	cout << "Player 1 Cards" << endl;
	cout << "---------" << endl;
	p1.printCard();
	cout << endl;
	cout << "Player2 Cards" << endl;
	cout << "---------" << endl;
	p2.printCard();
	cout << endl;
	

 }
void getBet()
{
	while (true)
	{
		cout << "You have " << chipsA << "." << endl;
		cout << "Enter your bet or press 0 to quit" << endl;

		cin >> bet;
	 if (bet == 0)
		{
			exit(EXIT_SUCCESS);
		}
		else if (bet<1 || bet>chipsA)
		{
			cout << "Your bet must be between 1 and " << chipsA << endl;
			continue;
		}
		
		else
		{
			break;
		}
		
	}

}
void getPlayer()
{
	while (true)
	{

		cout << "Do want to bet on player 1 or player 2?" << endl;
		cout << "enter 1 for player 1 or enter 2 for player 2" << endl;

		cin >> player;
		//cout << player;
		if (player == 1 || player == 2)
		{
			
			break;
		}
		else
		{
			cout << "please enter 1 or 2" << endl;
			continue;
		}
	}
	

	
}
void checkWinner()
{
	if (9-p1.getScore()==9-p2.getScore())
	{
		return;
	}
	
	if (9 - p1.getScore() < 9 - p2.getScore())
	{
		cout << "Player 1 wins" << endl;
		if (player == 1)
		{
			chipsA += bet;
		}
		else
		{
			chipsA -= bet;
		}
	}
	if (9 - p1.getScore() > 9 - p2.getScore())
	{
		cout << "Player 2 wins" << endl;
		if (player == 2)
		{
			chipsA += bet;
		}
		else
		{
			chipsA -= bet;
		}
	}
	
}
	 
int main(){
	int cards = 0;
	while (true) {
		p1 = Player();
		p2 = Player();
		int yesno;
		getBet();
		getPlayer();
		dealCard();
		checkWinner();
		if (chipsA <= 0)
		{
			cout << "You have no more money" << endl;
			break;
		}
		if (cards == 51)
		{
			cout << "you have played through all the cards" << endl;
			break;
		}
		
		cards += 2;
	}
	
	
	

	

	
	system("PAUSE");
	return 0;

}
