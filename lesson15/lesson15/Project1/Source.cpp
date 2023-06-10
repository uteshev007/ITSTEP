#include <iostream>
using namespace std;
#define SIZE 5

int main()
{
	setlocale(LC_ALL, "RUS");
	
	//// *** ЛИНЕЙНЫЙ ПОИСК ***
	//int arr[SIZE] = { 5,4,3,2,1 };
	//// Пользователь вводит число
	//// Мы либо выдаем индекс элемента
	//// Либо выдаем ошибку, что такого числа нет
	//int n;
	//cout << "Введите логин: ";
	//cin >> n;
	//bool isFinded = false;
	//int nIndex = -1;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (arr[i] == n)
	//	{
	//		isFinded = true;
	//		nIndex = 1;
	//		break;
	//	}
	//}

	//if (isFinded)
	//{
	//	cout << "Ваш номер: " << nIndex;
	//}
	//else
	//{
	//	cout << "Такого номера нет!";
	//}

	// *** БИНАРНЫЙ ПОИСК ***

	//int arr[SIZE * 20];
	//for (int i = 0; i < SIZE * 20; i++)
	//{
	//	arr[i] = i * i;
	//}
	//int l = 0, r = 100, mid, n;
	//cin >> n;
	//while (l < r)	
	//{
	//	cout << "here" << endl;
	//	mid = (l + r) / 2;
	//	if (arr[mid] == n)
	//	{
	//		cout << "Ваш номер: " << mid;
	//		break;
	//	}
	//	else if (n > arr[mid])
	//	{
	//		l = mid;
	//	}
	//	else
	//	{
	//		r = mid + 1;
	//	}
	//}

	// *** СОРТИРОВКА ***


	// *** ПУЗЫРЬКОВАЯ СОРТИРОВКА ***
	//int arr[SIZE] = { 5,4,3,2,1 };
	//

	//for (int i = 0; i < SIZE - 1; i++)
	//{
	//	for (int j = 0; j < SIZE - 1 -i; j++)
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{	
	//			int temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = arr[j];
	//			arr[j + 1] = temp;
	//		}
	//	}
	//}
	//for (int i : arr)
	//{
	//	cout << i << ' ';
	//}


	// *** СОРТИРОВКА ВЫБОРОМ ***

	int arr[SIZE] = { 5,4,3,2,1 };
	bool isSorted = false;
	for (int i = 0; i < SIZE; i++)
	{
		int min = i;
		isSorted = true;
		for (int j = i; j < SIZE; j++)
		{
			if (arr[j] < arr[min])
			{
				isSorted = false;
				min = j;
			}
		}
		if (isSorted)
			break;
		swap(arr[min], arr[i]);
	}
	for (int i : arr)
	{
	cout << i << ' ';
	}			


		
}	