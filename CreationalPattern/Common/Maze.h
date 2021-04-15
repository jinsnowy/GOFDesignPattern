#pragma once
#include "Room.h"
#include "Door.h"
#include "Wall.h"

class Maze
{
public:
	Maze();
	// ���� �߰�
	void AddRoom(Room*);
	// ���� ã�´�
	Room* RoomNo(int) const;
	// Maze�� �����
	Maze* CreateMaze();

	// ������Ÿ���� ���� Clone �޼���
	virtual Maze* Clone() const
	{
		return new Maze(*this);
	}
private:
	/* ... */
};