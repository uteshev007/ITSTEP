// ************  FILE ******************
// ifstream -> input file stream 
// ofstream -> output file stream
// fstream -> i/o file stream
#include <iostream>;
#include <fstream>;
#include <string>;


using namespace std;




int main() {
	/*setlocale(LC_ALL, "RUS");*/
	system("chcp 1251 > null");
	// type  name
	//ofstream fout; // create stream for redact file.
	// if file not found - ofstream create the file.
	//fout.open("MyFile.txt"); // Open MyFile
	//if (!fout.is_open())
	//{
	//	cout << "File open error!";
	//	return 1;
	//}

	//fout << "Hello!";

	/*
	1. ������� ��������� ���� � �������� � ���� ����� "����������, ���!".
	*/

	//ofstream Hello;
	//Hello.open("Hello.txt");
	//if (!Hello.is_open())
	//{
	//	cout << "Error!"; 
	//	return 1;
	//}

	//Hello << "����������, ���!";

	/*
	2. ������� ��������� ���� � �������� � ���� ����� "����� ���, <����_���>!".
	*/

	//ofstream Zdes;
	//Zdes.open("Zdes.txt");
	//if (!Zdes.is_open())
	//{
	//	cout << "Error!";
	//	return 1;
	//}

	//Zdes << "����� ���, �����!";

	/*
	3. �������� ������ ����� � ����, ���������� ������ ������� ������� �� ��������� ������ � ����������� �������.
	*/

	//ofstream arr;
	//arr.open("arr.txt");
	//if (!arr.is_open())
	//{
	//	cout << "Error!";
	//	return 1;
	//}
	//const int count = 7;
	//string days[count] = { "�����������", "�������","�����","�������","�������","�������","�����������" };
	//for (int i = 0; i < count; i++)
	//{
	//	arr << days[i] << endl;
	//}

	//*************************** FSTREAM ***************************************
	// Not create file, only read;
	//ifstream fin;
	//fin.open("MyFile.txt");
	//if (!fin.is_open())
	//{
	//	cout << " File Open Error!";
	//	return 1;
	//}
	// Posimvolnoe schityvaenie rabotaet cherez fi.get();
	//char a = fin.get();
	//cout << a;
	//
	//while (!fin.eof())
	//{
	//	char a = fin.get();
	//	if (!fin.eof())
	//		cout << a;
	//}

	// **** POSTROCHNOE CHTENIE FAILA ****
	//	string line;
		//while (!fin.eof())
		//{
		//getline(fin, line);
		//cout << line << endl;
		//}
	//	fin.close();

	//
	//char str[100];
	//while (!fin.eof())
	//{
	//fin.getline(str, 100);
	//cout << str << endl;
	//}
	//fin.close();

	// *** CHTENIE PO SLOVAM ****

	//string str;
	//fin >> str;
	//cout << str;


/*
4. � ����� ������������� ���������� ����� �������� ������ � ������� "�� �������� ����!".
*/
	//ofstream Task;
	//Task.open("Task.txt", ios::app);
	//if (!Task.is_open())
	//{
	//	cout << "Error!";
	//}
	//Task << "�� �������� ����!";

/*
5. ��� ��������� ����. ���������� ������� ����� ����, � ������� ���������� �� ��������� ����� ��� �����, ��������� �� ����� ��� �� ���� ����.
*/

	//ofstream Task;
	//Task.open("Task.txt");
	//if (!Task.is_open())
	//{
	//	cout << "Error!";
	//}


	// Parser

	//ofstream Task2;
	//ifstream Task;
	//Task.open("Task.txt");
	//Task2.open("Task2.txt");
	//if (!Task.is_open() || !Task2.is_open())
	//{
	//	cout << "Error1!";
	//	return 1;
	//}
	//string str;
	//while (!Task.eof())
	//{
	//	// Po ' ', '\n', '\t';
	//	Task >> str;
	//	if (str.length() >= 7)
	//	{
	//	Task2 << str << " ";

	//	}
	//}

	//Task2.close();
	//Task.close();
	//


	/*
6. ��� ��������� ����. ���������� ���������� ��� ������ � ������ ����.
������� ����� �� ������ ����� ������ ��������� � �������� ����� � �������� �����.
	*/
	
	//ofstream Task3;
	//ifstream Task;
	//Task.open("Task.txt");
	//Task3.open("Task3.txt");
	//if (!Task.is_open() || !Task3.is_open())
	//{
	//	cout << "Error1!";
	//	return 1;
	//}
	//string line;
	//while (!Task.eof())
	//{
	//	getline(Task, line);
	//	Task3 << line << endl;
	//}
	//Task3.close();
	//Task.close();


/*
7. ��� ��������� ����. ���������� ���������� ��� ������ � ������ ����.
������� ����� �� ������ ����� ������ ���� �������� �� ��������� � ������� ����� � �������� �����.
*/
	//ofstream Task4;
	//ifstream Task;
	//Task.open("Task.txt");
	//Task4.open("Task4.txt");
	//if (!Task.is_open() || !Task4.is_open())
	//{
	//	cout << "Error1!";
	//	return 1;
	//}
	//int lineCount = 0;
	//while (!Task.eof())
	//{
	//	char a = Task.get();
	//	if (a == '\n' && !Task.eof())
	//		lineCount++;
	//}
	//Task.close();
	//Task.open("Task.txt");
	//string* arr = new string[lineCount];
	//int i = 0;
	//while (!Task.eof())
	//{
	//	getline(Task, arr[i]);
	//	i++;
	//}

	//while (lineCount)
	//{
	//	lineCount--;
	//	Task4 << arr[lineCount] << endl;;
	//}

	//Task4.close();
	//Task.close();


/*
9. ���� ��� ��������� �����. ��������, ��������� �� �� ������. ���� ���, �� ������� ������������� ������ �� ������� �����.
*/





}
