#pragma once
#include "Window.h"
#include "WindowImp.h"
#include "../Common/Point.h"

class IconWindow : public Window 
{
public:
	// ...
	// WindowImp ���� �޼���, DeviceXXX()�� ���� ���
	virtual void DrawRect(const Point& p1, const Point& p2)
	{
		WindowImp* imp = GetWindowImp();
		imp->DeviceRect(p1.X(), p1.Y(), p2.X(), p2.Y());
	}
	virtual void DrawContents()
	{
		WindowImp* imp = GetWindowImp();
		if (imp != 0)
		{
			imp->DeviceBitMap(_bitmapName, 0.0, 0.0);
		}
	}
	virtual void DrawText();
private:
	// IconWindow�� ���� ��Ʈ�� �̸�
	const char* _bitmapName;
};