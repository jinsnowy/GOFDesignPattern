#pragma once
#include "Window.h"

class ApplicationWindow : public Window {
public:
	//...
	// ������ ������ ��Ÿ��
	virtual void DrawContents() {
		GetView()->DrawOn(this);
	}
};
