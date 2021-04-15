#pragma once
#include "ListIterator.h"

template<class Item>
class ListTraverser
{
public:
	ListTraverser (List<Item>* aList);
	bool Traverse();
protected:
	// 더 이상 처리할 원소가 없다면 false를 반환합니다.
	virtual bool ProcessItem(const Item&) = 0;
private:
	ListIterator<Item> _iterator;
};

template<class Item>
inline ListTraverser<Item>::ListTraverser(List<Item>* aList)
	:
	_iterator(aList)
{
}

template<class Item>
inline bool ListTraverser<Item>::Traverse()
{
	bool result = false;
	for (_iterator.First(); !_iterator.IsDone(); _iterator.Next())
	{
		result = ProcessItem(_iterator.CurrentItem());

		if (result == false)
		{
			break;
		}
	}
	return result;
}
