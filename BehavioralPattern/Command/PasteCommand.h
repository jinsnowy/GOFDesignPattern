#pragma once
#include "Command.h"
class Document;

class PasteCommand : public Command
{
public:
	PasteCommand(Document*);
	virtual void Execute();
private:
	// ������ ����
	Document* _document;
};