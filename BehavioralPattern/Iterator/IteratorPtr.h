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
	// _i 를 여러번 삭제 하는 것을 방지하기 위해 복사 생성, 대입을 막는다.
	/*
		IteratorPtr(const IteratorPtr&) = delete;
		IteratorPtr& operator=(const IteratorPtr&) = delete;
	*/
	// 혹은 구현 없음
	IteratorPtr(const IteratorPtr&) {};
	IteratorPtr& operator=(const IteratorPtr&) {};
private:
	Iterator<Item>* _iter;
};