#pragma once
#include "Window.h"
class Extent;
class Graphic
{
public:
	Graphic();
	virtual ~Graphic() = 0;
	virtual void Draw(Window*) = 0;
	virtual void SetCenter(int, int) = 0;
	virtual Extent BoundingBox() = 0;
	virtual Graphic* Clone() const;
private:
	int _center_x, _center_y;
};