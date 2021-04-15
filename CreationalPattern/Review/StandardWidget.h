#pragma once
#include "Image.h"
#include "Text.h"
#include "GraphicFactory.h"
#include <vector>
#include <string>

enum WIDGET_TYPE
{
	WIDE = 0, REASONABLE, NARROW
};

class StandardWidget
{
private:
	int sp;
	int width, height;
	int rows, cols;
	Graphic**_images;
	Graphic** _texts;
public:
	StandardWidget(WIDGET_TYPE widget,
					std::vector<std::string> &files, std::vector<std::string> &texts ,
					GraphicFactory& factory);
	~StandardWidget();
	int GetRows() const;
	int GetCols() const;
	void Insert(int at_row, int at_col, Graphic* src);
	void Delete(int at_row, int at_col);
	// rows, cols �� �´� �̹���, �ؽ�Ʈ�� �ڵ����� Resize�Ͽ� ȭ�鿡 ���
	void Draw(Window*);
};