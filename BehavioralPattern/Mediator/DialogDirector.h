#pragma once

// 지시자 (Director)에 대한 추상 클래스 입니다.
class DialogDirector
{
public:
	virtual ~DialogDirector();

	// 다이얼로그를 표시합니다.
	virtual void ShowDialog();
	// 어떤 위젯이 변경된 사실을 알림 받습니다.
	virtual void WidgetChanged(class Widget*) = 0;
};