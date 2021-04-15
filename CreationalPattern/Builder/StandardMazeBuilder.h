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
	// �� �� ������ ���� �� ������ ��ȯ
	Direction CommonWall(Room*, Room*);
	Maze* _currentMaze;
};

