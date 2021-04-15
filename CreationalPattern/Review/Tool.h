#pragma once
#include "Window.h"
#include "Graphic.h"

class Tool
{
public:
	Tool(const char*);
	void operation(Graphic*);
};