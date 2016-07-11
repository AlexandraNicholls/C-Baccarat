#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>

using namespace std;

class card{

public:
	card(string cardFace, string cardsuit); //constructor
	string print() const;
	card(); // default constructor

private:
	string face;
	string suit;

};

card::card(){

}
card::card(string cardFace, string cardSuit){
	face = cardFace;
	suit = cardSuit;
}
string card::print() const{
	return (face + " of " + suit);
}
#endif