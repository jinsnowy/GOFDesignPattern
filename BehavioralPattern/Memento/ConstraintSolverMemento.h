#pragma once
class ConstraintSolverMemento
{
public:
	virtual ~ConstraintSolverMemento();
private:
	friend class ConstraintSolver;
	ConstraintSolverMemento();
	// ConstraintSolver�� �̰����� ����
};

