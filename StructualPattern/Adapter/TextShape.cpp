#include "TextShape.h"

//TextShape::TextShape()
//{
//}
//// TextView의 GetOrigin, GetExtent 메서드를 이용하여 BoundingBox 메서드를 구현
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
//// TextView 구현을 그대로 이용
//bool TextShape::IsEmpty() const
//{
//    return TextView::IsEmpty();
//}
//// Shape로 상속받은 TextView에는 없는 인터페이스
//Manipulator* TextShape::CreateManipulator() const
//{
//    return new TextManipulator(this);
//}
//

// 내부 메서드에서 TextView 인스턴스를 이용하여 연산을 호출
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
// 클래스 적응자와 동일하게 구현한다.
Manipulator* TextShape::CreateManipulator() const
{
	return new TextManipulator(this);
}
