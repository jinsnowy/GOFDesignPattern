#include "Subject.h"

Subject::~Subject()
{
}
// 관찰자 추가
void Subject::Attach(Observer* o)
{
	_observers->Append(o);
}
// 관찰자 삭제
void Subject::Detach(Observer* o)
{
	_observers->Remove(o);
}

// 모든 관찰자에게 자신의 변경을 알림
void Subject::Notify()
{
	ListIterator<Observer*> i(_observers);

	for (i.First(); !i.IsDone(); i.Next())
	{
		i.CurrentItem()->Update(this);
	}
}

Subject::Subject()
	:
	_observers(new List<Observer*>())
{
}