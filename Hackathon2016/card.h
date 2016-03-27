#pragma once

#include <SFML/Graphics.hpp>

#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class card
{
public:
	card(int isSpell = 0, int health = 0, int power = 0, int cost = 0, string image = "")
		: misSpell(isSpell), mhealth(health), mpower(power), mcost(cost), mimage(image)
	{}
	~card();

	string getstring();
	int getnum();

	int effects(); // if card is spell
private:
	int misSpell;
	int mhealth;
	int mpower;
	int mcost;
	string mimage;
};