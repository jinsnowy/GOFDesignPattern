#include "Constant.h"

Constant::Constant(bool value) :_value(value) {}

Constant::~Constant()
{
}

bool Constant::Evaluate(Context& aContext) 
{ 
	return _value; 
}

BooleanExp* Constant::Replace(const char* name, BooleanExp& exp) 
{ 
	return this->Copy(); 
}

BooleanExp* Constant::Copy() const 
{
	return new Constant(_value); 
}