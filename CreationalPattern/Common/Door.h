#pragma once
#include "MapSite.h"
#include "Room.h"

class Door : public MapSite
{
private:
	// 상태
	bool _isOpen;
	// 연결하는 두 방
	Room* _room1;
	Room* _room2;
public:
	// 문을 초기화하기 위해서는 문이 어느 방 사이에 있는지 알아야한다.
	Door();
	Door(const Door&);
	Door(Door*, Door*);
	Door(Room*, Room*);
	virtual void Initialize(Room*, Room*);
	virtual void Enter();
	Room* OtherSideFrom(Room*);
	// 프로토타입을 위한 Clone 메서드
	virtual Door* Clone() const;
};

