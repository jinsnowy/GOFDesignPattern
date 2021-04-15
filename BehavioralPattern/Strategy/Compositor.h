#pragma once
#include "Coord.h"

// ���� �и� �˰��� ���� �߻� Ŭ����
class Compositor
{
public:
	// ���� ������ �и��ϱ� ���� �ʿ��� ������ �����Ѵ�.
	virtual int Compose(Coord natural[], Coord stretch[], Coord shrink[],
		int componentCount, int lineWidth, int breaks[]) = 0;
protected:
	Compositor();
};