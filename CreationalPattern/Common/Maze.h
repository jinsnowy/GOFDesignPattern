#pragma once
#include "Room.h"
#include "Door.h"
#include "Wall.h"

class Maze
{
public:
	Maze();
	// 방을 추가
	void AddRoom(Room*);
	// 방을 찾는다
	Room* RoomNo(int) const;
	// Maze를 만든다
	Maze* CreateMaze();

	// 프로토타입을 위한 Clone 메서드
	virtual Maze* Clone() const
	{
		return new Maze(*this);
	}
private:
	/* ... */
};