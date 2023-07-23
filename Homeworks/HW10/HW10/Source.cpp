#define SIZE 5
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
/*
1) *Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в массив, 
необходимо вычислить периметр пятиугольника (периметр – сумма всех сторон).
*/

	int p = 0;
	int arr[SIZE] = { 0 };
	cout << "Введите стороны пятиугольника: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
		p += arr[i];
	}
	cout << "Периметр: " << p << endl;

/*
2) *В одномерном массиве, заполненном случайными числами, определить минимальный и максимальный элементы */

	int arr[SIZE * 2];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	int min = arr[0];
	int max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
		cout << endl << "Минимальный элемент: " << min; 
		cout << endl << "Максимальный элемент: " << max << endl;


/*
3) **Пользователь вводит прибыль фирмы за год (12 месяцев).
Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль была минимальна.
*/
	int arr[(SIZE * 2) + 2];
	cout << "Введите прибыль по месяцам: " << endl;
	string month[(SIZE * 2) + 2] = {"Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябрь","Декабрь"};
	for (int i = 0; i < (SIZE * 2) + 2; i++)
	{	
		arr[i]= rand() % 100;
		cout << month[i] << " = " << arr[i] << endl;
		
	}
	int min = arr[0];
	int max = arr[0];
	string minMonth;
	string maxMonth;
	for (int i = 0; i < (SIZE * 2) + 2; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			minMonth = month[i];
		}
		if (arr[i] > max)

		{
			max = arr[i];
			maxMonth = month[i];
		}
	}
	cout << "Минимальная прибыль: " << minMonth << " " << min << endl;
	cout << "Максимальная прибыль: " << maxMonth << " " << max;

	



}