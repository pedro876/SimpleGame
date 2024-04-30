#include "globalInclude.h"

int main()
{
	
	sf::Clock clock;
	
	sf::Texture texture;
	texture.loadFromFile("Assets/kenney_racing-pack/PNG/Cars/car_blue_1.png");
	
	GameObject* car = new GameObject("Car");
	Renderer* carRenderer = car->AddComponent<Renderer>();
	carRenderer->sprite.setTexture(texture);
	
	Camera* camera = (new GameObject("Camera"))->AddComponent<Camera>();

	GL::CreateWindow();
	while (GL::window->isOpen()) {
		sf::Event event;
		while (GL::window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				GL::window->close();
			}
		}
	
		sf::Time elapsed = clock.getElapsedTime();
		float deltaTime = elapsed.asSeconds();
		clock.restart();
	
		camera->Render();
	}

	return 0;
}