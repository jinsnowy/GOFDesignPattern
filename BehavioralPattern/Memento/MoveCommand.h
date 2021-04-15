#pragma once
#include "Point.h"
class Graphic;
class MoveCommand
{
public:
	// Graphic 객체를 delta만큼 움직이는 명령어
	MoveCommand(Graphic* target, const Point& delta)
		:
		_target(target), _delta(delta)
	{

	}
	void Execute();
	void Unexecute();
private:
	// 연결된 그래픽 객체들의 상태
	class ConstraintSolverMemento* _state;
	// 어느 그래픽 객체를 어느 만큼 움직였는지
	Point _delta;
	Graphic* _target;
};

