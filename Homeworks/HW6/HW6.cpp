#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
// 1	
	cout << "Введите что-нибудь: ";
	char symbol;
	cin >> symbol;
	if (symbol >= '0' && symbol <= '9')
		cout << "Вы ввели цифру";
	else if (symbol >= 'A' && symbol <= 'Z' || symbol >= 'a' && symbol <= 'z')
		cout << "Вы ввели англ букву";
	else if (symbol >= 'А' && symbol <= 'Ё' || symbol >= 'а' && symbol <= 'ё')
		cout << "Вы ввели русс букву";
	else
		cout << "Вы ввели символ";
	

// 2

	cout << "Введите номер месяца: ";
	int month;
	cin >> month;
	switch (month)
	{
	case 1: cout << "Январь"; break;
	case 2: cout << "Февраль"	; break;
	case 3: cout << "Март"; break;
	case 4: cout << "Апрель"; break;
	case 5: cout << "Май"	; break;
	case 6: cout << "Июнь"; break;
	case 7: cout << "Июль"; break;
	case 8: cout << "Август"; break;
	case 9: cout << "Сентябрь"; break;
	case 10: cout << "Октябрь"; break;
	case 11: cout << "Ноябрь"; break;
	case 12: cout << "Декабрь"; break;
	default: "Нет такого месяца"; break;
	}
	
// 4
	
	cout << "Введите год: ";
	int year;
	cin >> year;
	year = (year - 3) % 12;
	switch (year)
	{
	case 1: cout << "Мышь"; break;
	case 2: cout << "Корова"; break;
	case 3: cout << "Тигр"; break;
	case 4: cout << "Заяц"; break;
	case 5: cout << "Дракон"; break;
	case 6: cout << "Змея"; break;
	case 7: cout << "Лошадь"; break;
	case 8: cout << "Овца"; break;
	case 9: cout << "Обезьяна"; break;
	case 10: cout << "Курица"; break;
	case 11: cout << "Собака"; break;
	case 12: cout << "Свинья"; break;
	default: "Нет такого месяца"; break;
	}


//5

	cout << "Введите порядковый номер дня: ";
	int day;
	cin >> day;
	switch (day)
	{
	case 1: cout << "Понедельник: Работа - Дом - РПО"; break;
	case 2: cout << "Вторник: Работа - Дом - Тренировка"; break;
	case 3: cout << "Среда: Работа - Дом - С++"; break;
	case 4: cout << "Четверг: Работа - Дом - Бассейн"; break;
	case 5: cout << "Пятница: Работа - Дом - С++"; break;
	case 6: cout << "Суббота: Дом - Пить - Спать"; break;
	case 7: cout << "Воскресенье: Дом - Похмелье - Тренировка"; break;
	default: "Нет такого дня"; break;
	}
	

// 21 

	cout << "Введите скорость в км/час: ";
	double kmh, ms;
	cin >> kmh;
	cout << "Введите скорость в м/сек: ";
	cin >> ms;
	kmh /= 3.6;
	if (kmh > ms)
		cout << kmh * 3.6 << " Больше";
	else if (kmh = ms)
		cout << "Скорость равна";
	else
		cout << ms << " Больше";


}