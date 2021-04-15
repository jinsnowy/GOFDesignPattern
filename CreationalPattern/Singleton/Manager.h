#pragma once
#include "Macro.h"
class Manager
{
	DECLARE_SINGLE(Manager)
private:
	bool Init();
	void Input(float dt);
	void Update(float dt);
	void Draw(float dt);
};