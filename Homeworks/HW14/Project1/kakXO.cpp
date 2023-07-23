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


void zadacha1()
{
	system("cls"); // Чистим консоль
	SetPos(5, 8);
	cout << "Утешев Асхат. Студент ITSTEP\n";
	system("pause"); //
	system("cls");
}

void zadacha2()
{
	setlocale(LC_ALL, "RUS");
	system("color 07");
	system("cls");
	CursorHide(FALSE, 20);
}

void zadacha3()
{
	system("cls"); // Чистим консоль
	SetPos(5, 8);
	cout << "Тут еще ничего нет\n";
	system("pause"); //
	system("cls");
}

void zadacha4()
{
	system("cls"); // Чистим консоль
	SetPos(5, 8);
	cout << "Тут еще ничего нет\n";
	system("pause"); //
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
				case 0: zadacha1(); break;
				case 1: zadacha2(); break;
				case 2: zadacha3(); break;
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

int main (){
	setlocale(0, "RUS");

	GameLoop();
	zadacha1();
	zadacha2();
	zadacha3();
	zadacha4();
	return 0;

}
