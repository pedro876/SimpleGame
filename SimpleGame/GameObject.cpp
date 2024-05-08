#include "GameObject.h"

GameObject::GameObject(const std::string& name)
{
	this->name = name;
	this->componentCount = 0;
	this->components = std::vector<Component<void>*>();
	this->transform = AddComponent<Transform>();
}

