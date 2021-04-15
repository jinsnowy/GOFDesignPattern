#pragma once
#include "Decorator.h"

class ScrollDecorator : public Decorator
{
public:
	ScrollDecorator(VisualComponent * component, int scrollPos) : Decorator(component), _scrollPos(scrollPos){}

	virtual void Draw()
	{
		Decorator::Draw();
		ScrollTo(_scrollPos);
	}
private:
	void ScrollTo(int);
	int _scrollPos;
};

