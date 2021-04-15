#pragma once
#include "AbstractList.h"
#include "Iterator.h"
#define DEFAULT_LIST_CAPACITY 100

// 템플릿 클래스의 전방 선언
template<typename Elem>
class ListIterator;

template<class Item>
class List : public AbstractList<Item>
{
public:
	// 초기 갯수 만큼의 원소를 가진 리스트를 초기화 합니다. 
	List(long size = DEFAULT_LIST_CAPACITY);
	// 복사 생성을 위한 기본 복사 생성자 입니다.
	List(List&);
	// 더 이상 상속하지 않는 제너릭한 List가 되기 위해 가상 소멸자로 선언하지 않습니다. 
	~List();
	// 대입 연산 정의입니다.
	List& operator=(const List&);

	// 리스트 객체 수를 반환합니다.
	long Count() const;
	// 주어진 인덱스의 원소를 반환합니다.
	Item& Get(long index) const;
	// 첫번째 객체를 반환합니다.
	Item& First() const;
	// 마지막 객체를 반환합니다.
	Item& Last() const;
	// 해당 객체를 포함하는지 판별합니다.
	bool Includes(const Item&) const;

	// 인자를 리스트에 추가하고 그것을 마지막 원소로 만듭니다.
	void Append(const Item&);
	// 인자를 리스트에 추가하고 그것을 첫 번째 원소롤 만듭니다.
	void Prepend(const Item&);

	// 주어진 원소를 리스트에서 제거합니다.
	void Remove(const Item&);
	// 마지막 원소를 제거합니다.
	void RemoveLast();
	// 첫번째 원소를 제거합니다.
	void RemoveFirst();
	// 모든 원소를 제거합니다.
	void RemoveAll();

	// 리스트는 기본적으로 스택 인터페이스를 기초로합니다.
	// 제일 위 원소를 반환합니다.
	Item& Top() const;
	// 스택 위에 원소를 삽입합니다. 
	void Push(const Item&);
	// 스택 위의 원소를 제거하고 반환합니다.
	Item& Pop();

	/* Abstract List 객체를 상속한 List 객체는 자신의 반복자를 반환해야합니다. */
	Iterator<Item>* CreateIterator() const override
	{
		return new ListIterator<Item>(this);
	}
};