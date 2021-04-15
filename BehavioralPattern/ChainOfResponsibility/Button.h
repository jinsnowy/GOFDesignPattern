#pragma once
#include "Widget.h"

class Button : public Widget {
public:
	Button(Widget* parent, Topic topic = NO_HELP_TOPIC);

	virtual void HandleHelp();
};