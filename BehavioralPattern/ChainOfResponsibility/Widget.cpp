#include "Widget.h"

Widget::Widget(Widget* parent_widget, Topic topic)
	: 
	HelpHandler(parent_widget, topic),
	parent(parent_widget)
{
	
}