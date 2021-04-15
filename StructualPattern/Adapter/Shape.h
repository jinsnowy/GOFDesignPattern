#pragma once
#include "../Common/Point.h"
#include "Manipulator.h"
class Shape
{
public:
	Shape();
	// 왼쪽 아래와 오른쪽 위 좌표를 이용하여 사각형 경계를 구한다.
	virtual void BoundingBox(Point& bottomleft, Point& topRight) const;
	// Shape를 조작하는 Manipulator를 반환하는 팩토리 메서드
	virtual Manipulator* CreateManipulator() const;
};