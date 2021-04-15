#pragma once
#include "WindowImp.h"

class XWindowImp : public WindowImp
{
public:
	XWindowImp();
	// ... 
	virtual void DeviceRect(Coord x0, Coord x1, Coord y0, Coord y1)
	{
		int x = round(min(x0, x1));
		int y = round(min(y0, y1));
		int w = round(abs(x0 - x1));
		int h = round(abs(y0 - y1));
		XDrawRectangle(_dpy, _windid, _gc, x, y, w, h);
	}
	void XDrawRectangle(Display*, Drawable, GC, Coord, Coord, Coord, Coord);
private:
	// X 윈도우 플랫폼에 관한 고유 상태
	Display* _dpy;
	Drawable _windid;
	GC _gc;
};

