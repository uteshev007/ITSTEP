#include <iostream>
using namespace std;


/*
9. *������� ��������� Rabotnik(�������, ���������, ���� ����������� �� ������).
������� ���� ����������. �������������:
- ���������� ����������
- ����� ���������� �� �����
- �������������� ���������
*/

struct Rabotnik
{
	string name;
	string position;
	size_t since;

	void PrintInfo()
	{
		cout << "���: " << name << endl << "���������: " << position << endl << "�������� �: " << since << endl;
	}
};

void addRabotnik()
{
	int currentCount = 0;
	int sizeOfCount = 10;
	if (currentCount < sizeOfCount)
	{
		Rabotnik one;
		cout << "������� ��� ������ ����������: ";
		cin >> one.name;
		cout << "������� ��������� ������ ����������: ";
		cin >> one.position;
		cout << "������� ���� ������ ������ ������ ����������: ";
		cin >> one.since;
		currentCount++;
	}
	else
	{
		cout << "������ ��� ���������� ����������, �� ������� ������ ���� �����������, ��������� �������� - ���!";
	}

}


int main()
{
	setlocale(0, "RUS");
	Rabotnik one{ "Tokaev", "President", 2018 };
	one.PrintInfo();
	addRabotnik();





}
