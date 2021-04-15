#pragma once
#include "Context.h"

// �ο� ������ ǥ�������� �߻� Ŭ�����Դϴ�.
class BooleanExp
{
public:
	BooleanExp();
	virtual ~BooleanExp();

	// �ڽ��� �򰡰�
	virtual bool Evaluate(Context&) = 0;
	// �ڽ��� �ٸ� ǥ������ ��ü
	virtual BooleanExp* Replace(const char*, BooleanExp&) = 0;
	// �ڽſ� ���� ���� ���� �޼���
	virtual BooleanExp* Copy() const = 0;
};