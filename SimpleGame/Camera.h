#pragma once
#include "Component.h"
#include "GL.h"

class Camera : Component
{
public:
	Camera(GameObject* gameObject);

	void Render();

private:
};

