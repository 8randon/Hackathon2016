#include <SFML/Graphics.hpp>
#include "card.h"
#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;


class player
{
public:
	player();
	~player();

	friend class field;

private:
	card * mphand;
	card * mpdeck;

};

class field
{
public:
	field(card * nplayer, card * AI)
		: mplayer(), mAI()
	{}

	~field();

	void printboard();

	friend class player;

private:
	card * mplayer[7]; // player board vals
	card * mAI[7]; // AI board vals
};