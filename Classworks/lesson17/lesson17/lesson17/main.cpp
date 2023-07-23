#include <iostream>
using namespace std;

//////////////////////////////////////////
//										//
//										//
// 	     * * * ФУНКЦИИ * * *			//
//										//
//										//
//////////////////////////////////////////

/*
1. *Напишите функцию, которая принимает целое число, и возвращает его куб.
*/
int Pow3(int n)
{
	int result = n * n * n;
	return result;
}
	
/*
	2. *Напишите функцию, которая принимает два целых числа, и возвращает их сумму.
*/		


int Summ(int a, int b)
{
	int result = a + b;
	return result;
}

/*
3. *Напишите функцию, которая принимает два целых числа, и возвращает их
произведение.
*/

int Umnoj(int a, int b)
{
	int result = a * b;
	return result;
}

/*
4. *Напишите функцию, которая принимает два целых числа, и определяет большее
из них.
*/

int Sravni(int a, int b)
{
	if (a < b)
		return b;
	return a;
}

/*
8. *Напишите функцию, которая принимает одномерный массив целых чисел и
заполняет его случайными числами.

*/

void RandArr(int arr[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
		arr[i] = rand();
}

/*
5. *Напишите функцию, которая принимает три целых числа, и определяет большее
из них.
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
6. *Напишите функцию, которая принимает одномерный массив целых чисел и
возвращает сумму всех чисел.
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
9. *Напишите функцию, которая принимает число и возвращает истину, если число
четное и ложь, если нечетное.
*/
bool IsEven(int n)
{
	return (n % 2 == 0);
}

/*
10. **Написать функцию, которая возвращает истину, если переданное число простое,
и ложь, если не простое. Простое число – это число, которое делиться ТОЛЬКО на
1 и на себя (2, 5, 7, 11 и т.д.).
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
	//	cout << "Четный";
	//else
	//	cout << "Не четный"
	
	
	// *** 10 ***
	//cout << IsPrime(5);
	
}