#pragma once
#include "Maze.h"
#include "MazeFactory.h"
#include "MazeBuilder.h"

class MazeGame
{
public:
	Maze* CreateMaze(MazeFactory&);
	Maze* CreateMaze(MazeBuilder&);
};