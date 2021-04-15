#pragma once

#include "../Common/Maze.h"
#include "../Common/Wall.h"
#include "../Common/Room.h"
#include "../Common/Door.h"

class MazeFactory
{
public:
	MazeFactory();
	// 팩토리 메서드를 활용
	virtual Maze* MakeMaze() const
	{ 
		return new Maze; 
	}
	virtual Wall* MakeWall() const
	{ 
		return new Wall; 
	}
	virtual Room* MakeRoom(int n) const
	{ 
		return new Room(n);
	}
	virtual Door* MakeDoor(Room* r1, Room* r2) const
	{ 
		return new Door(r1, r2);
	}
};

