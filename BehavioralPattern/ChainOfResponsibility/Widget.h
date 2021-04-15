#pragma once
#include "HelpHandler.h"

class Widget : public HelpHandler
{
protected:
	Widget(Widget* parent_widget, Topic topic = NO_HELP_TOPIC);
private:
	Widget* parent;
};