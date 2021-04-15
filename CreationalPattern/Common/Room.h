#pragma once
#include "MapSite.h"

class Room : public MapSite
{
private:
	// 4 �������� �� �� �ִ� �������̽��� ����
	MapSite* _sides[4];
	// �� ��ȣ
	int _roomNumber;
public:
	Room(int RoomNo);

	MapSite* GetSide(Direction) const;
	void SetSide(Direction, MapSite*);
	void SetNumber(int n);
	virtual void Enter();

	virtual Room* Clone();
};

