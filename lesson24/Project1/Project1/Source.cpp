#include "Game.h"
using namespace std;

/********** G A M E # 1 **********/

bool CheckMapExtension(string mapFileName)
{
	size_t extensionIndex = mapFileName.rfind(".txt");
	if (extensionIndex != -1 && mapFileName.length() - 4 == extensionIndex && extensionIndex != 0)
		return true;
	else
		return false;
}

void GetMap(Map &map, string mapFileName)
{
	ifstream mapFile;
	map.h = 0;
	map.w = 0;
	mapFile.open(mapFileName);
	string temp;
	while (!mapFile.eof())
	{
		getline(mapFile, temp);	
		map.w = temp.length();
		map.h++;
	}
	string* tempMap = new string[map.h];
	mapFile.close();
	mapFile.open(mapFileName);
	int i = 0;
	while (!mapFile.eof())
	{
		getline(mapFile, temp);
		tempMap[i] = temp;
		i++;
	}
	mapFile.close();
	map.map = tempMap;

}

Coord FindPlayer(Map &map)
{
	Coord playerPosition{ 0,0 };
	for (int  i = 0; i < map.h; i++)
	{
		int playerX = map.map[i].find('P');
		if (playerX != -1)
		{
			playerPosition.x = playerX;
			playerPosition.y = i;
			return playerPosition;
		}
	}
	return playerPosition;
}
bool CheckNextPosition(Coord nextPosition, Map map)
{
	return(map.map[nextPosition.y][nextPosition.x] == '#');
}

void HandleTranslation(Coord nextPosition, Map &map)
{
	switch (map.map[nextPosition.y][nextPosition.x])
	{
	case 'K':
		swap(map.map[map.player.Position.y][map.player.Position.x], map.map[nextPosition.y][nextPosition.x]);
		map.map[map.player.Position.y][map.player.Position.x] = ' ';
		map.player.Position = nextPosition;
	default:
		swap(map.map[map.player.Position.y][map.player.Position.x], map.map[nextPosition.y][nextPosition.x]);
		map.player.Position = nextPosition;
		map.player.currentNumberOfKeys++;
		break;
	}
		map.DrawMap();
	
}

void StartGame(string mapFileName)
{
	bool isActive = true;
	Map map;
	map.maxNumberOfKeys = 1;
	map.player.currentNumberOfKeys = 0;
	CLS;
	GetMap(map, mapFileName);
	//CheckMap();
	//Если у нас какие-то проблемы( Проверить что персонаж 1, проверить что выход 1
	// Проверить что все закрыто стенами, проверить что ключей как минимум больше 0
	//Если что-то не так из этого списка -> выводите сообщение об ошибке (что конкрентно)
	//и используете функцию exit(1) для завершения работы приложения

	CursorHide(FALSE, 100);
	map.DrawMap();
	map.player.Position = FindPlayer(map);
	while (isActive)
	{
		if (_kbhit())
		{	
			int key = _getch();
			switch (key)
			{
			case _KEY::ESC:
				isActive = false;
				break;
			case _KEY::RIGHT:
			case 'd':
			case 'D':
			case 'в':
			case 'В':
				if (CheckNextPosition(Coord{ map.player.Position.x+1 , map.player.Position.y }, map))
					break;
				HandleTranslation(Coord{ map.player.Position.x+1 , map.player.Position.y }, map);
					break;
				break;
			case _KEY::LEFT:
			case 'a':
			case 'A':
			case 'ф':
			case 'Ф':
				if (CheckNextPosition(Coord{ map.player.Position.x - 1 , map.player.Position.y }, map))
					break;
				HandleTranslation(Coord{ map.player.Position.x - 1 , map.player.Position.y }, map);
				break;
			case _KEY::UP:
			case 'w':
			case 'W':
			case 'ц':
			case 'Ц':
				if (CheckNextPosition(Coord{ map.player.Position.x , map.player.Position.y - 1 }, map))
					break;
				HandleTranslation(Coord{ map.player.Position.x , map.player.Position.y - 1}, map);
				break;
			case _KEY::DOWN:
			case 's':
			case 'S':
			case 'ы':
			case 'Ы':
				if (CheckNextPosition(Coord{ map.player.Position.x , map.player.Position.y + 1 }, map))
					break;
				HandleTranslation(Coord{ map.player.Position.x , map.player.Position.y + 1 }, map);
				break;
			default:
				break;
			}
		}
	}
}


bool IsFileExist(string mapFileName)
{
	ifstream File;
	File.open(mapFileName);
	if (File.is_open())
	{
		File.close();
		return true;
	}
	else
		return false;
}

int main()
{
	setlocale(0, "rus");
	string mapFileName;
	cout << "Введите имя файла с картой в формате .txt: ";
	cin >> mapFileName;
	if (!CheckMapExtension(mapFileName) || !IsFileExist(mapFileName))
	{
		cout << "Вы ввели невалидную карту";
		return 1;
	}
	else
	{
		StartGame(mapFileName);


	}

}