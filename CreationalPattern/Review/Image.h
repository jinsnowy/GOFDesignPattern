#pragma once
#include "Graphic.h"
class Image : public Graphic
{
public:
	Image(const char*);
	virtual ~Image();
	virtual void Draw(Window*);
	virtual void SetCenter(int, int);
	virtual Extent BoundingBox();
protected:
	void LoadImage();
	void releaseImage();
private:
	char* _filename;
	unsigned char* _data = 0;
	int _w, _h;
};