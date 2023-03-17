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
	1. Создать текстовый файл и записать в него фразу "Здравствуй, мир!".
	*/

	//ofstream Hello;
	//Hello.open("Hello.txt");
	//if (!Hello.is_open())
	//{
	//	cout << "Error!"; 
	//	return 1;
	//}

	//Hello << "Здравствуй, Мир!";

	/*
	2. Создать текстовый файл и записать в него фразу "Здесь был, <Ваше_имя>!".
	*/

	//ofstream Zdes;
	//Zdes.open("Zdes.txt");
	//if (!Zdes.is_open())
	//{
	//	cout << "Error!";
	//	return 1;
	//}

	//Zdes << "Здесь был, Асхат!";

	/*
	3. Записать массив строк в файл, расположив каждый элемент массива на отдельной строке с сохранением порядка.
	*/

	//ofstream arr;
	//arr.open("arr.txt");
	//if (!arr.is_open())
	//{
	//	cout << "Error!";
	//	return 1;
	//}
	//const int count = 7;
	//string days[count] = { "Понедельник", "Вторник","Среда","Четверг","Пятница","Суббота","Воскресенье" };
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
4. В конец существующего текстового файла записать строку с текстом "До свиданья люди!".
*/
	//ofstream Task;
	//Task.open("Task.txt", ios::app);
	//if (!Task.is_open())
	//{
	//	cout << "Error!";
	//}
	//Task << "До свиданья люди!";

/*
5. Дан текстовый файл. Необходимо создать новый файл, в который переписать из исходного файла все слова, состоящие не менее чем из семи букв.
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
6. Дан текстовый файл. Необходимо переписать его строки в другой файл.
Порядок строк во втором файле должен совпадать с порядком строк в заданном файле.
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
7. Дан текстовый файл. Необходимо переписать его строки в другой файл.
Порядок строк во втором файле должен быть обратным по отношению к порядку строк в заданном файле.
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
9. Дано два текстовых файла. Выяснить, совпадают ли их строки. Если нет, то вывести несовпадающую строку из каждого файла.
*/





}
