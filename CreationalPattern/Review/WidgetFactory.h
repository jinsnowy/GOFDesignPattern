#pragma once
#include "GraphicFactory.h"

class WidgetGraphicFactory : public GraphicFactory
{
private:
	int _mode;
public:
	WidgetGraphicFactory(int m);
	~WidgetGraphicFactory();
	virtual Image* MakeImage(const char* file_name) override;
	virtual Text* MakeText(const char* text, int white_space) override;
};

Image* WidgetGraphicFactory::MakeImage(const char* file_name)
{
	return new ImageAligned(file_name, _mode);
}

Text* WidgetGraphicFactory::MakeText(const char* text, int white_space)
{
	return new TextAligned(text, white_space, _mode);
}