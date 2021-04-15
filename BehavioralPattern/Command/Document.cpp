#include "Document.h"

Document::Document(const char* fileName)
	: Name(fileName), pFile(nullptr)
{
}

void Document::Open()
{
	 fopen_s(&pFile, Name, "wb");
	 if (!pFile)
	 {
		 std::cout << "File Not Opened!" << std::endl;
		 return;
	 }
}

void Document::Close()
{
	if (pFile)
	{
		fclose(pFile);
	}
}

void Document::Cut()
{
}

void Document::Copy()
{
}

void Document::Paste()
{
}
