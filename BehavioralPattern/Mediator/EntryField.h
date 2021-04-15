#pragma once
#include "Widget.h"

class EntryField : public Widget
{
public:
	EntryField(DialogDirector*);

	// 해당 엔트리 내용을 가져옵니다.
	virtual const char* GetText();
	// 해당 엔트리 내용을 설정합니다.
	virtual void SetText(const char* text);
	virtual void HandleMouse(MouseEvent& event);
};

