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

void StartGame(string mapFileName)
{
	Map map;
	CLS;
	GetMap(map, mapFileName);
	//CheckMap();
	//���� � ��� �����-�� ��������( ��������� ��� �������� 1, ��������� ��� ����� 1
	// ��������� ��� ��� ������� �������, ��������� ��� ������ ��� ������� ������ 0
	//���� ���-�� �� ��� �� ����� ������ -> �������� ��������� �� ������ (��� ����������)
	//� ����������� ������� exit(1) ��� ���������� ������ ����������
	map.DrawMap();
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
	cout << "������� ��� ����� � ������ � ������� .txt: ";
	cin >> mapFileName;
	if (!CheckMapExtension(mapFileName) || !IsFileExist(mapFileName))
	{
		cout << "�� ����� ���������� �����";
		return 1;
	}
	else
	{
		StartGame(mapFileName);


	}

}