#pragma once
#include "Command.h"
class Document;

class PasteCommand : public Command
{
public:
	PasteCommand(Document*);
	virtual void Execute();
private:
	// 복제할 문서
	Document* _document;
};