#include "FontDialogDirector.h"
#include "Button.h"
#include "ListBox.h"
#include "EntryField.h"

FontDialogDirector::FontDialogDirector()
{
}

FontDialogDirector::~FontDialogDirector()
{
}

void FontDialogDirector::CreateWidgets()
{
	_ok = new Button(this);
	_cancel = new Button(this);
	_fontList = new ListBox(this);
	_fontName = new EntryField(this);

	// ������ ��Ʈ �̸���� ����Ʈ ���ڰ� ä�����ϴ�.

	// ������ �������� ��ȭ���� �ȿ� �����մϴ�.
}

void FontDialogDirector::WidgetChanged(Widget* theChangedWidget)
{
	if (theChangedWidget == _fontList)
	{
		_fontName->SetText(_fontList->GetSelection());
	}
	else if (theChangedWidget == _ok)
	{
		// ��Ʈ ������ �����ϰ� ��ȭ���ڸ� ���۴ϴ�.
	}
	else if (theChangedWidget == _cancel)
	{
		// ��ȭ���ڸ� ���۴ϴ�.
	}
}
