#pragma once
#include "Graphic.h"
class Circle : public Graphic
{
public:
	Circle(int r);
	virtual ~Circle();
	virtual void Draw(Window*);
	virtual void SetCenter(int, int);
	virtual Extent BoundingBox();
	Circle* Clone() const { return new Circle(*this);  }
private:
	int radius;
};

