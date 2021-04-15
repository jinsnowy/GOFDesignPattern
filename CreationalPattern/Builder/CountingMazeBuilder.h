#pragma once
#include "MazeBuilder.h"
class CountingMazeBuilder : public MazeBuilder
{
public:
	CountingMazeBuilder();
	
	virtual void BuildMaze();
	virtual void BuildRoom(int);
	virtual void BuildDoor(int, int);
	virtual void AddWall(int, Direction);

	void GetCounts(int&, int&) const;
	virtual Maze* GetMaze();
private:
	int _doors = 0;
	int _rooms = 0;
};