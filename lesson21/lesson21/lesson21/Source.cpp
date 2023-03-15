#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

void DoubleRandArr(double arr[], double size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = static_cast<double>(rand()) / RAND_MAX;
	}
}


void DoublePrintArr(double arr[], double size)
{
	for (int i = 0; i < size; i++)
		cout << round(arr[i] * 10) / 10.0 << " ";
}

void RandArr(int arr[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 12 + 1;
	}
}

void PrintArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

}

double count_percentage(int* arr, int size, int x) 
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) == x)
			count++;
	}
	double percentage = (static_cast<double>(count) / size) * 100.0;
	return percentage;
}

void Rate5(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if ((arr[i] >= 1) && (arr[i] <= 3)) arr[i] = 2;
		else if ((arr[i] >= 4) && (arr[i] <= 6)) arr[i] = 3;
		else if ((arr[i] >= 7) && (arr[i] <= 9)) arr[i] = 4;
		else arr[i] = 5;
		cout << arr[i] << " ";
	}
}

int ZeroCounter(int* arr, int size)
{

	int result = 0;
	while (size> 0)
	{
		if (*arr == 0)
			result++;
		arr++;
		size--;
	}
	return result;
}
int* func33(int* arr, int size)
{
	int zeros = ZeroCounter(arr, size);
	int* result = new int[size - zeros];
	int* temp = result;
	while (size > 0)
	{
		if (*arr != 0)
		{
		*temp = *arr;
		temp++;
		}
		arr++;
		size--;
	}
	return result;;
}



int main()
{
	setlocale(LC_ALL, "RUS");
	/*
	13) Запросить у пользователя размерность для одномерного массива вещественных чисел.
	Динамически создать такой массив и заполнить его случайными числами в диапазоне от 0 до 1. 
	*/

	//int a;
	//cout << "Введите размерность массива: ";
	//cin >> a;
	//double* arr = new double[a];
	//DoubleRandArr(arr, a);
	//DoublePrintArr(arr, a);
	//return 0;

	/*
	10) Создать массив из N целых чисел, N вводит пользователь.
	Заполнить массив случайным образом в диапазоне от 1 до 12.
	Каждое число это оценка по 12 бальной системе.
	Пользуясь указателем на массив целых чисел, посчитать процент двоек, троек, четверок и пятерок.
	Двойка от 1 до 3 включительно, тройка от 4 до 6, четверка от 7 до 9, пятерка от 10 до 12. 
	*/

	int a;
	cout << "Введите размерность массива: ";
	cin >> a;
	int* arr = new int [a];
	RandArr(arr, a);
	PrintArr(arr, a);
	cout << endl;
	Rate5(arr, a);

	/*
	33. **Написать функцию, которая принимает указатель на массив и количество элементов.
	Функция сжимает массив, удаляя из него элементы равные 0.
	Возвращает указатель на новый массив, не содержащий 0.
	*/

	int arr[] = { 1, 0, 2, 0 };
	int* result;
	result = func33(arr, 4);
	for (int i = 0; i < 2; i++)
	{
		cout << result[i] << ' ';
	}


}


