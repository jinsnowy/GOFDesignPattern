#pragma once
#include "../Common/Point.h"
#include <iostream>
using std::istream;
using std::ostream;

class Graphic
{
public:
	virtual ~Graphic();

	// �׸��� �� ���콺�� �̿��� �̹��� ũ�� ������
	virtual void Draw(const Point& aT) = 0;
	virtual void HandleMouse(class Event& event) = 0;

	// �̹��� ũ��
	virtual const Point& GetExtent() = 0;

	// ���� �ε� �� ����
	virtual void Load(istream& from) = 0;
	virtual void Save(ostream& to) = 0;
protected:
	Graphic();
};

