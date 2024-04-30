#include "GL.h"

sf::RenderWindow* GL::window = nullptr;
std::vector<sf::Sprite*> GL::sprites = std::vector<sf::Sprite*>();

void GL::CreateWindow()
{
	GL::window = new sf::RenderWindow(sf::VideoMode(200, 200), "SFML works!");
	GL::window->setFramerateLimit(60);
}
