#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	// 1. Вывести на экран все числа от нуля до введенного пользователем числа. 

	//cout << "Введите число: ";
	//int chislo;
	//cin >> chislo;
	//int i = 0;
	//while (i <= chislo)
	//{
	//	cout << i << " ";
	//	i++;
	//}
	//cout << endl;

	// 3. Пользователь вводит число. Определить, является ли оно простым. Число называется простым, если оно делится только на себя и на единицу.

	/*cout << "Введите число: ";
	int chislo;
	cin >> chislo;
	if (chislo %= 2)
		cout << "Prostoe" << endl;
	else
		cout << "Ne Prostoe";*/

	// 4. Пользователь вводит две границы диапазона. Посчитать сумму всех чисел диапазона. 

	//cout << "Vvdeite 2 granicy: ";
	//int range1, range2, summ = 0;
	//cin >> range1 >> range2;
	//for (int i = range1; i <= range2; i++) 
	//{
	//	summ = summ + i;
	//	cout << i << " " << endl;

	//}
	//cout << "Summa: " << summ;

	// 5. Пользователь с клавиатуры вводит числа. Посчитать их сумму и вывести на экран, как только пользователь введет ноль.

	cout << "Vvedite chislo: ";
	int chislo = 0, summ = 0;
	cin >> chislo;

	while (chislo >= 1)
	{
	cin >> chislo;
	summ = summ + chislo;

	}
	cout << "Summa: " << summ;
}