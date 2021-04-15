#pragma once
#include "Widget.h"
#include "../Common/List.h"

// ��ü���� ����� �������̽�
class ListBox : public Widget
{
public:
	ListBox(DialogDirector*);

	// ���õ� �׸��� � ������ ������ �ִ��� �˷��ݴϴ�.
	virtual const char* GetSelection();
	// ��� ���� ���� �׸��� �����մϴ�.
	virtual void SetList(List<char*>* listItem);
	virtual void HandleMouse(MouseEvent& event);
};

