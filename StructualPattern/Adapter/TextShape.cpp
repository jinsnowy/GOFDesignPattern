#include "TextShape.h"

//TextShape::TextShape()
//{
//}
//// TextView�� GetOrigin, GetExtent �޼��带 �̿��Ͽ� BoundingBox �޼��带 ����
//void TextShape::BoundingBox(Point& bottomLeft, Point& topRight) const
//{
//    Coord bottom, left, width, height;
//
//    GetOrigin(bottom, left);
//    GetExtent(width, height);
//
//    bottomLeft = Point(bottom, left);
//    topRight = Point(bottom + height, left + width);
//}
//// TextView ������ �״�� �̿�
//bool TextShape::IsEmpty() const
//{
//    return TextView::IsEmpty();
//}
//// Shape�� ��ӹ��� TextView���� ���� �������̽�
//Manipulator* TextShape::CreateManipulator() const
//{
//    return new TextManipulator(this);
//}
//

// ���� �޼��忡�� TextView �ν��Ͻ��� �̿��Ͽ� ������ ȣ��
TextShape::TextShape(TextView* text)
{
	_text = text;
}

void TextShape::BoundingBox(Point& bottomLeft, Point& topRight) const
{
	Coord bottom, left, width, height;

	_text->GetOrigin(bottom, left);
	_text->GetExtent(width, height);

	bottomLeft = Point(bottom, left);
	topRight = Point(bottom + height, left + width);
}

bool TextShape::IsEmpty() const
{
	return _text->IsEmpty();
}
// Ŭ���� �����ڿ� �����ϰ� �����Ѵ�.
Manipulator* TextShape::CreateManipulator() const
{
	return new TextManipulator(this);
}
