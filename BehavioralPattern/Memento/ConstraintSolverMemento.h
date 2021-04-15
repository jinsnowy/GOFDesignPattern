#pragma once
class ConstraintSolverMemento
{
public:
	virtual ~ConstraintSolverMemento();
private:
	friend class ConstraintSolver;
	ConstraintSolverMemento();
	// ConstraintSolver의 미공개용 상태
};

