#pragma once
#include "Rectangle.h"
#include "Circle.h"
#include "Image.h"
#include "Text.h"
#include "Align.h"
#include "WidgetTemplate.h"

class GraphicFactory
{
public:
	GraphicFactory();
	~GraphicFactory();
	// 팩토리 메서드를 이용
	virtual Rectangle* MakeRectangle(int w, int h);
	virtual Circle* MakeCircle(int radius);
	virtual Image* MakeImage(const char* file_name);
	virtual Text* MakeText(const char* text, int white_space);
};

Image* GraphicFactory::MakeImage(const char* file_name)
{
	return new Image(file_name);
}

Text* GraphicFactory::MakeText(const char* text, int white_space)
{
	return new Text(text, white_space);
}
