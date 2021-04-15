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
	// �ڽ� �̸� ������ �ش��ϴ� bool �򰡰��� ��ȯ
	return aContext.Lookup(_name);
}

BooleanExp* VariableExp::Replace(const char* name, BooleanExp& exp)
{
	// �ڽ��� �̸��� ��� ��ü�ϰ� �ƴ� ��� �ڽ��� ���纻
	return strcmp(name, _name) == 0 ? exp.Copy() : this->Copy();
}

BooleanExp* VariableExp::Copy() const
{
	// �ڽ��� ���纻�� ����
	return new VariableExp(_name);
}