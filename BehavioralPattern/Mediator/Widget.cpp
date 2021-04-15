#include "Widget.h"
#include "DialogDirector.h"

Widget::Widget(DialogDirector*)
{
}

void Widget::Changed()
{
	// 자신의 상태 변경을 알립니다.
	_director->WidgetChanged(this);
}

void Widget::HandleMouse(MouseEvent& event)
{
	// 마우스 입력에 대한 처리를 합니다.
}
