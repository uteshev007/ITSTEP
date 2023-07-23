#include <iostream>
using namespace std;
int main()
{
	setlocale (LC_ALL, "RUS");
// 11.
	cout << "Введите 3 числа ";
	int a, b, c;
	cin >> a >> b >> c;
	cout << "Cумма: " << (a + b + c) << ", среднее значение: " << (a + b + c) / 3 << "\n" "\n";

// 24.
	cout << "Введите 5 оценок студента ";
	int gpa1, gpa2, gpa3, gpa4, gpa5;
	cin >> gpa1 >> gpa2 >> gpa3 >> gpa4 >> gpa5;
	cout << "Cредний балл студента: " << (gpa1 + gpa2 + gpa3 + gpa4 + gpa5) / 5 << "\n" "\n";

// 42.
	cout << "Введите число контактов: ";
	int contakty;
	cin >> contakty;
	cout << "Среднее время (мин) потраченное на общение с каждым: ";
	int vremya;
	cin >> vremya;
	double razgovor = vremya * contakty;
	double chas = razgovor /60;
	cout << "Вы тратите на разговоры : " << int(chas) << " часа " << (chas - int(chas)) * 60 <<" минут" << endl;
	cout << "Вы работаете только: " << int(450 - (chas - int(chas))) / 60 << " часа " << 30 - ((chas - int(chas)) * 60)  << " минут" << "\n" "\n";


// 12.
	float sumnout, kolnout, skidka;
	cout << "Введите стоимость ноутбука: ";
	cin >> sumnout;
	cout << "Введите количество: ";
	cin >> kolnout;
	cout << "Введите процент скидки: ";
	cin >> skidka;
	cout << "Общая сумма заказа: " << (sumnout * kolnout) - (sumnout * kolnout * (skidka / 100)) << "\n" "\n";


// 29.
	double drob, drob1, drob2;
	cout << "Введите дробь: ";
	cin >> drob >> drob1 >> drob2;
	cout << "В десятичном виде: " << int(drob) + drob1 / drob2 << "\n" "\n";

// 23.
	int shirina, dlina, glubina;
	cout << "Введиты ширину: ";
	cin >> shirina;
	cout << "Введиты длину: ";
	cin >> dlina;
	cout << "Введиты высоту: ";
	cin >> glubina;
	cout << "Вместимый объем: " << shirina * dlina * glubina << endl;
	cout << "Площадь водной поверхности: " << shirina * dlina << endl;
	cout << "Необходимо: " << (shirina * dlina) / 500 << " кафелей размером 20х25" << endl;



}
