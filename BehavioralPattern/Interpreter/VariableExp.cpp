#include "VariableExp.h"

VariableExp::VariableExp(const char* name)
{
	_name = strdup(name);
}

VariableExp::~VariableExp()
{
}

bool VariableExp::Evaluate(Context& aContext)
{
	// 자신 이름 변수에 해당하는 bool 평가값을 반환
	return aContext.Lookup(_name);
}

BooleanExp* VariableExp::Replace(const char* name, BooleanExp& exp)
{
	// 자신의 이름일 경우 대체하고 아닐 경우 자신의 복사본
	return strcmp(name, _name) == 0 ? exp.Copy() : this->Copy();
}

BooleanExp* VariableExp::Copy() const
{
	// 자신의 복사본을 만듦
	return new VariableExp(_name);
}