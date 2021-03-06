#include "BooleanExp.h"
#include "VariableExp.h"
#include "Constant.h"
#include "NotExp.h"
#include "OrExp.h"
#include "AndExp.h"
#include "Context.h"

int main()
{
	BooleanExp* expression;
	Context context;

	VariableExp* x = new VariableExp("X");
	VariableExp* y = new VariableExp("Y");

	expression = new OrExp(
		new AndExp(new Constant(true), x),
		new AndExp(y, new NotExp(x))
	);

	context.Assign(x, false);
	context.Assign(y, true);

	// (true and false) or (true and (not false)) = true
	bool result = expression->Evaluate(context);

	VariableExp* z = new VariableExp("Z");
	NotExp not_z(z);

	BooleanExp* replacement = expression->Replace("Y", not_z);

	context.Assign(z, true);

	result = replacement->Evaluate(context);
	return 0;
}
