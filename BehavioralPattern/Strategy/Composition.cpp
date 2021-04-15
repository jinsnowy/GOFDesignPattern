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

	// ���ϴ� ��������� ũ�⸦ ���� �迭�� �غ��մϴ�.
	// ...

	// �� �и����� ��ġ�� �����մϴ�.
	int breakCount;
	breakCount = _compositor->Compose(natural, strecthability, shrinkability,
		componentCount, _lineWidth, breaks);

	// �� �и��� ���߾� ������Ҹ� ��ġ�մϴ�.
	// ...
}
