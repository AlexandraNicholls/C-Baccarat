#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>

using namespace std;

class card{

public:
	card(string cardFace, string cardsuit, int value); //constructor
	string print() const;
	card(); // default constructor

private:
	string face;
	string suit;
	int value;
};

card::card(){

}
card::card(string cardFace, string cardSuit, int cardValue){
	face = cardFace;
	suit = cardSuit;
	value = cardValue;
}
string card::print() const{
	return (face + " of " + suit);
}
#endif