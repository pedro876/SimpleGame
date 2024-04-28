#pragma once

#include "Component.h"
#include "Transform.h"

class GameObject
{
public:
	Transform *transform;
private:
	int componentCount;
	Component *components[];
};

