#pragma once

// Iterator 클래스는 순회 인터페이스를 정의하는 추상 클래스 입니다.
template<class Item>
class Iterator
{
public:
	// 반복자를 첫 번째 객체에 위치시킵니다.
	virtual void First() = 0;
	// 반복자를 그 다음 객체에 위치시킵니다.
	virtual void Next() = 0;
	// 그 다음에 있는 객체가 더는 없을 때 true를 반환합니다.
	virtual bool IsDone() const = 0;
	// 현재 위치에 있는 객체를 반환합니다.
	virtual Item CurrentItem() const = 0;
protected:
	Iterator();
};

