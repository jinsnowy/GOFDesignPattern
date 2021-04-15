#pragma once
#include "Compositor.h"

// �迭 ������� ������ �и�
class ArrayCompositor : public Compositor
{
public:
	ArrayCompositor(int interval);
	virtual int Compose(Coord natural[], Coord stretch[], Coord shrink[],
		int componentCount, int lineWidth, int breaks[]);
	// ...
};

