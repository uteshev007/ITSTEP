#define SIZE 5
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
/*
1) *������������ ������ ����� ������ �������������, ������ ������� ���������� � ������, 
���������� ��������� �������� ������������� (�������� � ����� ���� ������).
*/

	int p = 0;
	int arr[SIZE] = { 0 };
	cout << "������� ������� �������������: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
		p += arr[i];
	}
	cout << "��������: " << p << endl;

/*
2) *� ���������� �������, ����������� ���������� �������, ���������� ����������� � ������������ �������� */

	int arr[SIZE * 2];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
		cout << endl << "����������� �������: " << min; 
		cout << endl << "������������ �������: " << max << endl;


/*
3) **������������ ������ ������� ����� �� ��� (12 �������).
���������� ���������� �����, � ������� ������� ���� ����������� � �����, � ������� ������� ���� ����������.
*/
	int arr[(SIZE * 2) + 2];
	cout << "������� ������� �� �������: " << endl;
	string month[(SIZE * 2) + 2] = {"������","�������","����","������","���","����","����","������","��������","�������","������","�������"};
	for (int i = 0; i < (SIZE * 2) + 2; i++)
	{	
		arr[i]= rand() % 100;
		cout << month[i] << " = " << arr[i] << endl;
		
	}
	int min = arr[0];
	int max = arr[0];
	string minMonth;
	string maxMonth;
	for (int i = 0; i < (SIZE * 2) + 2; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			minMonth = month[i];
		}
		if (arr[i] > max)

		{
			max = arr[i];
			maxMonth = month[i];
		}
	}
	cout << "����������� �������: " << minMonth << " " << min << endl;
	cout << "������������ �������: " << maxMonth << " " << max;

	



}