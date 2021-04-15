#pragma once
#include "../Common/Point.h"
#include "../Common/VisualComponent.h"

class TextView : public VisualComponent
{
protected:
	float x;
public:
	TextView();
	// �ؽ�Ʈ ������ �߽���
	void GetOrigin(Coord& x, Coord& y) const;
	// �ؽ�Ʈ ������ ���� ���� ���̸� �̿��Ͽ� �簢�� ��踦 ���Ѵ�.
	void GetExtent(Coord& width, Coord& height) const;
	virtual bool IsEmpty() const;
};