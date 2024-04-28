#include "GameObject.h"

GameObject::GameObject(const std::string& name)
{
	this->name = name;
	this->componentCount = 0;
	this->components = std::vector<Component*>();
	this->transform = AddComponent<Transform>();
}

template<typename TComponent> TComponent* GameObject::AddComponent()
{
	TComponent* instance = new TComponent(this);
	this->components.push_back((Component*)instance);
	this->componentCount++;
	return instance;
}

