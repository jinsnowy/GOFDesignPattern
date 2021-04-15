#pragma once
class DialogDirector;

// ������ ���� �߻� Ŭ����
class Widget
{
public:
	Widget(DialogDirector*);
	// �ڽ��� ���¸� �����մϴ�.
	virtual void Changed();
	virtual void HandleMouse(class MouseEvent& event);
	// ...
private:
	// �ڽ��� �����ϴ� �����ڸ� ������ �ֽ��ϴ�.
	DialogDirector* _director;
};

