#include "Camera.h"
Camera::Camera(GameObject* gameObject) : Component(gameObject) {}

void Camera::Render()
{
	GL::window->clear();
	//Draw things here
	
	for (sf::Sprite* sprite : GL::sprites)
	{
		GL::window->draw(*sprite);
	}
	
	GL::window->display();
}
