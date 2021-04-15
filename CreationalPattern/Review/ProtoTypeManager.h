#pragma once
#include "Graphic.h"
#include "string.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Image.h"
#include "Text.h"

class ProtoTypeManager
{
public:
	static ProtoTypeManager* Instance();
	Graphic* GetPrototype(const char*);
	void Init();
	void Release();

protected:
	ProtoTypeManager();

private:
	Circle* _p_circle = nullptr;
	Rectangle* _p_rect = nullptr;
	Text* _p_text = nullptr;
	static ProtoTypeManager* _instance;
};