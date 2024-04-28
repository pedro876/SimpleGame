#pragma once

#include "Component.h"
#include "Transform.h"
#include <string>
#include <vector>

class GameObject
{
public:
	std::string name;
	Transform *transform;

	GameObject(const std::string& name);
	template<typename TComponent> TComponent* AddComponent();
private:
	int componentCount;
	std::vector<Component*> components;
};

