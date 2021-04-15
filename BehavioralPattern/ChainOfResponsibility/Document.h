#pragma once
#include <iostream>
class Document
{
private:
	const char* Name;
	FILE* pFile;
public:
	Document(const char* fileName);
	void Open();
	void Close();
	void Cut();
	void Copy();
	void Paste();
};

