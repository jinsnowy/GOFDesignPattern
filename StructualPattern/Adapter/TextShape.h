#pragma once
#include "Shape.h"
#include "../Common/TextView.h"

class TextShape : public Shape
{
public:
	TextShape(TextView* text);

	virtual void BoundingBox(Point& bottomLeft, Point& topRight) const;
	virtual bool IsEmpty() const;
	virtual Manipulator* CreateManipulator() const;

private:
	// TextView �ν��Ͻ��� �����ϱ����� ������
	TextView* _text;
 };