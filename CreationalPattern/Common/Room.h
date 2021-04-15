#pragma once
#include "MapSite.h"

class Room : public MapSite
{
private:
	// 4 방향으로 들어갈 수 있는 인터페이스를 포함
	MapSite* _sides[4];
	// 방 번호
	int _roomNumber;
public:
	Room(int RoomNo);

	MapSite* GetSide(Direction) const;
	void SetSide(Direction, MapSite*);
	void SetNumber(int n);
	virtual void Enter();

	virtual Room* Clone();
};

