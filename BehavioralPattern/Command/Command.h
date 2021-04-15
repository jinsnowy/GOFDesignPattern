#pragma once

// 모든 명령 기능이 있는 함수에 대한 추상 클래스
class Command
{
public:
	virtual ~Command();
	// 이 명령에 대한 구체적인 실행 내용
	virtual void Execute() = 0;
protected:
	Command();
};