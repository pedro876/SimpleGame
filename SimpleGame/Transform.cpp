#include "Transform.h"

Transform::Transform(GameObject* gameObject) : Component(gameObject)
{
	this->position = glm::vec2(0.f, 0.f);
	this->childCount = 0;
	this->children = std::vector<Transform*>();
}
