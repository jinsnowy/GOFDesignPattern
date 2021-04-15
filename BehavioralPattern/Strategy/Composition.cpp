#include "Composition.h"
#include "Compositor.h"
#include "Coord.h"

Composition::Composition(Compositor* comp)
{
}

void Composition::Repair()
{
	Coord* natural;
	Coord* strecthability;
	Coord* shrinkability;
	int componentCount;
	int* breaks;

	// 원하는 구성요소의 크기를 가진 배열을 준비합니다.
	// ...

	// 줄 분리자의 위치를 결정합니다.
	int breakCount;
	breakCount = _compositor->Compose(natural, strecthability, shrinkability,
		componentCount, _lineWidth, breaks);

	// 줄 분리에 맞추어 구성요소를 배치합니다.
	// ...
}
