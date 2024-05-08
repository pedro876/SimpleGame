#pragma once
#include "vector"

class GameObject;

template <class Derived>
class Component
{
public:
	static std::vector<Derived> instances;

	GameObject* gameObject;
	static Derived* Instantiate(GameObject* gameObject) {
		instances.emplace_back();
		Derived* instance = &instances.back();
		instance->gameObject = gameObject;
		return instance;
	}
};

