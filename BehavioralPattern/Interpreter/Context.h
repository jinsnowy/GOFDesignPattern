#pragma once
#include "VariableExp.h"

// ��� �ο� ���� ����ϰ� �򰡰��� �����մϴ�.
class Context
{
public:
	bool Lookup(const char*) const;
	void Assign(VariableExp*, bool);
};