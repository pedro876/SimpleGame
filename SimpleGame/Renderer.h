#pragma once

#include "Component.h"
#include "GL.h"

class Renderer : Component
{
public:
	sf::Sprite sprite;
	Renderer(GameObject* gameObject);
private:
};

