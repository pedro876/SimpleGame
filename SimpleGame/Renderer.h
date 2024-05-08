#pragma once

#include "Component.h"
#include "GL.h"

class Renderer : Component<Renderer>
{
public:
	sf::Sprite sprite;
	Renderer();
private:
};

