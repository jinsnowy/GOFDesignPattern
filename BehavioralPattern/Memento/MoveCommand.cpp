#include "MoveCommand.h"
#include "ConstraintSolver.h"
#include "ConstraintSolverMemento.h"
#include "Graphic.h"
void MoveCommand::Execute()
{
	ConstraintSolver* solver = ConstraintSolver::Instance();
	_state = solver->CreateMemento();
	_target->Move(_delta);
	solver->Solve();
}

void MoveCommand::Unexecute()
{
	ConstraintSolver* solver = ConstraintSolver::Instance();
	_state = solver->CreateMemento();
	_target->Move(-_delta);
	solver->Solve();
}
