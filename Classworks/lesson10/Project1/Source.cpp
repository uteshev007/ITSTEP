#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	// ������� C FOR
/*
	int a;
	cout << "Vvedite storonu kvadrata: ";
	cin >> a;
	char c;
	cout << "Vvedite simvol zapolneniya: ";
	cin >> c;
	for (int j = 0; j < a; j++) 
	{
		for (int i = 0; i < a; i++)
		{
			cout << c;
		}
		cout << endl;
	}
*/

	// ������� � WHILE

/*
	int a;
	cout << "Vvedite storonu kvadrata: ";
	cin >> a;
	char c;
	cout << "Vvedite simvol zapolneniya: ";
	cin >> c;
	int y = 0;
	while (y < a)
	{
		int x = 0;
		while (x < a)
		{
			cout << c;
			x++;
		}
		cout << endl;
		y++;
	}
*/

	// �������������

	/*
	cout << "������� ������� �: ";
	int a;
	cin >> a;
	cout << "������� ������� b: ";
	int b;
	cin >> b;
	cout << "������� ������ ����������: ";
	char s;
	cin >> s;
	int y = 0;
	while (y < a)
	{
		int x = 0;
		while (x < b)
		{
			cout << s;
			x++;
		}
		cout << endl;
		y++;
	}
	*/

	// ������ 

	/*
	cout << "������� ������� ��������: ";
	int a, b;
	cin >> a >> b;
	cout << "������� ������ ����������: ";
	char s;
	cin >> s;
	int y = 0;
	while (y < a)
	{
		int x = 0;
		while (x < b)
		{
			if (x == 0 || y == 0 || x == b - 1 || y == a - 1)
				cout << s;
			else
				cout << " ";
			x++;
		}
		cout << endl;
		y++;
	}
	*/


	/*
	13. �������� ���������, ������� ������ ������������� ������������ 4� �����. 
	
	+		+	+++   +++
	++     ++	++	   ++
	+++   +++	+	    +
	

	*/

	int a;
	cout << "������� ����� :";
	cin >> a;
	cout << "������� ������ :";
	char c;
	cin >> c;
	for (int y = 0; y < a; y++)
	{
		for (int x = 0; x < y + 1; x++)
		{
			cout << c; 
		}

		for (int x = 0; x < a; x++)
		{
			if (x > a - (y + 1))
				cout << c;
			else
				cout << " ";
			cout << c;
		}
		cout << endl;
	}



}


