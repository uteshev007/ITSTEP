#include <iostream>;
#include <fstream>;
#include <string>;
using namespace std;


int main()
{
	setlocale(0, "RUS");
/*
�������� ������ ����� � ����, ���������� ������ ������� ������� �� ��������� ������ � ����������� �������.
*/
	int const SIZE = 12;
	string month [SIZE] = { "������", "�������", "����" , "������" , "���" , "����" , "����" , "������" , "��������" , "�������" , "������" , "�������" };
	ofstream Monthes;
	Monthes.open("File.txt");
	if (!Monthes.is_open())
	{
		cout << "File opening Error!";
		return 1;
	}
	for (int i = 0; i < SIZE; i++)
	{
		Monthes << month[i] << endl;
	}
	Monthes.close();


/*
5. ��� ��������� ����. ���������� ������� ����� ����, � ������� ���������� �� ��������� ����� ��� �����, ��������� �� ����� ��� �� ���� ����.
*/
	ofstream Result;
	ifstream Task5;
	Result.open("File.txt", ios::app);
	Task5.open("HW.txt");
	if (!Result.is_open() || !Task5.is_open())
	{
		cout << "File opening Error!";
		return 1;
	}
	string word;
	Result << endl << " ******************* START 5 ������� ***********************" << endl;
	while (!Task5.eof())
	{
		Task5 >> word;
		if (word.length() >= 7) 
			Result << word << endl;
	}
	Result << endl << " ******************* END 5 ������� ***********************" << endl;
	Result.close();
	Task5.close();


/*
6. ��� ��������� ����. ���������� ���������� ��� ������ � ������ ����.
������� ����� �� ������ ����� ������ ��������� � �������� ����� � �������� �����.
*/
	ofstream Result6;
	ifstream Task6;
	Result6.open("File.txt", ios::app);
	Task6.open("HW.txt");
	if (!Result6.is_open() || !Task6.is_open())
	{
		cout << "File opening Error!";
		return 1;
	}
	string line;
	Result6 << endl << " ******************* START 6 ������� ***********************" << endl;
	while (!Task6.eof())
	{
		getline(Task6, line);
		Result6 << line << endl;
	}
	Result6 << endl << " ******************* END 5 ������� ***********************" << endl;
	Result6.close();
	Task6.close();

}