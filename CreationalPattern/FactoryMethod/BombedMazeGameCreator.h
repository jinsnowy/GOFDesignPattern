#pragma once
#include "MazeGameCreator.h"
#include "../Common/RoomWithABomb.h"
#include "../Common/BombedWall.h"

class BombedMazeGameCreator : MazeGameCreator
{
public:
	BombedMazeGameCreator();
	virtual Wall* MakeWall() const
	{
		return new BombedWall;
	}
	virtual Room* MakeRoom(int n) const
	{
		return new RoomWithABomb(n);
	}
};

