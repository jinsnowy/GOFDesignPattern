#pragma once
#include "MapSite.h"
#include "Room.h"
class Wall : public MapSite
{
public:
	Wall();
	virtual Wall* Clone();
	virtual void Enter();
};