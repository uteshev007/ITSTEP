#include <iostream>
using namespace std;

/*
1. *Создать структуру, описывающую товар.
В структуру входят: название товара, цена, описание, фирма изготовитель.
Реализовать функции для иллюстрации работы с этой структурой.
*/

struct Order
{
	string name;
	size_t price;
	string description;
	string manufacturer;
};

Order createOrder()
{
	Order currentOrder;
	cout << "Введите название товара: " << endl;
	cin >> currentOrder.name;
	cout << "Введите цену товара: " << endl;
	cin >> currentOrder.price;
	cout << "Введите описание товара: " << endl;
	cin >> currentOrder.description;
	cout << "Введите производителя товара: " << endl;
	cin >> currentOrder.manufacturer;
	return currentOrder;
}

void Info(Order currentOrder)
{
	
	cout << "************* Информация о товаре ******************" << endl;
	cout << "Название товара: " << currentOrder.name << endl;
	cout << "Цена товара: " << currentOrder.price << endl;
	cout << "Описание товара: " << currentOrder.description << endl;
	cout << "Производитель товара: " << currentOrder.manufacturer << endl;
	cout << "****************************************************" << endl;
}


/*
2. *Описать структуру Date для хранения даты.
Поля структуры: день, месяц, год.
Написать функции для этой структуры Date для ввода с консоли и печати на консоль

Точно такая же реализация как и в 1

*/





/*
3. *Описать структуру Student с полями: фамилия, группа, дата поступления.
Проиллюстрировать работу с этой структурой.
*/

struct Student
{
	string surname;
	string name;
	string group;
	size_t entrance;
void PrintInfo() 
{
	cout << "Фамилия: " << surname << endl << "Имя: " << name << endl << "Группа: " << group << endl << "Год поступления: " << entrance << endl;
}
};


int main()
{
	///////////////// 1 и 2 ////////////////

	setlocale(LC_ALL, "RUS");
	Order currentOrder = createOrder();
	Info(currentOrder);

	///////////////// 2 /////////////////

	Student random{"Uteshev", "Askhat", "SEP-222.4", 2022};
	random.PrintInfo();

}