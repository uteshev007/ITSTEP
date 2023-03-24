#pragma once
#include "Win10.h"

using namespace std;

struct Map
{
	string* map;
	size_t h = 0;
	size_t w = 0;

	void DrawMap()
	{
		SetPos(0, 0);
		for (int i = 0; i < h; i++)
			cout << map[i] << endl;
	}
};