#pragma once
#include "Widget.h"

class EntryField : public Widget
{
public:
	EntryField(DialogDirector*);

	// �ش� ��Ʈ�� ������ �����ɴϴ�.
	virtual const char* GetText();
	// �ش� ��Ʈ�� ������ �����մϴ�.
	virtual void SetText(const char* text);
	virtual void HandleMouse(MouseEvent& event);
};

