#pragma once
class Observer
{
public:
	virtual ~Observer();
	// 전달받은 theChangedSubject가 관찰 대상이라면 자신의 상태를 업데이트 합니다.
	virtual void Update(class Subject* thsChangedSubject) = 0;
protected:
	Observer();
};