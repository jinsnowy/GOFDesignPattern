#pragma once
#include "View.h"
#include "Point.h"
#include "WindowImp.h"
class Window 
{
public:
	Window(View* contents);

	// Window가 직접 처리하는 메서드
	virtual void DrawContents();
	virtual void Open();
	virtual void Close();
	virtual void Iconfiy();
	virtual void Deiconfiy();

	// 구현 클래스에 위임하는 메서드
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
		// 추상 팩토리를 이용한 WindowImp 생산
		if (_imp == 0)
		{
			// 추상 팩토리는 단일체로 구현됨
			_imp = WindowSystemFactory::Instance()->MakeWindowImp();
		}
		return _imp;
	}
	View* GetView();
private:
	WindowImp* _imp;
	View* _contents;
};

