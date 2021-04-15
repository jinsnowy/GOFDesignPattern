#include "ProtoTypeManager.h"

ProtoTypeManager* ProtoTypeManager::_instance = nullptr;

ProtoTypeManager::ProtoTypeManager()
{
}

ProtoTypeManager* ProtoTypeManager::Instance()
{
	if (_instance == 0)
	{
		_instance = new ProtoTypeManager;

		// 프로토타입 초기화
		_instance->Init();
	}
	return _instance;
}

void ProtoTypeManager::Release()
{
	if (_instance)
	{
		delete _instance;
		_instance = nullptr;
	}
}

Graphic* ProtoTypeManager::GetPrototype(const char* query)
{
	if (strcmp(query, "Circle"))
	{
		// 복사 생성자를 이용
		// return Circle(*this);
		return _p_circle->Clone();
	}
	// ... else

}

void ProtoTypeManager::Init()
{
	_p_circle = new Circle(5);
	_p_rect = new Rectangle(100, 100);
	_p_text = new Text("text", 10);
}
