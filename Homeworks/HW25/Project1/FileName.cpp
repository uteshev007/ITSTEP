#include <iostream>
using namespace std;

int symCounter(char* stroka, char c)
{
	int result = 0;
	for (int i = 0; i < stroka[i] != '\0'; i++)
	{
		if (stroka[i] == c)
			result++;
	}
	return result;
}

int main()
{
	setlocale(0, "ru");
/*
1. *Написать программу, которая заменяет все символы вопросительного знака '?' в строке, 
введенной пользователем, на символы '1'.
*/
	char* stroka = new char[100];
	cout << "Введите текст: ";
	cin.getline(stroka, 100);
	for (int i = 0; i < stroka[i] != '\0'; i++)
	{
		if (stroka[i] == '?')
			stroka[i] = '1';
	}
	cout << stroka;

/*
2. *Пользователь вводит строку, посчитать, сколько в ней символов "%".
*/
	int sum = 0;
	for (int i = 0; i < stroka[i] != '\0'; i++)
	{
		if (stroka[i] == '%')
			sum++;
	}
	cout << endl << sum << endl;

/*
3. **Пользователь вводит строку символов и искомый символ, посчитать сколько раз он встречается в строке.
Для этого написать функцию, которая подсчитывает сколько раз встречается заданный символ в строке.
*/

	char* c = new char[100];
	cout << "введите искомый символ: ";
	cin.getline(c, 100);
	cout << symCounter(stroka, *c);






}