#pragma once
#include "BooleanExp.h"
#include <string.h>

class VariableExp : public BooleanExp
{
public:
	VariableExp(const char*);
	virtual ~VariableExp();

	virtual bool Evaluate(Context&);
	virtual BooleanExp* Replace(const char*, BooleanExp&);
	virtual BooleanExp* Copy() const;
private:
	const char* _name;
};