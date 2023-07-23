#include <iostream>
using namespace std;

/*
1. *������� ���������, ����������� �����.
� ��������� ������: �������� ������, ����, ��������, ����� ������������.
����������� ������� ��� ����������� ������ � ���� ����������.
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
	cout << "������� �������� ������: " << endl;
	cin >> currentOrder.name;
	cout << "������� ���� ������: " << endl;
	cin >> currentOrder.price;
	cout << "������� �������� ������: " << endl;
	cin >> currentOrder.description;
	cout << "������� ������������� ������: " << endl;
	cin >> currentOrder.manufacturer;
	return currentOrder;
}

void Info(Order currentOrder)
{
	
	cout << "************* ���������� � ������ ******************" << endl;
	cout << "�������� ������: " << currentOrder.name << endl;
	cout << "���� ������: " << currentOrder.price << endl;
	cout << "�������� ������: " << currentOrder.description << endl;
	cout << "������������� ������: " << currentOrder.manufacturer << endl;
	cout << "****************************************************" << endl;
}


/*
2. *������� ��������� Date ��� �������� ����.
���� ���������: ����, �����, ���.
�������� ������� ��� ���� ��������� Date ��� ����� � ������� � ������ �� �������

����� ����� �� ���������� ��� � � 1

*/





/*
3. *������� ��������� Student � ������: �������, ������, ���� �����������.
����������������� ������ � ���� ����������.
*/

struct Student
{
	string surname;
	string name;
	string group;
	size_t entrance;
void PrintInfo() 
{
	cout << "�������: " << surname << endl << "���: " << name << endl << "������: " << group << endl << "��� �����������: " << entrance << endl;
}
};


int main()
{
	///////////////// 1 � 2 ////////////////

	setlocale(LC_ALL, "RUS");
	Order currentOrder = createOrder();
	Info(currentOrder);

	///////////////// 2 /////////////////

	Student random{"Uteshev", "Askhat", "SEP-222.4", 2022};
	random.PrintInfo();

}