#include <iostream>
using namespace std;

//////////////////////////////////////////
//										//
//										//
// 	     * * * ������� * * *			//
//										//
//										//
//////////////////////////////////////////

/*
1. *�������� �������, ������� ��������� ����� �����, � ���������� ��� ���.
*/
int Pow3(int n)
{
	int result = n * n * n;
	return result;
}
	
/*
	2. *�������� �������, ������� ��������� ��� ����� �����, � ���������� �� �����.
*/		


int Summ(int a, int b)
{
	int result = a + b;
	return result;
}

/*
3. *�������� �������, ������� ��������� ��� ����� �����, � ���������� ��
������������.
*/

int Umnoj(int a, int b)
{
	int result = a * b;
	return result;
}

/*
4. *�������� �������, ������� ��������� ��� ����� �����, � ���������� �������
�� ���.
*/

int Sravni(int a, int b)
{
	if (a < b)
		return b;
	return a;
}

/*
8. *�������� �������, ������� ��������� ���������� ������ ����� ����� �
��������� ��� ���������� �������.

*/

void RandArr(int arr[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
		arr[i] = rand();
}

/*
5. *�������� �������, ������� ��������� ��� ����� �����, � ���������� �������
�� ���.
*/

int Biggest(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	if (b > a && b > c)
		return b;
	return c;
}

/*
6. *�������� �������, ������� ��������� ���������� ������ ����� ����� �
���������� ����� ���� �����.
*/
int SumArr(int arr[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += arr[i];
	}
		return result;
}

/*
9. *�������� �������, ������� ��������� ����� � ���������� ������, ���� �����
������ � ����, ���� ��������.
*/
bool IsEven(int n)
{
	return (n % 2 == 0);
}

/*
10. **�������� �������, ������� ���������� ������, ���� ���������� ����� �������,
� ����, ���� �� �������. ������� ����� � ��� �����, ������� �������� ������ ��
1 � �� ���� (2, 5, 7, 11 � �.�.).
*/

bool IsPrime(int n)
{
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;
	return true;
}











int main() {
	setlocale(LC_ALL, "RUS");
	// *** 1 ***
	// 
	//int a = Summ(4, 5);
	//cout << a;

	// *** 2 ***
	//int umnojenie = Umnoj(9, 9);
	//cout << umnojenie;

	// *** 3 ***
	/*int sravnenie = Sravni(9, 21);
	cout << sravnenie;*/

	// *** 4 ***
	//int arr[5];
	//RandArr(arr, 5);
	//for (int i : arr)
	//	cout << i << ' ';

	// *** 5 ***
	//int veryBig = Biggest(30, 120, 40);
	//cout << veryBig;

	// *** 6 ***
	/*int arr12[5] = { 1, 2, 3, 4, 5 };
	cout << SumArr(arr12, 5);*/

	// *** 9 ***
	/*cout << IsEven(7) << ' ' << IsEven(4);*/

	//int arr12[5] = { 1, 2, 3, 4, 5 };
	//if (IsEven(arr12[2]))
	//	cout << "������";
	//else
	//	cout << "�� ������"
	
	
	// *** 10 ***
	//cout << IsPrime(5);
	
}