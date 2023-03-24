#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstring>
#include <ctime>

using namespace std;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
bool gameOver;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;
const int height = 27;
int x, y, ArmorX, AmmoX, ArmorY, AmmoY, score;
const int width = 118;

/*
Разработать структуру танк
*/
struct Tank
{
	int TankColor;
	int TankSpeed;
	int TankCoord;
	int TankHealth;
	int TankAmmo;
	int TankArmor;	

};
/*
Разработать структуру оружие
*/
struct ammo
{
	int TankAmmoSpeed;
	int TankAmmoColor;
	int TankAmmoDestroy;
};
void GoToXY(short x, short y)
{
	SetConsoleCursorPosition(hStdOut, { x, y });
}



void Map()
{
	dir = STOP;
	x = width / 2 - 1;
	y = height / 2 -1;
	AmmoX = rand() % width;
	AmmoY = rand() % height;
	ArmorX = rand() % width;
	ArmorY = rand() % height;
	score = 0;


}
void Draw()
	{
		system("cls");
		for (int i = 0; i < width + 1; i++)
			cout << "#";
		cout << endl;

		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (j == 0 || j == width -1)
					cout << "#";
				if (i == y && j == x)
				{	cout << "   |   " << endl;
					cout << "|#|||#|" << endl;
					cout << "|#| |#|" << endl;
				}
				else if (i == AmmoY && j == AmmoX)
					cout << "Ammo";
				else if (i == ArmorY && j == ArmorX)
					cout << "Armor";
				else
					cout << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < width + 1; i++)
			cout << "#";
		cout << endl;
	}
void Menu()
{
	/*		Меню	*/

#define ESC 27
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 13


	string Menu[] = { "Новая игра", "Cтатистика", "Выход" };
	int active_menu = 0;
	while (true)
	{
		int x = 40, y = 12;
		GoToXY(x, y);
		for (int i = 0; i < size(Menu); i++)
		{
			if (i == active_menu)
				SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
			else
				SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
			(sizeof(Menu) / sizeof(*Menu));
			GoToXY(x, y++);
			cout << Menu[i] << endl;
		}
		if (_kbhit())
			{
				switch (_getch())
				{
				case ESC:
					exit(0);
				case UP:
					if(active_menu > 0)
						--active_menu;
					break;
				case DOWN:
					if(active_menu < size(Menu)-1)
						++active_menu;
					break;
				case ENTER:
					switch (active_menu)
					{
					case 0:Draw();
						system("pause");
						break;
					case 1:
						system("CLS");
						GoToXY(x, y);
						SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						cout << "Пользователь выбрал \"" << Menu[active_menu] << "\"";
						_getch();
						system("CLS");
						break;
					case 2:
						exit(0);
					}
					break;
			
				}
			};
	}
}




int main()
{
	setlocale(0, "ru");
	SetConsoleTitle(L"TANKI");
	Menu();
	Draw();
	
	







}