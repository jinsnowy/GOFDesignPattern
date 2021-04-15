#pragma once
#include "DialogDirector.h"

class Button;
class ListBox;
class EntryField;
class FontDialogDirector : public DialogDirector
{
public:
	FontDialogDirector();
	virtual ~FontDialogDirector();
	virtual void WidgetChanged(Widget*);
protected:
	// ���丮 �޼���
	virtual void CreateWidgets();
private:
	Button* _ok;
	Button* _cancel;
	ListBox* _fontList;
	EntryField* _fontName;
};

