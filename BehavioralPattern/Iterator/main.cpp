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
	
	// ... ���� ����
	employees->Push(new Employee("Bob", 32));
	employees->Push(new Employee("Ander", 28));

	ListIterator<Employee*> forward(employees);
	ReverseListIterator<Employee*> backward(employees);

	PrintEmployee(forward);
	PrintEmployee(backward);

	Iterator<Employee*>* iterator = employees->CreateIterator();
	PrintEmployee(*iterator);
	delete iterator;

	/* Ȯ���� �ݺ��� ���� */
	// IteratorPtr �̶�� ���Ͻ� ��ü�� �̿�
	IteratorPtr<Employee*> iteratorPtr(employees->CreateIterator());
	PrintEmployee(*iteratorPtr);

	/* Iterator�� ���� Ŭ������ Employee ������ ����ϴ� ����� Ŭ������ ���� */
	PrintNEmployees pa(employees, 10);
	pa.Traverse();

	// �ܺ� �ݺ��ڸ� �̿��� ���
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