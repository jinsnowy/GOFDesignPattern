#pragma once
#include "IteratorOutOfBounds.h"
#include "Iterator.h"

// 템플릿 클래스 전방 선언
template<class Elem>
class List;

// 리스트 자료구조를 위한 구체 반복자 클래스입니다.
template<class Item>
class ListIterator : public Iterator<Item>
{
public:
	ListIterator(const List<Item>* aList);
	
	virtual void First();
	virtual void Next();
	virtual bool IsDone() const;
	virtual Item CurrentItem() const;

private:
	const List<Item>* _list; // 실제 리스트 객체
	long _current; // 현재 가리키고 있는 원소의 번지 수
};

/*
	ListIterator의 구현 예시
*/
template<class Item>
ListIterator<Item>::ListIterator(const List<Item>* aList)
	: _list(aList), _current(0)
{
}

// 첫번째 인덱스로 이동
template<class Item>
void ListIterator<Item>::First()
{
	_current = 0;
}

// 다음 인덱스로 이동
template<class Item>
void ListIterator<Item>::Next()
{
	++_current;
}

// 반복자가 끝을 가리키고 있는지 확인

template<class Item>
bool ListIterator<Item>::IsDone() const
{
	return _current >= _list->Count();
}

// 현재 인덱스의 원소를 반환합니다.
// 끝을 가리키고 있을 떄는 IteratorOutOfBounds 예외를 발생시킵니다.
template<class Item>
Item ListIterator<Item>::CurrentItem() const
{
	if (IsDone())
	{
		throw IteratorOutOfBounds();
	}
	return _list->Get(_current);
}