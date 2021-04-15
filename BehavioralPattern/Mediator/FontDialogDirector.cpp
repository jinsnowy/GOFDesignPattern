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

	// 가능한 폰트 이름들로 리스트 상자가 채워집니다.

	// 생성한 위젯들을 대화상자 안에 조합합니다.
}

void FontDialogDirector::WidgetChanged(Widget* theChangedWidget)
{
	if (theChangedWidget == _fontList)
	{
		_fontName->SetText(_fontList->GetSelection());
	}
	else if (theChangedWidget == _ok)
	{
		// 폰트 변경을 적용하고 대화상자를 없앱니다.
	}
	else if (theChangedWidget == _cancel)
	{
		// 대화상자를 없앱니다.
	}
}
