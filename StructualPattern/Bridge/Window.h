#pragma once
#include "View.h"
#include "Point.h"
#include "WindowImp.h"
class Window 
{
public:
	Window(View* contents);

	// Window�� ���� ó���ϴ� �޼���
	virtual void DrawContents();
	virtual void Open();
	virtual void Close();
	virtual void Iconfiy();
	virtual void Deiconfiy();

	// ���� Ŭ������ �����ϴ� �޼���
	virtual void SetOrigin(const Point& at);
	virtual void SetExtent(const Point& extent);
	virtual void Raise();
	virtual void Lower();

	virtual void DrawLine(const Point&, const Point&);
	virtual void DrawRect(const Point&, const Point&);
	virtual void DrawPolygon(const Point[], int n);
	virtual void DrawText(const char*, const Point&);
protected:
	WindowImp* GetWindowImp()
	{
		// �߻� ���丮�� �̿��� WindowImp ����
		if (_imp == 0)
		{
			// �߻� ���丮�� ����ü�� ������
			_imp = WindowSystemFactory::Instance()->MakeWindowImp();
		}
		return _imp;
	}
	View* GetView();
private:
	WindowImp* _imp;
	View* _contents;
};

