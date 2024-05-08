#pragma once

#include "Component.h"
#include "Transform.h"
#include <string>
#include <vector>

//template<class Derived>
//class Component;

class GameObject
{
public:
	std::string name;
	Transform *transform;

	GameObject(const std::string& name);

	template<typename Derived> Derived* AddComponent() {
		Derived* instance = Component<Derived>::Instantiate(this);
		this->components.push_back((Component<void>*)instance);
		this->componentCount++;
		return instance;
	}

	template<typename Derived> Derived* GetComponent() {
		for (Component* component : components)
		{
			Derived* typedComponent = dynamic_cast<Derived*>(component);
			if (typedComponent != nullptr)
			{
				return typedComponent;
			}
		}
		return nullptr;
	}

private:
	int componentCount;
	std::vector<Component<void>*> components;
};
