#pragma once
#include "Win10.h"

using namespace std;

struct Coord
{
	int x;
	int y;
};

struct Key
{
	size_t count;
};

struct Player
{
	Coord Position;
	size_t currentNumberOfKeys;
};

struct Map
{
	string* map;
	size_t h = 0;
	size_t w = 0;
	Player player;
	size_t maxNumberOfKeys;

	

	void DrawMap()
	{
		SetPos(0, 0);
		for (int i = 0; i < h; i++)
			cout << map[i] << endl;
	}
};