#include "Subject.h"

Subject::~Subject()
{
}
// ������ �߰�
void Subject::Attach(Observer* o)
{
	_observers->Append(o);
}
// ������ ����
void Subject::Detach(Observer* o)
{
	_observers->Remove(o);
}

// ��� �����ڿ��� �ڽ��� ������ �˸�
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