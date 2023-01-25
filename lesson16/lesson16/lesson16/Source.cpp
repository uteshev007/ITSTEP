#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE 5

int main() {
	setlocale(LC_ALL, "RUS");
	// * * * СОРТИРОВКА ВСТАВКОЙ * * *
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

	// СОРТИРОВКА С КОПИРОВАНИЕМ МАССИВА В ОБРАТНОМ ПОРЯДКЕ


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

	// СОРТИРОВКА БЕЗ ДОПОЛНИТЕЛЬНОГО МАССИВА


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



	// * * * ДВУМЕРНЫЙ МАССИВ * * *


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
1) *Пользователь вводит с клавиатуры числа N и M.
Организуйте заполнение матрицы (двумерного массива) N x M
a) вводом с клавиатуры;
b) случайными значениями;
после чего выведите ее на экран.

*/
//const int N = 3;
//const int M = 3;
//int arr[M][N] = { {0},{0} };

//for (int i = 0; i < M; i++)
//{
//	for (int j = 0; j < N; j++)
//	{	
//		cout << "Введите элемент [" << i << "] [" << j << "] : ";
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
2) *В двумерном массиве целых числе посчитать:
a) сумму всех элементов массива;
b) среднее арифметическое всех элементов массива;
c) минимальный элемент - значение и координаты элемента в массиве - номер строки, столбеца;
d) максимальный элемент - значение и координаты элемента в массиве - номер строки, столбеца.
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
//	cout << "Cумма: " << result << endl;
//	cout << "Cреднее арифметическое: " << result / count << endl;
//	cout << "Минимальное число: " << arr[minY][minX] << ' ' << "По координатам: " << minY << ' ' << minX << endl;
//	cout << "Максимальное число: " << arr[maxY][maxX] << ' ' << "По координатам: " << maxY << ' ' << maxX << endl;

/*
3) **В двумерном массиве целых чисел посчитать сумму элементов:
a) в каждой строке;
b) в каждом столбце;
c) ***одновременно по всем строкам и всем столбцам.
Оформить следующим образом:
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