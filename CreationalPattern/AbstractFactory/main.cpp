#include "EnchantedMazeFactory.h"
#include "BombedMazeFactory.h"
#include "../Common/MazeGame.h"

int main()
{
    MazeGame game;

    // concrete factory to produce concrete products
    BombedMazeFactory factory;
    Maze* myMaze = game.CreateMaze(factory);

    return 0;
}
