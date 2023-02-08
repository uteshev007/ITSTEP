#include <iostream>
using namespace std;

				// * * * ФУНКЦИИ * * * // * * * FUNKCII * * * //
	/*
	14. **Написать функцию, которая принимает целое шестизначное число и проверяет
	равна ли сумма первых трех цифр сумме последних трех цифр(счастливый билет).
	Функция возвращает истину, если число счастливое (суммы равны) и ложь, если не
	счастливое (суммы не равны).
	*/
/*
int DigitsCounter(int n)
{
	int count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
}

bool Is6D(int n)
{
	int count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return count == 6 ? true : false;
}

bool LuckyTicket(int n)
{
	// Proverit' chto chislo 6 znachnoe
	if (!Is6D(n))
		return false;
	
	// My kak-to razdelyaem chislo na massiv
	const int size = 6;
	int arr[size];
	int i = size - 1;
	while (n > 0)
	{
		arr[i] = n % 10;
		i--;
		n /= 10;
	}

	
	// Sravnit' obe storony
	if (arr[0] + arr[1] + arr[2] == arr[3] + arr[4] + arr[5])
		return true;
	else
		return false;

}
*/

/*
	15. **Написать функцию, которая принимает одномерный массив целых чисел и 
	возвращает значения максимального числа в этом массиве. 
*/
/*
int ArrMax(int arr[], int size)
{
	int result = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > result)
			result = arr[i];
	}
	return result;
}
*/

/*
	28. * Напишите функцию, которая принимает размеры прямоугольника и выводит на
	экран прямоугольник из звездочек.
*/

//void Rectangle(int w, int h)
//{
//	for (int i = 0; i < w; i++)
//	{
//		for (int j = 0; j < h; j++)
//		{
//		cout << " * ";
//		}
//		cout << endl;
//	}
//}


//  * * * FUNKCIYA RANDOMNOGO ZAPOLNENIYA MASSIVA* * *


void RandArr(int arr[], int size)
{
	srand(time(0));
	for (int  i = 0; i < size; i++)
	{
		arr[i] = rand();
	}
}


// * * * FUNKCIYA PECHATI I LINEINOGO POISKA PO MASSIVU

void PrintArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}



int LinearSearch(int arr[], int size, int value)
{
	
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value)
			return i;
	}
	return -1;
}

int BinarySearch(int arr[], int size, int value)
{
	int low = 0, high = size - 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == value)
		{
			return mid;
		}
		else if (arr[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
}

int main() {

	// 14 
	//cout << LuckyTicket(123402);

	// 15
	/*int arr[5] = { 1, 2, 4, 6, 8 };
	cout << ArrMax(arr,5);*/

	//28 
	//Rectangle(4,3);

	// funkciya randomit elementy massiva
	/*
	int arr[5];
	RandArr(arr, 5);
	for (int i : arr)
		cout << i << " ";
	*/

	// funkciya pechati i funciya lineinogo poiska po massivu
	/*
	int arr[5] = {1,2,5,4,3};
	cout << LinearSearch(arr, 5, 5);
	RandArr(arr, 5);
	*/
	// binatysearch
	int arr[5] = { 1,2,5,4,3 };
	int n = sizeof(arr) / sizeof(arr)




}