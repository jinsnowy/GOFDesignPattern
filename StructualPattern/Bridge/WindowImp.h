#pragma once
#include "Point.h"

class WindowImp
{
public:
	// Window�� �־��� �÷��� ȯ�濡�� �����ϱ� ���� ���� ���� �Լ�
	virtual void ImpTop() = 0;
	virtual void ImpBottom() = 0;
	virtual void ImpSetExtent(const Point&) = 0;
	virtual void ImpSetOrigin(const Point&) = 0;
	virtual void DeviceRect(Coord, Coord, Coord, Coord) = 0;
	virtual void DeviceText(const char*, Coord, Coord) = 0;
	virtual void DeviceBitMap(const char*, Coord, Coord) = 0;
protected:
	WindowImp();
};

