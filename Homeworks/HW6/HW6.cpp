#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
// 1	
	cout << "������� ���-������: ";
	char symbol;
	cin >> symbol;
	if (symbol >= '0' && symbol <= '9')
		cout << "�� ����� �����";
	else if (symbol >= 'A' && symbol <= 'Z' || symbol >= 'a' && symbol <= 'z')
		cout << "�� ����� ���� �����";
	else if (symbol >= '�' && symbol <= '�' || symbol >= '�' && symbol <= '�')
		cout << "�� ����� ���� �����";
	else
		cout << "�� ����� ������";
	

// 2

	cout << "������� ����� ������: ";
	int month;
	cin >> month;
	switch (month)
	{
	case 1: cout << "������"; break;
	case 2: cout << "�������"	; break;
	case 3: cout << "����"; break;
	case 4: cout << "������"; break;
	case 5: cout << "���"	; break;
	case 6: cout << "����"; break;
	case 7: cout << "����"; break;
	case 8: cout << "������"; break;
	case 9: cout << "��������"; break;
	case 10: cout << "�������"; break;
	case 11: cout << "������"; break;
	case 12: cout << "�������"; break;
	default: "��� ������ ������"; break;
	}
	
// 4
	
	cout << "������� ���: ";
	int year;
	cin >> year;
	year = (year - 3) % 12;
	switch (year)
	{
	case 1: cout << "����"; break;
	case 2: cout << "������"; break;
	case 3: cout << "����"; break;
	case 4: cout << "����"; break;
	case 5: cout << "������"; break;
	case 6: cout << "����"; break;
	case 7: cout << "������"; break;
	case 8: cout << "����"; break;
	case 9: cout << "��������"; break;
	case 10: cout << "������"; break;
	case 11: cout << "������"; break;
	case 12: cout << "������"; break;
	default: "��� ������ ������"; break;
	}


//5

	cout << "������� ���������� ����� ���: ";
	int day;
	cin >> day;
	switch (day)
	{
	case 1: cout << "�����������: ������ - ��� - ���"; break;
	case 2: cout << "�������: ������ - ��� - ����������"; break;
	case 3: cout << "�����: ������ - ��� - �++"; break;
	case 4: cout << "�������: ������ - ��� - �������"; break;
	case 5: cout << "�������: ������ - ��� - �++"; break;
	case 6: cout << "�������: ��� - ���� - �����"; break;
	case 7: cout << "�����������: ��� - �������� - ����������"; break;
	default: "��� ������ ���"; break;
	}
	

// 21 

	cout << "������� �������� � ��/���: ";
	double kmh, ms;
	cin >> kmh;
	cout << "������� �������� � �/���: ";
	cin >> ms;
	kmh /= 3.6;
	if (kmh > ms)
		cout << kmh * 3.6 << " ������";
	else if (kmh = ms)
		cout << "�������� �����";
	else
		cout << ms << " ������";


}