#include "NotExp.h"

NotExp::NotExp(BooleanExp* operand)
{
	_operand = operand;
}

NotExp::~NotExp()
{
}

bool NotExp::Evaluate(Context& aContext)
{
	return !_operand->Evaluate(aContext);
}

BooleanExp* NotExp::Replace(const char* name, BooleanExp& exp)
{
	return new NotExp(_operand->Replace(name, exp));
}

BooleanExp* NotExp::Copy() const
{
	return new NotExp(_operand->Copy());
}

