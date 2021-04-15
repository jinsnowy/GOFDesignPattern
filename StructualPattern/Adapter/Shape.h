#pragma once
#include "../Common/Point.h"
#include "Manipulator.h"
class Shape
{
public:
	Shape();
	// ���� �Ʒ��� ������ �� ��ǥ�� �̿��Ͽ� �簢�� ��踦 ���Ѵ�.
	virtual void BoundingBox(Point& bottomleft, Point& topRight) const;
	// Shape�� �����ϴ� Manipulator�� ��ȯ�ϴ� ���丮 �޼���
	virtual Manipulator* CreateManipulator() const;
};