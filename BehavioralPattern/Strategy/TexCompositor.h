#pragma once
#include "Compositor.h"

// Tex문법으로 작성된 글에 대한 라인을 분리
class TexCompositor : public Compositor
{
public:
	TexCompositor();
	virtual int Compose(Coord natural[], Coord stretch[], Coord shrink[],
		int componentCount, int lineWidth, int breaks[]);
};

