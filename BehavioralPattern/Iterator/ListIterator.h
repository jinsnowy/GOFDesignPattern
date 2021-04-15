#pragma once
#include "IteratorOutOfBounds.h"
#include "Iterator.h"

// ���ø� Ŭ���� ���� ����
template<class Elem>
class List;

// ����Ʈ �ڷᱸ���� ���� ��ü �ݺ��� Ŭ�����Դϴ�.
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
	const List<Item>* _list; // ���� ����Ʈ ��ü
	long _current; // ���� ����Ű�� �ִ� ������ ���� ��
};

/*
	ListIterator�� ���� ����
*/
template<class Item>
ListIterator<Item>::ListIterator(const List<Item>* aList)
	: _list(aList), _current(0)
{
}

// ù��° �ε����� �̵�
template<class Item>
void ListIterator<Item>::First()
{
	_current = 0;
}

// ���� �ε����� �̵�
template<class Item>
void ListIterator<Item>::Next()
{
	++_current;
}

// �ݺ��ڰ� ���� ����Ű�� �ִ��� Ȯ��

template<class Item>
bool ListIterator<Item>::IsDone() const
{
	return _current >= _list->Count();
}

// ���� �ε����� ���Ҹ� ��ȯ�մϴ�.
// ���� ����Ű�� ���� ���� IteratorOutOfBounds ���ܸ� �߻���ŵ�ϴ�.
template<class Item>
Item ListIterator<Item>::CurrentItem() const
{
	if (IsDone())
	{
		throw IteratorOutOfBounds();
	}
	return _list->Get(_current);
}