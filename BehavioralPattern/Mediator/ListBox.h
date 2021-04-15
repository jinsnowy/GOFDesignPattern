#pragma once
#include "Widget.h"
#include "../Common/List.h"

// 구체적인 사용자 인터페이스
class ListBox : public Widget
{
public:
	ListBox(DialogDirector*);

	// 선택된 항목이 어떤 내용을 가지고 있는지 알려줍니다.
	virtual const char* GetSelection();
	// 모든 선택 가능 항목을 설정합니다.
	virtual void SetList(List<char*>* listItem);
	virtual void HandleMouse(MouseEvent& event);
};

