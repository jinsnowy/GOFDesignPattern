#pragma once
#include "MazeFactory.h"
#include "../Common/BombedWall.h"
#include "../Common/RoomWithABomb.h"

class BombedMazeFactory : public MazeFactory
{
public:
	BombedMazeFactory();
	Wall* MakeWall() const override 
	{
		return new BombedWall();
	}
	Room* MakeRoom(int n) const override 
	{
		return new RoomWithABomb(n);
	}
};