#pragma once
#include "VariableExp.h"

// 모든 부울 식을 등록하고 평가값을 관리합니다.
class Context
{
public:
	bool Lookup(const char*) const;
	void Assign(VariableExp*, bool);
};