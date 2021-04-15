#pragma once
#include "Iterator.h"
// �پ��� ����Ʈ ��ü�� ����� ���� �߻� ����Ʈ Ŭ����
template<class Item>
class AbstractList
{
public:
	// �˸��� �ݺ��ڸ� �����ϵ��� ���丮 �޼��带 ����
	virtual Iterator<Item>* CreateIterator() const = 0;
	// ...
};