#pragma once

// ��� ��� ����� �ִ� �Լ��� ���� �߻� Ŭ����
class Command
{
public:
	virtual ~Command();
	// �� ��ɿ� ���� ��ü���� ���� ����
	virtual void Execute() = 0;
protected:
	Command();
};