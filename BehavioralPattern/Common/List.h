#pragma once
#define DFEAULT_LIST_CAPACITY = 10000

template<class Item>
class List
{
public:
	List(long size = DFEAULT_LIST_CAPACITY);
	List(List&);
	~List();
	List& operator=(const List&);
public:
	long Count() const;
	Item& Get(long index) const;
	Item& First() const;
	Item& Last() const;
	bool Includes(const Item&) const;

	void Append(const Item&);
	void Prepend(const Item&);

	void Remove(const Item&);
	void RemoveLast();
	void RemoveFirst();
	void RemoveAll();

	Item& Top() const;
	void Push(const Item&);
	Item& Pop();
};