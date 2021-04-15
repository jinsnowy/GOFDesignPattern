#pragma once
enum Direction {North, South, East, West};
class MapSite
{
public:
	// 들어가는 인터페이스
	virtual void Enter() = 0;
};
