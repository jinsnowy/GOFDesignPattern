#pragma once
#include "Observer.h"
#include "../Common/List.h"
#include "../Common/ListIterator.h"

class Subject
{
public:
	virtual ~Subject();
	virtual void Attach(Observer*);
	virtual void Detach(Observer*);
	virtual void Notify();
protected:
	Subject();
private:
	// �ڽ��� �����ϴ� ��� ��ü�� ����Ʈ�� ����
	List<Observer*>* _observers;
};