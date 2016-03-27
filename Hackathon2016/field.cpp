#include "field.h"

void field::printboard()
{
	sf::RenderWindow window(sf::VideoMode(1000, 500), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	sf::Texture texture;
	sf::Sprite sprite;
	sf::Image tex;

	int placex = 0, placey = 0, i = 0;



	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		if (i < 7)
		{
			window.clear();

			if (!texture.loadFromFile("cardback.png", sf::IntRect(0, 0, 68, 92)))
			{

			}

			sprite.setTexture(texture);

			while (mAI[i])
			{
				sprite.move(sf::Vector2f(78, 0));
				window.draw(sprite);

				placex += 30;
				i++;
			}

		/*	i = 0;

			while (i < 7)
			{
				tex.loadFromFile("BotTile.png");
				texture.update(tex);
				sprite.setTexture(texture);

				sprite.move(sf::Vector2f(78, 116));
				window.draw(sprite);

				placex += 30;
				i++;

			}*/



			window.display();
		}
	}
}