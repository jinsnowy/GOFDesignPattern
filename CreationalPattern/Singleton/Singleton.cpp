#include "Singleton.h"

Singleton* Singleton::_instance = 0;

Singleton* Singleton::Instance()
{
	if (_instance == 0)
	{
		_instance = new Singleton;
	}
	return _instance;
}

void Singleton::Release()
{
	if (_instance)
	{
		delete _instance;
		_instance = 0;
	}
}

Singleton::Singleton()
{
}

Singleton::~Singleton()
{
}
