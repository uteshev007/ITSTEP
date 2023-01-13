#include <iostream>
using namespace std;
#define SIZE 5

// Массив ( Array )

//int main() {
//	const int size = 10;
//	// тип_данных имя_массива[количество элеементов]
//	int arr[size]; 
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//
//  }




int main() {
	setlocale(LC_ALL, "RUS");
/*
1. *Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев.
Пользователь вводит прибыль фирмы за каждый месяц.
*/

	//const int size = 6;
	//int arr[size];
	//int result = 0;
	//for (int i = 0; i < size; i++)
	//{
	//	cin >> arr[i];
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	result += arr[i];
	//}
	//	cout << result;

/*
2. *Написать программу, которая выводит одномерный массив в обратном порядке
*/
	//const int size = 6;
	//int arr[size];
	//for (int i = 0; i < size; i++)
	//{
	//	cin >> arr[i];
	//}

	//for (int i = size -1; i > -1; i--) 
	//{
	//	cout << arr[i] << ' ';
	//}

/*
3. *Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в
массив, необходимо вычислить периметр пятиугольника (периметр - сумма всех сторон).
*/
	//const int side = 5;
	//int p = 0;
	//int arr[side];
	//for (int i = 0; i < side; i++)
	//{
	//	cin >> arr[i];
	//}
	//for (int i = 0; i < side; i++)
	//{
	//	p += arr[i];
	//}
	//	cout << p;

// 5. *В одномерном массиве, заполненном случайными числами, определить минимальный и максимальный элементы
	//const int size = 5;
	//int arr[size];
	//srand(time(0));
	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = rand() % 100;
	//	cout << arr[i] << ' ';
	//}

	//int max = INT_MIN;
	//int min = INT_MAX;

	//for (int i = 0; i < size; i++)
	//{
	//	if (arr[i] < min)
	//		min = arr[i];
	//	if (arr[i] > max)
	//		max = arr[i];
	//}
	//cout << endl << "max = " << max << endl;
	//cout << "min = " << min << endl;

/*
6. **Пользователь вводит прибыль фирмы за год (12 месяцев).
Затем пользователь вводит диапазон (например, 3 и 6 - поиск между 3-м и 6-м месяцем).
Необходимо определить месяц, в котором прибыль была максимальна и месяц,
в котором прибыль была минимальна с учетом выбранного диапазона.

*/
	//const int month = 12;
	//int arr[month];
	//int range1, range2;
	//int max = INT_MIN;
	//int min = INT_MAX;
	//cout << "Введите прибыль за 12 мес: ";
	//for (int i = 0; i < month; i++)
	//{
	//	cin >> arr[i];
	//}
	//cout << "Введите диапозон: ";
	//cin >> range1 >> range2;
	//for (int i = range1 - 1; i < range2; i++)
	//{
	//	if (arr[i] < min)
	//		min = arr[i];
	//	if (arr[i] > max)
	//		max = arr[i];
	//}
	//	
	//cout << endl << "max = " << max << endl;
	//cout << "min = " << min << endl;
	
/*
19. *Напишите программу, которая выполняет поэлементную сумму двух массивов и
результат заносит в третий массив.
*/
	int arr1[SIZE] = { 1, 2, 3, 4, 5 };
	int arr2[SIZE] = { 1, 2, 3, 4, 5 };
	int arr3[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		cout << arr3[i] << ' ';

	}





}




