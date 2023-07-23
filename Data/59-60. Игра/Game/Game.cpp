#include "Game.h"
using namespace std;


bool CheckMapExtension(string mapFileName)
{
	//									reverse
	size_t extensionIndex = mapFileName.rfind(".txt");
	if (extensionIndex != -1 && mapFileName.length() - 4 == extensionIndex && mapFileName.length() > 4)
		return true;
	else
		return false;
}

//2. Проверяем есть ли такой файл(open)
bool IsFileExist(string mapFileName)
{
	ifstream mapFile;
	mapFile.open(mapFileName);
	if (mapFile.is_open())
	{
		mapFile.close();
		return true;
	}
	else
	{
		return false;
	}
	// Открываем файл (на чтение из файла) ?
	// Если он открылся, то закрываем его и возвращаем правду
	// Если нет, то мы возвращаем ложь
}

void GetMap(Map &map, string mapFileName)
{
	ifstream mapFile;
	map.h = 0;
	map.w = 0;
	mapFile.open(mapFileName);
	string temp;
	while (!mapFile.eof()) // Так нужно пройтись N раз
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

void StartGame(string mapFileName)
{
	Map map;
	CLS;
	GetMap(map, mapFileName);
	// CheckMap()
	// Если у нас какие-то проблемы (Проверить что персонаж 1, проверить что выход 1,
	// проверить что все закрыто стенками, проверить что ключей как минимум больше 0)
	// Если что-то не так из этого списка -> выводите сообщение об ошибке (что конкретно) 
	// и используете функцию exit(1) для завершения работы приложения
	map.DrawMap();
}

// TODO: 2. Проверяем файл на существование
// Написали каркас нашей игры
int main()
{
	setlocale(LC_ALL, "RUS");
	string mapFileName;
	cout << "Введите имя файла с картой в формате .txt: ";
	cin >> mapFileName;
	if (!CheckMapExtension(mapFileName) || !IsFileExist(mapFileName))
	{
		cout << "Файл не подходит или его не существует. Введите файл формата .txt и убедитесь, что он существует.";
		return 1;
	}
	else
	{
		StartGame(mapFileName);
	}
}