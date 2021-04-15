#include "StandardWidget.h"

StandardWidget::StandardWidget(WIDGET_TYPE widget,
	std::vector<std::string>& files, std::vector<std::string>& texts,
	GraphicFactory& factory)
{
	// 위젯 설정
	switch (widget)
	{
		// 각 종류별 위젯 생성
		case WIDE:
		{

		}break;
		case REASONABLE:
		{

		}break;
		case NARROW:
		{

		}break;
	}

	_images = new Graphic * [files.size()];
	_texts = new Graphic * [texts.size()];

	// 추상 팩토리를 매개변수로 받아 자동 생성
	for (int f_id = 0; f_id < files.size(); f_id++)
	{
		// _images[f_id] = new Image(files[f_id].c_str());
		_images[f_id] = factory.MakeImage(files[f_id].c_str());
	}

	for (int f_id = 0; f_id < files.size(); f_id++)
	{
		// _texts[f_id] = new Text(texts[f_id].c_str(), sp)
		_texts[f_id] = factory.MakeText(texts[f_id].c_str(), sp);
	}
}

StandardWidget::~StandardWidget()
{
}

int StandardWidget::GetRows() const
{
	return 0;
}

int StandardWidget::GetCols() const
{
	return 0;
}

void StandardWidget::Insert(int at_row, int at_col, Graphic* src)
{
}

void StandardWidget::Delete(int at_row, int at_col)
{
}

void StandardWidget::Draw(Window*)
{
}
