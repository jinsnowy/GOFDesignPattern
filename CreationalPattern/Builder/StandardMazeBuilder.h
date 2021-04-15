#pragma once
#include "MazeBuilder.h"
class StandardMazeBuilder : public MazeBuilder
{
public:
	StandardMazeBuilder();

	virtual void BuildMaze();
	virtual void BuildRoom(int);
	virtual void BuildDoor(int, int);

	virtual Maze* GetMaze();
private:
	// 두 방 사이의 공통 벽 방향을 반환
	Direction CommonWall(Room*, Room*);
	Maze* _currentMaze;
};

