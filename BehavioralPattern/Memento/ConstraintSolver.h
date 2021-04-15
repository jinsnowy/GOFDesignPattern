#pragma once
#include "ConstraintSolverMemento.h"
class Graphic;
// 단일체 패턴
class ConstraintSolver
{
public:
	static ConstraintSolver* Instance();

	void Solve();
	// 그래픽 객체간 연결을 추가
	void AddConstraint(Graphic* start, Graphic* end);
	// 그래픽 객체간 연결을 삭제
	void RemoveConstraint(Graphic* start, Graphic* end);

	// 메멘토 상태를 만들어 반환한다.
	ConstraintSolverMemento* CreateMemento();
	void SetMemento(ConstraintSolverMemento*);
private:
	// 연결을 처리하기 위한 필요한 상태나 연산을 여기에 정의한다.
};

