#pragma once

#include <SFML/Graphics.hpp> //https://www.sfml-dev.org/tutorials/2.6/start-vc.php
#include <vector>

class GL
{
public:
	static sf::RenderWindow *window;
	static std::vector<sf::Sprite*> sprites;

	static void CreateWindow();
private:

};
