#include "GraphicFactory.h"
#include "WidgetFactory.h"
#include "StandardWidget.h"
#include "Window.h"
#include "ProtoTypeManager.h"
using namespace std;

enum ALIGN
{
	CENTER, LEFT, RIGHT
};

int main()
{
	Window* wnd = new Window(0, 0, 1280, 960);

	// ���丮 �޼��� ���
	GraphicFactory factory;
	int draw_at_x = 200, draw_at_y = 400;
	Graphic* rect = factory.MakeRectangle(200, 200);
	rect->SetCenter(draw_at_x, draw_at_y);
	rect->Draw(wnd);

	Graphic* image = factory.MakeImage("test.jpg");
	image->SetCenter(draw_at_x, draw_at_y);
	image->Draw(wnd);

	Graphic* text = factory.MakeText("�ȳ��ϼ���.", 5);
	text->SetCenter(draw_at_x, draw_at_y);
	text->Draw(wnd);

	// �߻� ���丮 ������� ������ ����
	vector<string> files, texts;
	WidgetGraphicFactory widgetfactory(ALIGN::CENTER);

	StandardWidget* widget = new StandardWidget(WIDGET_TYPE::WIDE, files, texts, widgetfactory);
	widget->Draw(wnd);


	// ������Ÿ�� �Ŵ����� �̿�
	// ��ü �ϳ��� �޸� �Ҵ��ؼ� 100���� ���ÿ� �׸��� ��ó�� ��.
	Graphic* circle = ProtoTypeManager::Instance()->GetPrototype("circle");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			circle->SetCenter(i * 50, j * 50);
			circle->Draw(wnd);
		}
	}

	return 0;
}