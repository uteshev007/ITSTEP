#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{

	setlocale(LC_ALL, "RUS");

/*
1)* ������������ ������ ��� ������� ���������, ������� �� ����� ��� ����� �� ����� ���������.
�������������, ����� ������������ ��� ������� ������� ��������� � ������������ �������. */


	cout << "������� ��������: ";
	int range1, range2;
	cin >> range1 >> range2;
	int counter = range1;
	if (range1 < range2)
	{
		while (counter <= range2)
			{
				cout << counter << " ";
				counter++;
			}

	}
	else
	{
		int counter = range1;
		while (counter >= range2)
		{
			cout << counter << " ";
			counter--;
		}
	}


//a) ������� ��� ������ ����� �� ���������;
	
	
	cout << "������� ��������: ";
	int range1, range2;
	cin >> range1 >> range2;
	int counter = range1;
	while (counter <= range2)
	{
		counter++;
			if (counter % 2 == 0)
			{
				cout << counter << " ";

			}
	}


// c) ������� ��� �����, ������� ����.

	cout << "������� ��������: ";
	int range1, range2;
	cin >> range1 >> range2;
	int counter = range1;
	while (counter <= range2)
	{
		counter++;
		if (counter % 7 == 0)
			cout << counter << " ";
	}


//	3a)* ������� �� ����� ������������� � ��������� ��������� �������� ��������.
	cout << "������� ������� �������������� � ������� A B: ";
	int a, b;
	cin >> a >> b;
	cout << "������� ������^ ";
	char sym;
	cin >> sym;
	for (int i = 0; i < a; ++i) 
	cout << sym;
	cout << endl;
	for (int i = 0; i < b - 2; ++i) 
	{
		cout << sym;
		for (int j = 0; j < a - 2; ++j) 
		cout << ' ';
		cout << sym << endl;
	}
	if (b > 1) 
	{
		for (int i = 0; i < a; ++i) 
		cout << sym;
		cout << endl;
	}
}