#pragma once
#include "Point.h"
class Graphic;
class MoveCommand
{
public:
	// Graphic ��ü�� delta��ŭ �����̴� ��ɾ�
	MoveCommand(Graphic* target, const Point& delta)
		:
		_target(target), _delta(delta)
	{

	}
	void Execute();
	void Unexecute();
private:
	// ����� �׷��� ��ü���� ����
	class ConstraintSolverMemento* _state;
	// ��� �׷��� ��ü�� ��� ��ŭ ����������
	Point _delta;
	Graphic* _target;
};

