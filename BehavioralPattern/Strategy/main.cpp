#include "Composition.h"
#include "TexCompositor.h"
#include "SimpleCompositor.h"
#include "ArrayCompositor.h"

int main()
{
	Composition* quick = new Composition(new SimpleCompositor);
	Composition* slick = new Composition(new TexCompositor);
	Composition* iconic = new Composition(new ArrayCompositor(100));

	return 0;
}