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

//2. ��������� ���� �� ����� ����(open)
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
	// ��������� ���� (�� ������ �� �����) ?
	// ���� �� ��������, �� ��������� ��� � ���������� ������
	// ���� ���, �� �� ���������� ����
}

void GetMap(Map &map, string mapFileName)
{
	ifstream mapFile;
	map.h = 0;
	map.w = 0;
	mapFile.open(mapFileName);
	string temp;
	while (!mapFile.eof()) // ��� ����� �������� N ���
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
	// ���� � ��� �����-�� �������� (��������� ��� �������� 1, ��������� ��� ����� 1,
	// ��������� ��� ��� ������� ��������, ��������� ��� ������ ��� ������� ������ 0)
	// ���� ���-�� �� ��� �� ����� ������ -> �������� ��������� �� ������ (��� ���������) 
	// � ����������� ������� exit(1) ��� ���������� ������ ����������
	map.DrawMap();
}

// TODO: 2. ��������� ���� �� �������������
// �������� ������ ����� ����
int main()
{
	setlocale(LC_ALL, "RUS");
	string mapFileName;
	cout << "������� ��� ����� � ������ � ������� .txt: ";
	cin >> mapFileName;
	if (!CheckMapExtension(mapFileName) || !IsFileExist(mapFileName))
	{
		cout << "���� �� �������� ��� ��� �� ����������. ������� ���� ������� .txt � ���������, ��� �� ����������.";
		return 1;
	}
	else
	{
		StartGame(mapFileName);
	}
}