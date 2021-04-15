#pragma once
#include "Coord.h"

// 라인 분리 알고리즘에 대한 추상 클래스
class Compositor
{
public:
	// 실제 라인을 분리하기 위해 필요한 정보를 전달한다.
	virtual int Compose(Coord natural[], Coord stretch[], Coord shrink[],
		int componentCount, int lineWidth, int breaks[]) = 0;
protected:
	Compositor();
};