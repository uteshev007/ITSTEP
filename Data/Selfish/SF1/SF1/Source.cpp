#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	// 1. ������� �� ����� ��� ����� �� ���� �� ���������� ������������� �����. 

	//cout << "������� �����: ";
	//int chislo;
	//cin >> chislo;
	//int i = 0;
	//while (i <= chislo)
	//{
	//	cout << i << " ";
	//	i++;
	//}
	//cout << endl;

	// 3. ������������ ������ �����. ����������, �������� �� ��� �������. ����� ���������� �������, ���� ��� ������� ������ �� ���� � �� �������.

	/*cout << "������� �����: ";
	int chislo;
	cin >> chislo;
	if (chislo %= 2)
		cout << "Prostoe" << endl;
	else
		cout << "Ne Prostoe";*/

	// 4. ������������ ������ ��� ������� ���������. ��������� ����� ���� ����� ���������. 

	//cout << "Vvdeite 2 granicy: ";
	//int range1, range2, summ = 0;
	//cin >> range1 >> range2;
	//for (int i = range1; i <= range2; i++) 
	//{
	//	summ = summ + i;
	//	cout << i << " " << endl;

	//}
	//cout << "Summa: " << summ;

	// 5. ������������ � ���������� ������ �����. ��������� �� ����� � ������� �� �����, ��� ������ ������������ ������ ����.

	cout << "Vvedite chislo: ";
	int chislo = 0, summ = 0;
	cin >> chislo;

	while (chislo >= 1)
	{
	cin >> chislo;
	summ = summ + chislo;

	}
	cout << "Summa: " << summ;
}