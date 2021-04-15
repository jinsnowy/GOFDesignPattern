#pragma once
#include "Room.h"
class EnchantedRoom :
    public Room
{
public:
    EnchantedRoom(int n, class Spell*);
    ~EnchantedRoom();
};

