#include "Document.h"
#include "SimpleCommand.h"
#include "MacroCommand.h"
#include "PasteCommand.h"
#include "OpenCommand.h"

class MyClass {
public:
	MyClass(Document* doc);
	void Open();
};

int main()
{
	// SimpleCommand ¿¹½Ã
	MyClass* receiver = new MyClass(new Document("test.txt"));

	Command* aCommand = new SimpleCommand<MyClass>(receiver, &MyClass::Open);

	aCommand->Execute();
	return 0;
}