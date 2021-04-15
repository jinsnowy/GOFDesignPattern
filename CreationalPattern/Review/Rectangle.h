#pragma once
#include "Graphic.h"

class Rectangle : public Graphic
{
public:
	Rectangle(int width, int height);
	virtual ~Rectangle();
	virtual void Draw(Window*);
	virtual void SetCenter(int, int);
	virtual Extent BoundingBox();
	virtual Rectangle* Clone() const { return new Rectangle(*this); }
private:
	int _width, _height;
};