#include "Header.h"
using namespace std;

/*
 �������� - ������
 * ������� ����
 * ����� ����
 *		-1. �������� �������
 *		 0. ������� ������� �� �����
 *		 1. ������ ����
 *		 2. ���� � ������������ ���� ������
 *
 *
*/


int  menuRow = 3, menuCol = 6;
int gameRow = 3, gameCol = 6;
int Select = 0;
// ��������� ��� ����� ���������� ������� ����
int colSelFon = _COLOR::light_green;
int colSelSym = _COLOR::red;
// ��������� ��� ����� �� ���������� ������� ����
int colUnselFon = _COLOR::black;
int colUnselSym = _COLOR::white;

int stdFon = _COLOR::black;
int stdSym = _COLOR::white;

//������������ ��� ������. ���.

void About()
{
	system("cls"); // ������ �������
	SetPos(5, 8);
	cout << "��� ��� ������ ���\n";
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

	// ���������� ��� ������� � ����
	int curRow = gameRow + 1;
	int curCol = gameCol + 2;
	int _row = 0; int _col = 0; // ���������� ��� ������ �����
	int win = 0;
	bool isStepX = true;

	int cell[3][3] = { 0 }; // ��������� ������ ������ 3 � 3

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
			if (win != 0) {
				break;
			}
			SetPos(curRow, curCol);
			int key;
			key = _getch();


			switch (key)
			{
			case _KEY::RIGHT:
				if (_col < 2) {
				_col ++;
				curCol += 4;
				}
				break;
			case _KEY::LEFT:
				if (_col > 0) {
					_col --;
					curCol -= 4;
				}break;
			case _KEY::UP:
				if (_row > 0) {
					_row--;
					curRow -= 2;
				}break;
			case _KEY::DOWN:
				if (_row < 2) {
					_row++;
					curRow += 2;
				}; break;
			case _KEY::ESC: system("cls"); CursorHide(FALSE, 20); return;
			case _KEY::ENTER:
				if (isStepX)
				{
					if (cell[_row][_col] == 0)
					{
					cout << "X";
					cell[_row][_col] = 'X';
					isStepX = false;
					}
				}
				else
				{
					if (cell[_row][_col] == 0)
					{
						cout << "O";
						cell[_row][_col] = 'O';
						isStepX = true;
					}
				}
			// �� �����������
				if (cell[0][0] == cell[0][1] && cell[0][1] == cell[0][2])
					win = cell[0][0];
				if (cell[1][0] == cell[1][1] && cell[1][1] == cell[1][2])
					win = cell[1][1];
				if (cell[2][0] == cell[2][1] && cell[2][1] == cell[2][2])
					win = cell[2][2];
			// �� ���������
				if (cell[0][0] == cell[1][0] && cell[1][0] == cell[2][0])
					win = cell[1][0];
				if (cell[0][1] == cell[1][1] && cell[1][1] == cell[2][1])
					win = cell[0][1];
				if (cell[0][2] == cell[1][2] && cell[1][2] == cell[2][2])
					win = cell[1][2];
			// �� ���������
				if (cell[0][0] == cell[1][1] && cell[1][1] == cell[2][0])
					win = cell[1][1];
				if (cell[2][0] == cell[1][1] && cell[1][1] == cell[2][2])
					win = cell[2][2];

			default: break;
			}
		}
		if(win == 'X') 
		{
			system("cls");
			cout << "�������: �" << endl;
		}
		if (win == 'O')
		{
			system("cls");
			cout << "�������: O" << endl;
		}
		system("pause");
		Init();

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
		cout << "������ ����";
		if (Select == 1)
			SetColor(colSelFon, colSelSym);
		else
			SetColor(colUnselFon, colUnselSym);
		SetPos(menuRow + 1, menuCol);
		cout << "�� �������";
		if (Select == 2)
			SetColor(colSelFon, colSelSym);
		else
			SetColor(colUnselFon, colUnselSym);
		SetPos(menuRow + 2, menuCol);
		cout << "�����";
		SetColor(stdFon, stdSym);

		if (_kbhit)
		{
			int key;
			key = _getch();
			// ���� ������������ ����� �� ������ ������, ��� �� ������
			// � ������� ������

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
