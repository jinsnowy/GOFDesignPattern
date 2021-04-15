#pragma once
#include "Decorator.h"

class BorderDecorator : public Decorator
{
public:
	BorderDecorator(VisualComponent* component, int borderWidth) : Decorator(component), _width(borderWidth)
	{}
	virtual void Draw()
	{
		Decorator::Draw();
		DrawBorder(_width);
	}
private:
	void DrawBorder(int);
	int _width;
};