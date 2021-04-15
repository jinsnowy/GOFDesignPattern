#include <iostream>
#include "ListIterator.h"
#include "ReverseListIterator.h"
#include "IteratorPtr.h"
#include "Employee.h"
#include "PrintNEmployees.h"

void PrintEmployee(Iterator<Employee*>& i)
{
	for (i.First(); !i.IsDone(); i.Next())
	{
		i.CurrentItem()->Print();
	}
}

int main()
{
	List<Employee*>* employees = new List<Employee*>();
	
	// ... 원소 삽입
	employees->Push(new Employee("Bob", 32));
	employees->Push(new Employee("Ander", 28));

	ListIterator<Employee*> forward(employees);
	ReverseListIterator<Employee*> backward(employees);

	PrintEmployee(forward);
	PrintEmployee(backward);

	Iterator<Employee*>* iterator = employees->CreateIterator();
	PrintEmployee(*iterator);
	delete iterator;

	/* 확실한 반복자 삭제 */
	// IteratorPtr 이라는 프록시 객체를 이용
	IteratorPtr<Employee*> iteratorPtr(employees->CreateIterator());
	PrintEmployee(*iteratorPtr);

	/* Iterator의 서브 클래스로 Employee 정보를 출력하는 방법을 클래스가 제공 */
	PrintNEmployees pa(employees, 10);
	pa.Traverse();

	// 외부 반복자를 이용한 경우
	ListIterator<Employee*> i(employees);
	int count = 0;

	for (i.First(); !i.IsDone(); i.Next())
	{
		++count;
		i.CurrentItem()->Print();
		
		if (count >= 10)
		{
			break;
		}
	}

	return 0;
}