#pragma once
#include "BooleanExp.h"

class Constant : public BooleanExp
{
public:
	Constant(bool);
	virtual ~Constant();

	virtual bool Evaluate(Context&);
	virtual BooleanExp* Replace(const char*, BooleanExp&) override;
	virtual BooleanExp* Copy() const;
private:
	bool _value;
};