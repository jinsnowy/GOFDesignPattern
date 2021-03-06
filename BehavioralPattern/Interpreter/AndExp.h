#pragma once
#include "BooleanExp.h"

class AndExp : public BooleanExp
{
public:
	AndExp(BooleanExp*, BooleanExp*);
	virtual ~AndExp();

	virtual bool Evaluate(Context&);
	virtual BooleanExp* Replace(const char*, BooleanExp&);
	virtual BooleanExp* Copy() const;
private:
	BooleanExp* _operand1;
	BooleanExp* _operand2;
 };