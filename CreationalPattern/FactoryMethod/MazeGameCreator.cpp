#include "MazeGameCreator.h"

Maze* MazeGameCreator::CreateMaze()
{
	// 팩토리 메서드를 이용한 객체 생성
	Maze* aMaze = MakeMaze();
	Room* r1 = MakeRoom(1);
	Room* r2 = MakeRoom(2);
	Door* aDoor = MakeDoor(r1, r2);

	aMaze->AddRoom(r1);
	aMaze->AddRoom(r2);

	r1->SetSide(North, MakeWall());
	r1->SetSide(South, aDoor);
	r1->SetSide(South, MakeWall());
	r1->SetSide(West, MakeWall());

	r2->SetSide(North, MakeWall());
	r2->SetSide(South, MakeWall());
	r2->SetSide(South, MakeWall());
	r2->SetSide(West, aDoor);

	return aMaze;
}