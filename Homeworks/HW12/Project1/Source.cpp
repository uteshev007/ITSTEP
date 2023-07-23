#include <iostream>
#include <time.h>
using namespace std;

void RandArr(int arr[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
	}
}

void PrintArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

/*
35. **�������� �������, ������� ��������� ��������� �� ������ � ���������� ���������.
������� ������� ������, ������ �� ���� �������� ������� 20.
���������� ��������� �� ����� ������, ���������� ������ �������� ������� 20.
*/

int* func35(int* arr, int& a)
{
	int count = 0;
	for (int i = 0; i < a; i++)
	{
		if (arr[i] < 20)
			count++;
	}
	int* newarr = new int[count];
	int b = 0;
	for (int i = 0; i < a; i++)
	{
		if (arr[i] < 20)
		{
			newarr[b] = arr[i];
			b++;
		}
	}
}

int main() 
{
	setlocale (0, "RUS");

	/*
	50. *�������� ���������, ������� ���������� ��������� ����� N, 
	������� ������������ ������ �� N ���������, ��������� ��� ���������� ������� � ������� �� �����.		
	*/

	int n = rand() % 9 + 1;
	cout << "N = " << n << endl;
	int* arrN = new int[n];
	RandArr(arrN, n);
	for (int i = 0; i < n; i++)
		cout << arrN[i] << " ";




	





}