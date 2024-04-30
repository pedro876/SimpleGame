#pragma once

#include "Component.h"
#include <glm/vec2.hpp>
#include <vector>

class Transform : Component
{
public:
	int childCount;
	glm::vec2 position;
	std::vector<Transform*> children;

	Transform(GameObject* gameObject);
private:
};

