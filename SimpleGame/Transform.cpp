#include "Transform.h"

Transform::Transform(GameObject* gameObject)
{
	this->position = glm::vec2(0.f, 0.f);
	this->childCount = 0;
	this->gameObject = gameObject;
	this->children = std::vector<Transform*>();
}
