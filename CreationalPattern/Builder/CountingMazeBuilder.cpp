#include "CountingMazeBuilder.h"

CountingMazeBuilder::CountingMazeBuilder()
{
}

void CountingMazeBuilder::BuildRoom(int)
{
	++_rooms;
}

void CountingMazeBuilder::BuildDoor(int, int)
{
	++_doors;
}

void CountingMazeBuilder::GetCounts(int& rooms, int& doors) const
{
	rooms = _rooms;
	doors = _doors;
}

Maze* CountingMazeBuilder::GetMaze()
{
	return nullptr;
}

void CountingMazeBuilder::BuildMaze()
{

}
void CountingMazeBuilder::AddWall(int, Direction)
{
}

