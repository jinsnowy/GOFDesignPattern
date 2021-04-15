#pragma once
#include "AbstractList.h"
#include "Iterator.h"
#define DEFAULT_LIST_CAPACITY 100

// ���ø� Ŭ������ ���� ����
template<typename Elem>
class ListIterator;

template<class Item>
class List : public AbstractList<Item>
{
public:
	// �ʱ� ���� ��ŭ�� ���Ҹ� ���� ����Ʈ�� �ʱ�ȭ �մϴ�. 
	List(long size = DEFAULT_LIST_CAPACITY);
	// ���� ������ ���� �⺻ ���� ������ �Դϴ�.
	List(List&);
	// �� �̻� ������� �ʴ� ���ʸ��� List�� �Ǳ� ���� ���� �Ҹ��ڷ� �������� �ʽ��ϴ�. 
	~List();
	// ���� ���� �����Դϴ�.
	List& operator=(const List&);

	// ����Ʈ ��ü ���� ��ȯ�մϴ�.
	long Count() const;
	// �־��� �ε����� ���Ҹ� ��ȯ�մϴ�.
	Item& Get(long index) const;
	// ù��° ��ü�� ��ȯ�մϴ�.
	Item& First() const;
	// ������ ��ü�� ��ȯ�մϴ�.
	Item& Last() const;
	// �ش� ��ü�� �����ϴ��� �Ǻ��մϴ�.
	bool Includes(const Item&) const;

	// ���ڸ� ����Ʈ�� �߰��ϰ� �װ��� ������ ���ҷ� ����ϴ�.
	void Append(const Item&);
	// ���ڸ� ����Ʈ�� �߰��ϰ� �װ��� ù ��° ���ҷ� ����ϴ�.
	void Prepend(const Item&);

	// �־��� ���Ҹ� ����Ʈ���� �����մϴ�.
	void Remove(const Item&);
	// ������ ���Ҹ� �����մϴ�.
	void RemoveLast();
	// ù��° ���Ҹ� �����մϴ�.
	void RemoveFirst();
	// ��� ���Ҹ� �����մϴ�.
	void RemoveAll();

	// ����Ʈ�� �⺻������ ���� �������̽��� ���ʷ��մϴ�.
	// ���� �� ���Ҹ� ��ȯ�մϴ�.
	Item& Top() const;
	// ���� ���� ���Ҹ� �����մϴ�. 
	void Push(const Item&);
	// ���� ���� ���Ҹ� �����ϰ� ��ȯ�մϴ�.
	Item& Pop();

	/* Abstract List ��ü�� ����� List ��ü�� �ڽ��� �ݺ��ڸ� ��ȯ�ؾ��մϴ�. */
	Iterator<Item>* CreateIterator() const override
	{
		return new ListIterator<Item>(this);
	}
};