#pragma once

#include "Component.h"
#include "Transform.h"
#include <string>
#include <vector>

class Component;

class GameObject
{
public:
	std::string name;
	Transform *transform;

	GameObject(const std::string& name);

	template<typename TComponent> TComponent* AddComponent() {
		TComponent* instance = new TComponent(this);
		this->components.push_back((Component*)instance);
		this->componentCount++;
		return instance;
	}

	template<typename TComponent> TComponent* GetComponent() {
		for (Component* component : components)
		{
			TComponent* typedComponent = dynamic_cast<TComponent*>(component);
			if (typedComponent != nullptr)
			{
				return typedComponent;
			}
		}
		return nullptr;
	}

private:
	int componentCount;
	std::vector<Component*> components;
};
