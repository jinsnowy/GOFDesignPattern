#pragma once
#include "Compositor.h"

// 배열 기반으로 라인을 분리
class ArrayCompositor : public Compositor
{
public:
	ArrayCompositor(int interval);
	virtual int Compose(Coord natural[], Coord stretch[], Coord shrink[],
		int componentCount, int lineWidth, int breaks[]);
	// ...
};

