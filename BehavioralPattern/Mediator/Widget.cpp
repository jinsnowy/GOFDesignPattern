#include "Widget.h"
#include "DialogDirector.h"

Widget::Widget(DialogDirector*)
{
}

void Widget::Changed()
{
	// �ڽ��� ���� ������ �˸��ϴ�.
	_director->WidgetChanged(this);
}

void Widget::HandleMouse(MouseEvent& event)
{
	// ���콺 �Է¿� ���� ó���� �մϴ�.
}
