#pragma once
#include "Widget.h"
class Button : public Widget
{
public:
	Button(DialogDirector*);
	
	virtual void SetText(const char* text);
	virtual void HandleMouse(MouseEvent& event)
	{
		// ���콺 �����ӿ� ���� ��ȣ�ۿ� ����
		Changed();
	}
	// ...
};