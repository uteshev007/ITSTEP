#pragma once
#include "Win10.h"
// Map
// Player

struct Map
{
	std::string* map;
	size_t h;
	size_t w;

	void DrawMap()
	{
		SetPos(0, 0);
		for (int i = 0; i < h; i++)
		{
			std::cout << map[i] << std::endl;
		}
	}
};