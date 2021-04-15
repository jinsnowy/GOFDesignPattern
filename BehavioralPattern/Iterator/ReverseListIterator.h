#pragma once
#include "IteratorOutOfBounds.h"
#include "Iterator.h"
#include "List.h"

// �Ųٷ� ��ȸ�� �ϴ� ����Ʈ �ݺ��� �Դϴ�.
template<class Item>
class ReverseListIterator :
    public Iterator<Item>
{
public:
    ReverseListIterator(const List<Item>* aList);

	virtual void First();
	virtual void Next();
	virtual bool IsDone() const;
	virtual Item CurrentItem() const;

private:
	const List<Item>* _list; // ���� ����Ʈ ��ü
	long _current; // ���� ����Ű�� �ִ� ������ ���� ��
};

/*
	ReverseListIterator�� ���� ����
*/
template<class Item>
ReverseListIterator<Item>::ReverseListIterator(const List<Item>* aList)
	: _list(aList), _current(0)
{
}

// ù��° �ε����� �̵�
template<class Item>
void ReverseListIterator<Item>::First()
{
	_current = _list->Count();
}

// ���� �ε����� �̵�
template<class Item>
void ReverseListIterator<Item>::Next()
{
	--_current;
}

// �ݺ��ڰ� ���� ����Ű�� �ִ��� Ȯ��
template<class Item>
bool ReverseListIterator<Item>::IsDone() const
{
	return _current <= 0;
}

// ���� �ε����� ���Ҹ� ��ȯ�մϴ�.
// ���� ����Ű�� ���� ���� IteratorOutOfBounds ���ܸ� �߻���ŵ�ϴ�.
template<class Item>
Item ReverseListIterator<Item>::CurrentItem() const
{
	if (IsDone())
	{
		throw IteratorOutOfBounds();
	}
	return _list->Get(_current);
}