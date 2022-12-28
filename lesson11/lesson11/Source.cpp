#include "Header.h"
using namespace std;

/*
 Крестики - нолики
 * Главное меню
 * Старт игры
 *		-1. Очистить консоль
 *		 0. Вернуть коурсор на место
 *		 1. Рисуем поле
 *		 2. Ждем и обрабатываем ввод игрока
 *
 *
*/


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

void About()
{
	system("cls");
	SetPos(5, 8);
	cout << "Тут еще ничего нет\n";
	system("pause");
	system("cls");
}

void StartGame()
{
	/*
	"+---+---+---+"
	"|   |   |   |"
	"+---+---+---+"
	"|   |   |   |"
	"+---+---+---+"
	"|   |   |   |"
	"+---+---+---+"
	*/
	int curRow = gameRow + 1;
	int curCol = gameCol + 2;

	system("cls");
	SetPos(gameRow + 0, gameCol);
	cout << "+---+---+---+" << endl;
	SetPos(gameRow + 1, gameCol);
	cout << "|   |   |   |" << endl;
	SetPos(gameRow + 2, gameCol);
	cout << "+---+---+---+" << endl;
	SetPos(gameRow + 3, gameCol);
	cout << "|   |   |   |" << endl;
	SetPos(gameRow + 4, gameCol);
	cout << "+---+---+---+" << endl;
	SetPos(gameRow + 5, gameCol);
	cout << "|   |   |   |" << endl;
	SetPos(gameRow + 6, gameCol);
	cout << "+---+---+---+" << endl;
	CursorHide(TRUE, 100);
		while (true)
		{
			SetPos(curRow, curCol);
			int key;
			key = _getch();


			switch (key)
			{
			case _KEY::RIGHT:curCol += 4; break;
			case _KEY::LEFT:curCol -= 4; break;
			case _KEY::UP:curRow -=2; break;
			case _KEY::DOWN:curRow +=2; break;
			case _KEY::ESC: system("cls"); return;
			case _KEY::ENTER: cout << "X";
				if (isStepX)
				{
					cout << "X"

				}
			default:
				break;
			}
		}


}

void Init()
{
	setlocale(LC_ALL, "RUS");
	system("color 07");

	CursorHide(FALSE, 20);
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
		cout << "Начать игру";
		if (Select == 1)
			SetColor(colSelFon, colSelSym);
		else
			SetColor(colUnselFon, colUnselSym);
		SetPos(menuRow + 1, menuCol);
		cout << "Об авторах";
		if (Select == 2)
			SetColor(colSelFon, colSelSym);
		else
			SetColor(colUnselFon, colUnselSym);
		SetPos(menuRow + 2, menuCol);
		cout << "Выйти";

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
					Select = 2;
				else
					Select--;
				break;
			case _KEY::DOWN:
				if (Select == 2)
					Select = 0;
				else
					Select++;
				break;
			case _KEY::ENTER:
				switch (Select)
				{
				case 0: StartGame(); break;
				case 1: About(); break;
				case 2: return;
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
