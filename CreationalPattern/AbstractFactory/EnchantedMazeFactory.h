#pragma once
#include "MazeFactory.h"
#include "../Common/EnchantedRoom.h"
#include "../Common/DoorNeedingSpell.h"

class EnchantedMazeFactory : public MazeFactory
{
public:
	EnchantedMazeFactory();
	Room* MakeRoom(int n) const override
	{
		return new EnchantedRoom(n, CastSpell());
	}
	Door* MakeDoor(Room* r1, Room* r2) const override
	{
		return new DoorNeedingSpell(r1, r2);
	}
protected:
	class Spell* CastSpell() const;
};

