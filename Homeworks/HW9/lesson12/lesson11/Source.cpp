#include "Header.h"
using namespace std;

int  menuRow = 3, menuCol = 6;
int gameRow = 3, gameCol = 6;
int Select = 0;
// Перменные для цвета выбранного пунката меню
int colSelFon = _COLOR::light_green;
int colSelSym = _COLOR::red;
// Перменные для цвета не выбранного пунката меню
int colUnselFon = _COLOR::black;
int colUnselSym = _COLOR::white;

int stdFon = _COLOR::black;
int stdSym = _COLOR::white;

//возвращаемый тип данных. Имя.

void zadacha4()
{
	system("cls"); // Чистим консоль
	SetPos(5, 8);
	cout << "Задача № 4\n";
	system("pause"); //
	system("cls");
}

void Init()
{
	setlocale(LC_ALL, "RUS");
	system("color 07");
	system("cls");
	CursorHide(FALSE, 20);
}

void zadacha1() {
	
	system("cls"); // Чистим консоль
	SetPos(5, 8);
	cout << "Задача № 3\n";
	system("pause"); //
	system("cls");

}

void PrintArr(char arr[], char size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

void PrintArr2(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}


void zadacha2()
{
	system("cls"); // Чистим консоль
	SetPos(5, 8);
	cout << "Задача № 1\n";
	cout << "Напишите программу, которая суммирует элементы массива из 10 элементов по следующему принципу:" << endl;
	cout << "первый суммирует с последним; второй - с предпоследним и т.д." << endl;
	cout << "Сумму сохранить в массиве из 5 элементов." << endl;
	cout << "Например," << endl;
	cout << "исходный массив[10]:      5 1 7 3 4 9 6 8 3 4" << endl;
	cout << "результирующий массив[5] : 9 4 15 9 13\n";

	int arr[] = { 5, 1 , 7 , 3 , 4 , 9 , 6 , 8 , 3 , 4 };
	int resarr[5];
	for (int i = 0; i < 5; i++)
	{
		resarr[i] = arr[i] + arr[9 - i];
	}

	cout << endl;
	PrintArr2(resarr, 5);
	cout << endl;
	system("pause"); //
	system("cls");
}

void zadacha3()
{
	system("cls"); // Чистим консоль
	SetPos(5, 8);
	cout << "Задача № 2\n";
	cout << "Одномерный массив из 20 символов заполнить буквами английского алфавита (в алфавитном порядке) \n";
	const int SIZE = 20;
	char alphabet[SIZE];
	for (int i = 0; i < SIZE; i++) {
		alphabet[i] = 'a' + i;
	}
	cout << endl;
	PrintArr(alphabet, SIZE);
	cout << endl;
	system("pause"); 
	system("cls");
}

void GameLoop()
{
	while (true)
	{
		if (Select == 0)
			SetColor(colSelFon, colSelSym);
		else
			SetColor(colUnselFon, colUnselSym);
		SetPos(menuRow + 0, menuCol);
		cout << "Задача № 1 ";
		if (Select == 1)
			SetColor(colSelFon, colSelSym);
		else
			SetColor(colUnselFon, colUnselSym);
		SetPos(menuRow + 1, menuCol);
		cout << "Задача № 2 ";
		if (Select == 2)
			SetColor(colSelFon, colSelSym);
		else
			SetColor(colUnselFon, colUnselSym);
		SetPos(menuRow + 2, menuCol);
		cout << "Задача № 3 ";
		if (Select == 3)
			SetColor(colSelFon, colSelSym);
		else
			SetColor(colUnselFon, colUnselSym);
		SetPos(menuRow + 3, menuCol);
		cout << "Задача № 4 ";
		if (Select == 4)
			SetColor(colSelFon, colSelSym);
		else
			SetColor(colUnselFon, colUnselSym);
		SetPos(menuRow + 4, menuCol);
		cout << "Выйти";
		SetColor(stdFon, stdSym);

		if (_kbhit)
		{
			int key;
			key = _getch();
			// Если пользователь нажал на кнопку узнает, что за кнопка
			// и изменит селект

			switch (key)
			{
			case _KEY::UP:
				if (Select == 0)
					Select = 4;
				else
					Select--;
				break;
			case _KEY::DOWN:
				if (Select == 4)
					Select = 0;
				else
					Select++;
				break;
			case _KEY::ENTER:
				switch (Select)
				{
				case 0: zadacha2(); break;
				case 1: zadacha3(); break;
				case 2: zadacha1(); break;
				case 3: zadacha4(); break;
				case 4: return;
				default:
					break;
				}
			default:
				break;
			}
		}

	}
}

int main() {
	Init();
	GameLoop();
	return 0;

 }
