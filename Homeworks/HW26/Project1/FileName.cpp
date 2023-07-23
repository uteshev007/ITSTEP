#include <iostream>
using namespace std;

void zadacha1() 
{
	
}

int main()
{
	setlocale(0, "rus");

	/*
	1) *Написать программу, которая вычисляет сумму четных элементов массива,
	используя ДВА указателя на массив целых чисел. Первый указатель двигается с
	начала массива, второй - с конца.
	*/
	const int size = 10;
	int arr[size] = { 4, 8, 11, 16, 23, 21 , 65, 20, 18, 41 };
	int summ = 0;
	int* pStartArr = arr;
	int* pEndArr = arr + (size - 1);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	while (pStartArr <= pEndArr)
	{
		if (*pStartArr % 2 == 0)
		{
			summ += *pStartArr;
			cout << *pStartArr << " ";
		}
			pStartArr++;
			
		if (*pEndArr % 2 == 0)
		{
			summ += *pEndArr;
			cout << *pEndArr << " ";
		}
			pEndArr--;
	}
	cout << endl << "Summa: " << summ << endl;


/*
2) **Написать программу, которая вычисляет сумму элементов массива с номерами
кратными трем, используя ДВА указателя на массив целых чисел. Первый
указатель двигается с начала массива, второй - с конца.
*/

	int summ2 = 0;
	int* pbegin = arr;
	int* pend = arr + (size - 1);
	while (pbegin <= pend)
	{
		if(*pbegin % 3 == 0)
		{
			summ2 += *pbegin;
			cout << *pbegin << " ";
		}
		pbegin++;
		if (*pend % 3 == 0)
		{
			summ2 += *pend;
			cout << *pend << " ";
		}
		pend--;
	}
		cout << endl <<"Summa2: " << summ2;

}