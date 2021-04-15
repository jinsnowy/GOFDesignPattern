#pragma once
class DialogDirector;

// 위젯에 대한 추상 클래스
class Widget
{
public:
	Widget(DialogDirector*);
	// 자신의 상태를 변경합니다.
	virtual void Changed();
	virtual void HandleMouse(class MouseEvent& event);
	// ...
private:
	// 자신을 감독하는 지시자를 가지고 있습니다.
	DialogDirector* _director;
};

