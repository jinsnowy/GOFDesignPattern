#pragma once
#include "Context.h"

// 부울 식으로 표현가능한 추상 클래스입니다.
class BooleanExp
{
public:
	BooleanExp();
	virtual ~BooleanExp();

	// 자신의 평가값
	virtual bool Evaluate(Context&) = 0;
	// 자신을 다른 표현으로 대체
	virtual BooleanExp* Replace(const char*, BooleanExp&) = 0;
	// 자신에 대한 복사 생성 메서드
	virtual BooleanExp* Copy() const = 0;
};