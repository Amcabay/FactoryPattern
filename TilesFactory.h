#pragma once
#include "Tiles.h"

class TileFactory
{
public:
	Tiles* getTile(string type)
	{
		if (type == "TILE")
		{
			return new OrdinaryTile();
		}
		else if (type == "ROCKET")
		{
			return new Rocket();
		}
		else if (type == "BOMB")
		{
			return new Bomb();
		}
		else if (type == "RUBICK")
		{
			return new Rubick();
		}
	}
};