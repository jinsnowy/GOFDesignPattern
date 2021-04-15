#pragma once

class Singleton
{
public:
	static Singleton* Instance();
	void Release();
protected:
	Singleton();
	~Singleton();
private:
	static Singleton* _instance;
};