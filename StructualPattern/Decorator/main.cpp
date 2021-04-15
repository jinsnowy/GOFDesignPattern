#include "../Common/TextView.h"
#include "BorderDecorator.h"
#include "ScrollDecorator.h"
#include <iostream>
using namespace std;

int main()
{
	TextView* textView = new TextView;
	VisualComponent* adTextView = new BorderDecorator(new ScrollDecorator(textView, 1), 5);

	// draw textView with Bordered, scrollbar
	adTextView->Draw();

	return 0;
}