#pragma once
#include "../Common/Point.h"
#include "../Common/VisualComponent.h"

class TextView : public VisualComponent
{
protected:
	float x;
public:
	TextView();
	// 텍스트 상자의 중심점
	void GetOrigin(Coord& x, Coord& y) const;
	// 텍스트 상자의 가로 세로 길이를 이용하여 사각형 경계를 구한다.
	void GetExtent(Coord& width, Coord& height) const;
	virtual bool IsEmpty() const;
};