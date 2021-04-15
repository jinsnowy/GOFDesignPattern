#pragma once
#include "../AbstractFactory/MazeFactory.h"

class MazePrototypeFactory : public MazeFactory
{
public:
	// ��������� �������� �ʱ�ȭ
	MazePrototypeFactory(Maze*, Wall*, Room*, Door*) {}

	virtual Maze* MakeMaze() const;
	virtual Room* MakeRoom(int) const;
	virtual Wall* MakeWall() const;
	virtual Door* MakeDoor(Room*, Room*) const;
private:
	Maze* _prototypeMaze = nullptr;
	Room* _prototypeRoom = nullptr;
	Wall* _prototypeWall = nullptr;
	Door* _prototypeDoor = nullptr;
};