#pragma once
#include "../Common/Point.h"
#include <iostream>
using std::istream;
using std::ostream;

class Graphic
{
public:
	virtual ~Graphic();

	// 그리기 및 마우스를 이용한 이미지 크기 재조정
	virtual void Draw(const Point& aT) = 0;
	virtual void HandleMouse(class Event& event) = 0;

	// 이미지 크기
	virtual const Point& GetExtent() = 0;

	// 파일 로드 및 저장
	virtual void Load(istream& from) = 0;
	virtual void Save(ostream& to) = 0;
protected:
	Graphic();
};

