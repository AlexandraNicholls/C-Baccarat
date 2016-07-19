#pragma once

#include <string>
#include <iostream>

using namespace std;

class Card{

public:
	Card(string cardFace, string cardsuit, int value); //constructor
	string print() const;
	Card(); // default constructor
	int value;

private:
	string face;
	string suit;
	
};

