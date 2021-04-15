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

	// 팩토리 메서드 방식
	GraphicFactory factory;
	int draw_at_x = 200, draw_at_y = 400;
	Graphic* rect = factory.MakeRectangle(200, 200);
	rect->SetCenter(draw_at_x, draw_at_y);
	rect->Draw(wnd);

	Graphic* image = factory.MakeImage("test.jpg");
	image->SetCenter(draw_at_x, draw_at_y);
	image->Draw(wnd);

	Graphic* text = factory.MakeText("안녕하세요.", 5);
	text->SetCenter(draw_at_x, draw_at_y);
	text->Draw(wnd);

	// 추상 팩토리 방식으로 위젯을 생성
	vector<string> files, texts;
	WidgetGraphicFactory widgetfactory(ALIGN::CENTER);

	StandardWidget* widget = new StandardWidget(WIDGET_TYPE::WIDE, files, texts, widgetfactory);
	widget->Draw(wnd);


	// 프로토타입 매니저를 이용
	// 객체 하나를 메모리 할당해서 100개를 동시에 그리는 것처럼 함.
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