#include <iostream>
using namespace std;


/*
3) **�������� ���������, ������� �������� �������, ����������� � �������� ���������,
��������� �� ������ � ������ �������, � �������� ������������� �������� �� 0.
*/
void changeminus(int *arr, int SIZE) 
{
	for (int  i = 0; i < SIZE; i++)
	{
		if (arr[i] < 0)
			arr[i] = 0;
		cout << arr[i] << ' ';
	}
}



void change4( int *arr, int SIZE)		 
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == 4)
			arr[i] = 999;
		cout << arr[i] << ' ';
	}
	
}

int main()
{
	setlocale(0, "rus");
/*
1) **�������� ����������� �����������, ��������� ������ �����������.
*/

	int number1;
	int number2;
	int result;
	char operatr;
	int *p1, *p2, *p3;
	p1 = &number1;
	p2 = &number2;
	p3 = &result;

	cout << "������� 1 �����: ";
	cin >> *p1;
	cout << "������� ��������: +, - , / , * ";
	cin >> operatr;
	cout << "������� 2 �����: ";
	cin >> *p2;

	switch (operatr)
	{
	case '+': *p3 = *p1 + *p2; break;
	case '-': *p3 = *p1 - *p2; break;
	case '*': *p3 = *p1 * *p2; break;
	case '/': *p3 = *p1 / *p2; break;
	}
	cout << "�����: " << *p3 << endl;


/*
2) **�������� ���������, ������� �������� �������, ����������� � �������� ���������,
��������� �� ������ � ������ �������, � �������� ��� ������� 4 �������� �� 999.
*/
	const int SIZE = 10;
	int arr[SIZE] = { -11, 4, 22, 33, 4, 55, 66 , -77, 88, 99 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	change4(arr, SIZE);
	cout << endl;
	changeminus(arr, SIZE);


}