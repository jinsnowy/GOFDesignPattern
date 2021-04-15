#pragma once
#include "Iterator.h"
// 다양한 리스트 객체를 만들기 위한 추상 리스트 클래스
template<class Item>
class AbstractList
{
public:
	// 알맞은 반복자를 생성하도록 팩토리 메서드를 정의
	virtual Iterator<Item>* CreateIterator() const = 0;
	// ...
};