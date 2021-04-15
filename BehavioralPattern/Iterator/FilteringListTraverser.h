#pragma once
#include "ListIterator.h"

template<class Item>
class FilteringListTraverser
{
public:
	FilteringListTraverser(List<Item>* aList);
	bool Traverse();
protected:
	virtual bool ProcessItem(const Item&) = 0;
	virtual bool TestItem(const Item&) = 0;
private:
	ListIterator<Item> _iterator;
};

template<class Item>
inline FilteringListTraverser<Item>::FilteringListTraverser(List<Item>* aList)
	:
	_iterator(aList)
{
}

template<class Item>
inline bool FilteringListTraverser<Item>::Traverse()
{
	bool result = false;
	for (_iterator.First(); !_iterator.IsDone(); _iterator.Next())
	{
		// �׽�Ʈ�� �Ͽ� ����� ���Ҹ� ó���մϴ�.
		if (TestItem(_iterator.CurrentItem())
		{
			result = ProcessItem(_iterator.CurrentItem());

			if (result == false)
			{
				break;
			}
		}
	}
	return result;
}
