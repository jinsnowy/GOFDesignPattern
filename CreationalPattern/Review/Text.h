#pragma once
#include "Graphic.h"
class Text : public Graphic
{
public:
	Text(const char*, int);
	virtual ~Text();
	virtual void Draw(Window*);
	virtual void SetCenter(int, int);
	virtual Extent BoundingBox();
private:
	int _white_space_size;
	const char* _text;
};