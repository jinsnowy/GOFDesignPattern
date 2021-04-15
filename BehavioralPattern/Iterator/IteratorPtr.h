#pragma once
#include "Iterator.h"

template<class Item>
class IteratorPtr
{
public:
	IteratorPtr(Iterator<Item>* iter) : _iter(iter) {}
	~IteratorPtr() { delete _iter; }
	IteratorPtr<Item>* operator->() { return _iter; }
	Iterator<Item>& operator*() { return *_iter; }
private:
	// _i �� ������ ���� �ϴ� ���� �����ϱ� ���� ���� ����, ������ ���´�.
	/*
		IteratorPtr(const IteratorPtr&) = delete;
		IteratorPtr& operator=(const IteratorPtr&) = delete;
	*/
	// Ȥ�� ���� ����
	IteratorPtr(const IteratorPtr&) {};
	IteratorPtr& operator=(const IteratorPtr&) {};
private:
	Iterator<Item>* _iter;
};