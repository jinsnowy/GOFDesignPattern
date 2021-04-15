#pragma once

// 실제 라인 분리 알고리즘 대상이 되는 객체
class Composition
{
public:
	Composition(class Compositor*);
	void Repair();
private:
	class Compositor* _compositor;
	class Component* _components; // 구성요소 리스트
	int _componentCount;		  // 구성요소 수
	int _lineWidth;				  // 라인의 넓이
	int* _lineBreaks;			  // 줄 분리자의 위치
	int _lineCount;				  // 라인 수
};

