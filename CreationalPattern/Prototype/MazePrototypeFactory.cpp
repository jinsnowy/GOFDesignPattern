#include "MazePrototypeFactory.h"

MazePrototypeFactory::MazePrototypeFactory(Maze* m, Wall* w, Room* r, Door* d) {
    // 원본을 초기화
    _prototypeMaze = m;
    _prototypeWall = w;
    _prototypeRoom = r;
    _prototypeDoor = d;
}

Door* MazePrototypeFactory::MakeDoor(Room* r1, Room* r2) const
{
    Door* door = _prototypeDoor->Clone();
    door->Initialize(r1, r2);
    return door;
}

Wall* MazePrototypeFactory::MakeWall() const
{
    return _prototypeWall->Clone();
}

Maze* MazePrototypeFactory::MakeMaze() const
{
    return _prototypeMaze->Clone();
}

Room* MazePrototypeFactory::MakeRoom(int n) const
{
    Room* room = _prototypeRoom->Clone();
    room->SetNumber(n);
    return room;
}

