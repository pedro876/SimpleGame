#include <SFML/Graphics.hpp> //https://www.sfml-dev.org/tutorials/2.6/start-vc.php
#include "globalInclude.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	window.setFramerateLimit(60);
	sf::Clock clock;

	sf::Texture texture;
	texture.loadFromFile("../Assets/kenney_racing-pack/PNG/Cars/car_blue_1.png");

	sf::Sprite sprite;
	sprite.setTexture(texture);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		sf::Time elapsed = clock.getElapsedTime();
		float deltaTime = elapsed.asSeconds();
		clock.restart();

		window.clear();
		window.draw(sprite);

		window.display();
	}

	return 0;
}