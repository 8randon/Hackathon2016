#include "card.h"


card::~card()
{

}

string card::getstring()
{
	return mimage;
}

int card::getnum()
{
	return mhealth;
}

int card::effects()
{
	int effect = 0;

	if (misSpell > 0)
	{
		switch (misSpell)
		{
		case 1:

			break;

		case 2:

			break;

		case 3:

			break;

		default:
			break;
		}
	}

	return effect;
}