#pragma once
#include "Door.h"
class DoorNeedingSpell :
    public Door
{
public:
    DoorNeedingSpell(Room* r1, Room* r2);
    ~DoorNeedingSpell();
};

