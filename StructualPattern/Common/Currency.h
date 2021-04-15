#pragma once
#include <iostream>
class Currency
{
public:
	friend std::ostream& operator<<(std::ostream& os, const Currency& c);
};

