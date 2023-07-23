#include <iostream>
using namespace std;
int main()
{
// 7 
	setlocale(LC_ALL, "RUS");
	
	int a, b;
	cout << "Введите 2 числа: ";
	cin >> a >> b;
	if (a == b) {
		cout << "Равны";
	}
	else
	{
		cout << "Не равны";
	}

// 10
	int c, d, e;
	cout << "Введите 2 числа: ";
	cin >> c >> d;
	e = c + d;
	if (e > 0) {
		cout << "Сумма: " << e;
	}
	else
	{	
		e = (c) - (d);
		cout << "Разность: " << e;
	}

// 11
	cout << "Введите 5 оценок студента: ";
	float ocenka, ocenka1, ocenka2, ocenka3, ocenka4, ocenka5;
	cin >> ocenka1 >> ocenka2 >> ocenka3 >> ocenka4 >> ocenka5;
	ocenka = (ocenka1 + ocenka2 + ocenka3 + ocenka4 + ocenka5) / 5;
	if (ocenka >= 4) {
		cout << "Вы допущены: ";
	}
	else
	{
		cout << "Вы не допущены: ";
	}
	

// 16
	cout << "Введите номер месяца: ";
	int mesyac;
	cin >> mesyac;
	
	if (mesyac == 12 || mesyac == 1 || mesyac == 2 ) {
		cout << "Зима";
	}
	else if (mesyac == 3 || mesyac == 4 || mesyac == 5) {
		cout << "Весна";			    
	}								    
	else if (mesyac == 6 || mesyac == 7 || mesyac == 8) {
		cout << "Лето";				    
	}								    
	else if (mesyac == 9 || mesyac == 10 || mesyac == 11) {
		cout << "Осень";
	}
	else
	{
		cout << "Нет такого месяца ";
	}

// 29

	cout << "Введите стороны треугольника: ";
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b || b == c)
		cout << "Равнобедреный";
	else
		cout << "Разнобедренный";

// 33
	
	cout << "Введите стороны треугольника: ";
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c)
		cout << "Существует";
	else
		cout << "Не существует";
		
}