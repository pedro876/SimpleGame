#include "Renderer.h"

Renderer::Renderer(GameObject* gameObject) : Component(gameObject)
{
	GL::sprites.push_back(&(this->sprite));
}