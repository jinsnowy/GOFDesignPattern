#pragma once
#include "Widget.h"

class Dialog : public Widget {
public:
	Dialog(HelpHandler* helper, Topic topic = NO_HELP_TOPIC);
	virtual void HandleHelp();
};