#include <iostream>
using namespace std;


/*
9. *Описать структуру Rabotnik(Фамилия, должность, дата поступления на работу).
Создать двух работников. Предусмотреть:
- Заполнение работников
- Вывод информации на экран
- Редактирование работника
*/

struct Rabotnik
{
	string name;
	string position;
	size_t since;

	void PrintInfo()
	{
		cout << "ИМЯ: " << name << endl << "ДОЛЖНОСТЬ: " << position << endl << "Работает с: " << since << endl;
	}
};

void addRabotnik()
{
	int currentCount = 0;
	int sizeOfCount = 10;
	if (currentCount < sizeOfCount)
	{
		Rabotnik one;
		cout << "Введите имя нового сотрудника: ";
		cin >> one.name;
		cout << "Введите должность нового сотрудника: ";
		cin >> one.position;
		cout << "Введите дату начало работы нового сотрудника: ";
		cin >> one.since;
		currentCount++;
	}
	else
	{
		cout << "Ошибка при добавлении сотрудника, вы набрали полный штат сотрудников, свободных вакансии - нет!";
	}

}


int main()
{
	setlocale(0, "RUS");
	Rabotnik one{ "Tokaev", "President", 2018 };
	one.PrintInfo();
	addRabotnik();





}
