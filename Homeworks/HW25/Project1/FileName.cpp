#include <iostream>
using namespace std;

int symCounter(char* stroka, char c)
{
	int result = 0;
	for (int i = 0; i < stroka[i] != '\0'; i++)
	{
		if (stroka[i] == c)
			result++;
	}
	return result;
}

int main()
{
	setlocale(0, "ru");
/*
1. *�������� ���������, ������� �������� ��� ������� ��������������� ����� '?' � ������, 
��������� �������������, �� ������� '1'.
*/
	char* stroka = new char[100];
	cout << "������� �����: ";
	cin.getline(stroka, 100);
	for (int i = 0; i < stroka[i] != '\0'; i++)
	{
		if (stroka[i] == '?')
			stroka[i] = '1';
	}
	cout << stroka;

/*
2. *������������ ������ ������, ���������, ������� � ��� �������� "%".
*/
	int sum = 0;
	for (int i = 0; i < stroka[i] != '\0'; i++)
	{
		if (stroka[i] == '%')
			sum++;
	}
	cout << endl << sum << endl;

/*
3. **������������ ������ ������ �������� � ������� ������, ��������� ������� ��� �� ����������� � ������.
��� ����� �������� �������, ������� ������������ ������� ��� ����������� �������� ������ � ������.
*/

	char* c = new char[100];
	cout << "������� ������� ������: ";
	cin.getline(c, 100);
	cout << symCounter(stroka, *c);






}