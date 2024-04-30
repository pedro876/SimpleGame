#pragma once

class GameObject;

class Component
{
public:
	GameObject* gameObject;

	Component(GameObject* gameObject);
};

