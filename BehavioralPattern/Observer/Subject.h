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
	// 자신을 관찰하는 모든 객체를 리스트로 관리
	List<Observer*>* _observers;
};