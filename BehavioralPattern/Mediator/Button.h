#pragma once
#include "Widget.h"
class Button : public Widget
{
public:
	Button(DialogDirector*);
	
	virtual void SetText(const char* text);
	virtual void HandleMouse(MouseEvent& event)
	{
		// 마우스 움직임에 따라 상호작용 구현
		Changed();
	}
	// ...
};