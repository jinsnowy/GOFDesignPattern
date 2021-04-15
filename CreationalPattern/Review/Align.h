#pragma once
#include "Image.h"
#include "Text.h"
class TextAligned : public Text
{
private:
	int _mode;
public:
	TextAligned(const char* text, int wsp, int m);
	virtual ~TextAligned();
};

class ImageAligned : public Image
{
private:
	int _mode;
public:
	ImageAligned(const char* file, int m);
	virtual ~ImageAligned();
};

