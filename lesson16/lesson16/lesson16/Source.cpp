#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE 5

int main() {
	setlocale(LC_ALL, "RUS");
	// * * * ���������� �������� * * *
	//int arr[SIZE] = { 5,4,3,2,1 };
	//for (int i = 1; i < SIZE; i++)
	//{
	//	for (int j = i; j > 0; j--)
	//	{
	//		if (arr[j] < arr[j-1])
	//		{
	//			swap(arr[j], arr[j - 1]);
	//		}
	//		else
	//		{
	//			break;
	//		}
	//	}
	//}

	//for (int i : arr)
	//{
	//	cout << i << ' ';
	//}

	// ���������� � ������������ ������� � �������� �������


	//int arr[SIZE] = { 4,1,5,3,2 };
	//int arrTemp[SIZE];
	//for (int i = 0; i < SIZE; i++)
	//{
	//	arrTemp[i] = arr[i];
	//}
	//int r;
	//r = SIZE - 1;
	//for (int i = 0; i < SIZE; i++, r--)
	//{
	//	arr[i] = arrTemp[r];
	//}
	//for (int i : arr)
	//{
	//cout << i << ' ';
	//}

	// ���������� ��� ��������������� �������


	//int arr[SIZE] = { 4,1,5,3,2 };
	//int arrTemp[SIZE];
	//int r;
	//for (int l = 0, r = SIZE -1; l < SIZE / 2; l++, r--)
	//{
	//	swap(arr[l], arr[r]);
	//}
	//for (int i : arr)
	//{
	//cout << i << ' ';
	//}



	// * * * ��������� ������ * * *


	//const int N = 4;
	//const int M = 3;

	//int arr[M][N] = { {1,2,3,4}, {1,2,3,4} };
	//for (int i = 0; i < M; i++)
	//{
	//	for (int j = 0; j < N; j++)
	//	{
	//		cout << arr[i][j] << ' ';
	//	}
	//	cout << endl;
	//}

/*
1) *������������ ������ � ���������� ����� N � M.
����������� ���������� ������� (���������� �������) N x M
a) ������ � ����������;
b) ���������� ����������;
����� ���� �������� �� �� �����.

*/
//const int N = 3;
//const int M = 3;
//int arr[M][N] = { {0},{0} };

//for (int i = 0; i < M; i++)
//{
//	for (int j = 0; j < N; j++)
//	{	
//		cout << "������� ������� [" << i << "] [" << j << "] : ";
//		cin >> arr[i][j];
//	}

//}

//for (int i = 0; i < N; i++)
//{
//	for (int j = 0; j < M; j++)
//	{
//		cout << arr[i][j] << ' ';
//	}
//		cout << endl;
//}



/*
2) *� ��������� ������� ����� ����� ���������:
a) ����� ���� ��������� �������;
b) ������� �������������� ���� ��������� �������;
c) ����������� ������� - �������� � ���������� �������� � ������� - ����� ������, ��������;
d) ������������ ������� - �������� � ���������� �������� � ������� - ����� ������, ��������.
*/

//const int N = 3;
//const int M = 3;
//int arr[M][N];
//for (int i = 0; i < M; i++)
//{
//	for (int j = 0; j < N; j++)
//	{
//		arr[i][j] = i * N + j + 1;	
//	}
//}
//for (int i = 0; i < N; i++)
//{
//	for (int j = 0; j < M; j++)
//	{
//		cout << arr[i][j] << ' ';
//	}
//	cout << endl;
//}
//int result = 0;
//double count = N * M;
//int maxX = 0, maxY = 0, minX = 0, minY = 0;

//	for (int y = 0; y < M; y++)
//	{
//		for (int x = 0; x < N; x++)
//		{
//			if (arr[y][x] > arr[maxY][maxX])
//			{
//				maxY = y;
//				maxX = x;
//			}
//			if (arr[y][x] < arr[minY][minX])
//			{
//				minY = y;
//				minX = x;
//			}
//			result += arr[y][x];
//		}
//	}
//	cout << "C����: " << result << endl;
//	cout << "C������ ��������������: " << result / count << endl;
//	cout << "����������� �����: " << arr[minY][minX] << ' ' << "�� �����������: " << minY << ' ' << minX << endl;
//	cout << "������������ �����: " << arr[maxY][maxX] << ' ' << "�� �����������: " << maxY << ' ' << maxX << endl;

/*
3) **� ��������� ������� ����� ����� ��������� ����� ���������:
a) � ������ ������;
b) � ������ �������;
c) ***������������ �� ���� ������� � ���� ��������.
�������� ��������� �������:
  3  5  6  7 | 21
 12  1  1  1 | 15
  0  7 12  1 | 20
------------------
 15 13 19  9 | 56
*/
	const int N = 4;
	const int M = 3;
	int arr[M][N];
	int arrResultX[N] = {0};
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = i * N + j + 1;	
		}
	}
	for (int i = 0; i < M; i++)
	{
		int resultY = 0;
		for (int j = 0; j < N; j++)
		{
			arrResultX[j] += arr[i][j];
			cout << arr[i][j] << ' ' << setw(2);
			resultY += arr[i][j];
		}
		cout << "| " << resultY <<  endl;
	}
	cout << "_______________" << endl;

	for (int i : arrResultX)
		cout << i << ' ';
	cout << endl;
	












}