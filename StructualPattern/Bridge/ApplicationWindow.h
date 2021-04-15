#pragma once
#include "Window.h"

class ApplicationWindow : public Window {
public:
	//...
	// 윈도우 내용을 나타냄
	virtual void DrawContents() {
		GetView()->DrawOn(this);
	}
};
