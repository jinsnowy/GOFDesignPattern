#pragma once
#include "Compositor.h"

// �ܼ� ���� ��, ���� ������ ������ �и�
class SimpleCompositor : public Compositor
{
public:
	SimpleCompositor();

	virtual int Compose(Coord natural[], Coord stretch[], Coord shrink[],
		int componentCount, int lineWidth, int breaks[]);
	// ...
};

