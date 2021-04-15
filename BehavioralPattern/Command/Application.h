#pragma once
#include "../Common/List.h"

class Application
{
private:
	class List<Document*> documents;
public:
	Application();
	virtual void Add(class Document* doc);
};