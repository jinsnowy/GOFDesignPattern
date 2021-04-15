#pragma once
#include "ConstraintSolverMemento.h"
class Graphic;
// ����ü ����
class ConstraintSolver
{
public:
	static ConstraintSolver* Instance();

	void Solve();
	// �׷��� ��ü�� ������ �߰�
	void AddConstraint(Graphic* start, Graphic* end);
	// �׷��� ��ü�� ������ ����
	void RemoveConstraint(Graphic* start, Graphic* end);

	// �޸��� ���¸� ����� ��ȯ�Ѵ�.
	ConstraintSolverMemento* CreateMemento();
	void SetMemento(ConstraintSolverMemento*);
private:
	// ������ ó���ϱ� ���� �ʿ��� ���³� ������ ���⿡ �����Ѵ�.
};

