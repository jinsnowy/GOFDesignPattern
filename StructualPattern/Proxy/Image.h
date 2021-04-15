#pragma once
#include "../Common/Point.h"
#include "Graphic.h"

class Image : public Graphic
{
public:
	Image(const char* file);
	virtual ~Image();

	virtual void Draw(const Point& at);
	virtual void HandleMouse(Event& event);

	virtual const Point& GetExtent();
	virtual void Load(istream& from);
	virtual void Save(ostream& to);
private:
	//...
};