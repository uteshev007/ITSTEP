#include <iostream>
using namespace std;


/*
3) **Написать программу, которая содержит функцию, принимающую в качестве аргумента,
указатель на массив и размер массива, и заменяет отрицательные элементы на 0.
*/
void changeminus(int *arr, int SIZE) 
{
	for (int  i = 0; i < SIZE; i++)
	{
		if (arr[i] < 0)
			arr[i] = 0;
		cout << arr[i] << ' ';
	}
}



void change4( int *arr, int SIZE)		 
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == 4)
			arr[i] = 999;
		cout << arr[i] << ' ';
	}
	
}

int main()
{
	setlocale(0, "rus");
/*
1) **Написать примитивный калькулятор, пользуясь только указателями.
*/

	int number1;
	int number2;
	int result;
	char operatr;
	int *p1, *p2, *p3;
	p1 = &number1;
	p2 = &number2;
	p3 = &result;

	cout << "Введите 1 число: ";
	cin >> *p1;
	cout << "Введите оператор: +, - , / , * ";
	cin >> operatr;
	cout << "Введите 2 число: ";
	cin >> *p2;

	switch (operatr)
	{
	case '+': *p3 = *p1 + *p2; break;
	case '-': *p3 = *p1 - *p2; break;
	case '*': *p3 = *p1 * *p2; break;
	case '/': *p3 = *p1 / *p2; break;
	}
	cout << "Ответ: " << *p3 << endl;


/*
2) **Написать программу, которая содержит функцию, принимающую в качестве аргумента,
указатель на массив и размер массива, и заменяет все кратные 4 элементы на 999.
*/
	const int SIZE = 10;
	int arr[SIZE] = { -11, 4, 22, 33, 4, 55, 66 , -77, 88, 99 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	change4(arr, SIZE);
	cout << endl;
	changeminus(arr, SIZE);


}