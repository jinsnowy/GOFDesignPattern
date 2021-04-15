#pragma once
#include "Compositor.h"

// 단순 글자 수, 넓이 등으로 라인을 분리
class SimpleCompositor : public Compositor
{
public:
	SimpleCompositor();

	virtual int Compose(Coord natural[], Coord stretch[], Coord shrink[],
		int componentCount, int lineWidth, int breaks[]);
	// ...
};

