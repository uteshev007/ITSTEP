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
35. **Написать функцию, которая принимает указатель на массив и количество элементов.
Функция сжимает массив, удаляя из него элементы большие 20.
Возвращает указатель на новый массив, содержащий только элементы меньшие 20.
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
	50. *Написать программу, которая генерирует случайное число N, 
	создает динамический массив из N элементов, заполняет его случайными числами и выводит на экран.		
	*/

	int n = rand() % 9 + 1;
	cout << "N = " << n << endl;
	int* arrN = new int[n];
	RandArr(arrN, n);
	for (int i = 0; i < n; i++)
		cout << arrN[i] << " ";




	





}