#pragma once

// ������ (Director)�� ���� �߻� Ŭ���� �Դϴ�.
class DialogDirector
{
public:
	virtual ~DialogDirector();

	// ���̾�α׸� ǥ���մϴ�.
	virtual void ShowDialog();
	// � ������ ����� ����� �˸� �޽��ϴ�.
	virtual void WidgetChanged(class Widget*) = 0;
};