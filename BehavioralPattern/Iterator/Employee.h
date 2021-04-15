#pragma once
#include <iostream>
class Employee
{
private:
	char _name[32] = {};
	int _age;
public:
	Employee(const char* name, int age) : _age(age)
	{
		strcpy_s(_name, name);
	}
	void Print()
	{
		std::cout << "Name : " << _name << "\tage : " << _age << std::endl;
	}
};