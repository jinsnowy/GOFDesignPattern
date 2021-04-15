#pragma once
#include "../Common/Maze.h"

class MazeBuilder
{
public:
	virtual void BuildMaze();
	virtual void BuildRoom(int room);
	virtual void BuildDoor(int roomFrom, int roomTo);

	virtual Maze* GetMaze();
protected:
	MazeBuilder();
};