#pragma once
class Observer
{
public:
	virtual ~Observer();
	// ���޹��� theChangedSubject�� ���� ����̶�� �ڽ��� ���¸� ������Ʈ �մϴ�.
	virtual void Update(class Subject* thsChangedSubject) = 0;
protected:
	Observer();
};